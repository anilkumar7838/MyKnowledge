#include <iostream>
#include <windows.h>
#include <string.h>
#include <mysql.h>

using namespace std;

string insertSailor(MYSQL* conn){
    string sid, sname, rating, dob;
    cout<<"Enter SID:";
    cin>>sid;
    cout<<"Enter Name:";
    cin>>sname;
    cout<<"Enter rating:";
    cin>>rating;
    cout<<"Enter DOB:";
    cin>>dob;

    string query;
    query = "INSERT INTO SAILORS VALUES(" + sid + ",'" + sname + "'," + rating + ",'" + dob + "');";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record inserted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

void printSailors(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES *res;
    int qstate = mysql_query(conn,"select * from sailors");

    if(!qstate)
    {
        res = mysql_store_result(conn);
        cout<<"SID"<<'\t'<<"NAME"<<'\t'<<"RATING"<<'\t'<<"DOB"<<'\t'<<endl;
        while(row=mysql_fetch_row(res))
        {
            cout<<row[0]<<'\t'<<row[1]<<'\t'<<row[2]<<'\t'<<row[3]<<'\t'<<endl;
        }
    }
    else
    {
        cout<<"query error: "<<mysql_error(conn)<<endl;
    }
}

void deleteSailors(MYSQL* conn){
    //MYSQL_ROW row;
    //MYSQL_RES *res;
    string id;
    cout<<"id of sailor to delete: ";
    cin>>id;

    string query;
    query = "DELETE FROM SAILORS WHERE SID="+id+";";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record Deleted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

string insertBoat(MYSQL* conn){
    string bid, bname, color;
    cout<<"Enter BID:";
    cin>>bid;
    cout<<"Enter BName:";
    cin>>bname;
    cout<<"Enter color:";
    cin>>color;

    string query;
    query = "INSERT INTO BOATS VALUES(" + bid + ",'" + bname + "','" + color + "');";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record inserted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

void printBoats(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES *res;
    int qstate = mysql_query(conn,"select * from boats");

    if(!qstate)
    {
        res = mysql_store_result(conn);
        cout<<"BID"<<'\t'<<"NAME"<<'\t'<<"COLOR"<<'\t'<<endl;
        while(row=mysql_fetch_row(res))
        {
            cout<<row[0]<<'\t'<<row[1]<<'\t'<<row[2]<<'\t'<<endl;
        }
    }
    else
    {
        cout<<"query error: "<<mysql_error(conn)<<endl;
    }
}

void deleteBoat(MYSQL* conn){
    //MYSQL_ROW row;
    //MYSQL_RES *res;
    string id;
    cout<<"id of boat to delete: ";
    cin>>id;

    string query;
    query = "DELETE FROM BOATS WHERE BID="+id+";";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record Deleted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

int reserveBoat(MYSQL* conn){
    string sid, bid, date, time_slot;
    cout<<"Give SID and BID for sailor and boat to link"<<endl;
    cout<<"SID:";
    cin>>sid;
    cout<<"BID:";
    cin>>bid;
    cout<<"Date reserved:";
    cin>>date;
    cout<<"time slot:";
    cin>>time_slot;

    string query;
    query = "INSERT INTO RESERVES VALUES(" + sid + "," + bid + ",'" + date + "','" + time_slot + "');";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record inserted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

void printReserves(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES *res;
    int qstate = mysql_query(conn,"select * from reserves");

    if(!qstate)
    {
        res = mysql_store_result(conn);
        cout<<"SID"<<'\t'<<"BID"<<'\t'<<"DATE"<<'\t'<<"TIMESLOT"<<'\t'<<endl;
        while(row=mysql_fetch_row(res))
        {
            cout<<row[0]<<'\t'<<row[1]<<'\t'<<row[2]<<'\t'<<row[3]<<'\t'<<endl;
        }
    }
    else
    {
        cout<<"query error: "<<mysql_error(conn)<<endl;
    }
}

void deleteReserve(MYSQL* conn){
    //MYSQL_ROW row;
    //MYSQL_RES *res;
    string sid, bid;
    cout<<"id of sailor and boat to remove reservation:\n";
    cout<<"Sailor ID: ";
    cin>>sid;
    cout<<"Boat ID: ";
    cin>>bid;

    string query;
    query = "DELETE FROM RESERVES WHERE SID="+sid+" AND BID="+bid+";";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record Deleted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

void menu(MYSQL* conn){
    bool ch = true;

    while(ch){
        int choice;
        cout<<"\n********Welcome to Sailor-Boat Management System:*******\n"
            <<"1. Insert new Sailor\n"
            <<"2. Insert new Boat\n"
            <<"3. Delete Sailor\n"
            <<"4. Delete Boat\n"
            <<"5. Reserve Boat to Sailor\n"
            <<"6. Remove reservation of Boat from Sailor\n"
            <<"7. Exit\n";
        cout<<"Enter your choice: ";
        cin>> choice;

        switch(choice){
            case 1: {
                    insertSailor(conn);
                    cout<<"\n\n Current Table: \n";
                    printSailors(conn);
                    break;
                }
            case 2: {
                    insertBoat(conn);
                    cout<<"\n\n Current Table: \n";
                    printBoats(conn);
                    break;
                }
            case 3: {
                    cout<<"\n\n Current Table: \n";
                    printSailors(conn);
                    deleteSailors(conn);
                    break;
                }
            case 4: {
                    cout<<"\n\n Current Table: \n";
                    printBoats(conn);
                    deleteBoat(conn);
                    break;
                }
            case 5: {
                    cout<<"\n\n Current Tables: \n";
                    printSailors(conn);
                    printBoats(conn);
                    reserveBoat(conn);
                    cout<<"\n\n Current reservations: \n";
                    printReserves(conn);
                    break;
                }
            case 6: {
                    cout<<"\n\n Current reservations: \n";
                    printBoats(conn);
                    deleteReserve(conn);
                    break;
                }
            case 7: {
                    ch = false;
                    break;
                }
        }
    }
}

int main()
{
     MYSQL* conn;
     int qstate;
     //string query;

     conn = mysql_init(0);

     conn = mysql_real_connect(conn,"localhost","root","","sailorsproblem",3306,NULL,0);

     if(conn){
        menu(conn);
     }
     else
        cout<<"connection failure: "<<mysql_error(conn)<<endl;

    return 0;
}
