#include <iostream>
#include<windows.h>
#include<mysql.h>
using namespace std;

int main()
{
     MYSQL* conn;
     //int qstate;
     //string query;

     conn = mysql_init(0);

     conn = mysql_real_connect(conn,"localhost","root","","cppdb",3306,NULL,0);

     if(conn){
        cout<<"connection successfull"<<endl;
     }
     else{
        cout<<"connection failure: "<<mysql_error(conn)<<endl;
     }
    return 0;
}
