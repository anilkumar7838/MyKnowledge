#include <iostream>
#include<windows.h>
#include<mysql.h>
#include<sstream>

using namespace std;

const char* hostname="localhost";
const char* username="root";
const char* password="";
const char* database="test";
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
    cout<<"Enter password: "<<endl;
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


int main(){
    connectdatabase();
    return 0;
}
