#include <iostream>
#include<windows.h>
#include<mysql.h>
#include<sstream>

using namespace std;

const char* hostname="localhost";
const char* username="root";
const char* password="";
const char* database="cppdb";
unsigned int port=3306;
const char* unixsocket=NULL;
unsigned long clientflag=0;

MYSQL* connectdatabase(){
    MYSQL *conn;
    conn=mysql_init(0);
    conn = mysql_real_connect(conn,hostname,username,password,database,port,unixsocket,clientflag);
    if(conn){
        cout<<"Connected to database"<<endl;
        return conn;
    }
    else{
        cout<<"Failed to connect"<<endl;
        return conn;
    }
}

insertion(MYSQL* conn){
    int qstate=0;
    stringstream ss;
    string usernamedb,emaildb,passworddb;
    cout<<"Enter username: ";
    cin>>usernamedb;
    cout<<"Enter email id: ";
    cin>>emaildb;
    cout<<"Enter password: ";
    cin>>passworddb;
    ss<<"INSERT INTO USERS(username,email,password) VALUES('"+usernamedb+"','"+emaildb+"','"+passworddb+"')";
    string query=ss.str();
    const char* q=query.c_str();
    qstate=mysql_query(conn,q);
    if(qstate==0){
        cout<<"Record inserted...~~~\n";
    }
    else{
        cout<<"Failed to insert...~~~\n";
    }

}
display(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES* res;
    if(conn){
        int qstate=mysql_query(conn,"SELECT * FROM users");
        if(!qstate){
            res=mysql_store_result(conn);
            int count=mysql_num_fields(res);
            while(row=mysql_fetch_row(res)){
                for(int i=0;i<count;i++){
                    cout<<"\t"<<row[i];
                }
                cout<<endl;
            }
        }
    }
    else{
        cout<<"FAILED TO FETCH"<<endl;
    }
}

int main(){
    MYSQL* conn=connectdatabase();
    insertion(conn);
    display(conn);
    return 0;
}
