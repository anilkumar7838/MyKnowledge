#include <iostream>
#include <windows.h>
#include <string.h>
#include <mysql.h>

using namespace std;



void printBooks(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES *res;
    int qstate = mysql_query(conn,"select * from book");

    if(!qstate)
    {
        res = mysql_store_result(conn);
        cout<<"BOOK_ID"<<'\t'<<"AUTHOR"<<'\t'<<"TITLE"<<'\t'<<"PRICE"<<"\t"<<"PUBLISHER NAME"<<'\t'<<endl;
        while(row=mysql_fetch_row(res))
        {
            cout<<row[0]<<'\t'<<row[1]<<'\t'<<row[2]<<'\t'<<row[3]<<'\t'<<row[4]<<'\t'<<endl;
        }
    }
    else
    {
        cout<<"query error: "<<mysql_error(conn)<<endl;
    }
}

void deleteBook(MYSQL* conn){
    //MYSQL_ROW row;
    //MYSQL_RES *res;
    string id;
    cout<<"id of Book to delete: ";
    cin>>id;

    string query;
    query = "DELETE FROM BOOK WHERE BOOK_ID="+id+";";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record Deleted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}
/*
void insertPublisher(MYSQL* conn,string Book_id){
    string pid, address, name;
    cout<<"Enter PUBLISHER_ID:";
    cin>>pid;
    cout<<"Enter Address:";
    cin>>address;
    cout<<"Enter Name:";
    cin>>name;
    //cout<<"Enter Book_id:";
    //cin>>Book_id;

    string query;
    query = "INSERT INTO PUBLISHER VALUES(" + pid + ",'" + address + "','" + name + "','" + Book_id + "');";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record inserted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}
*/
void insertBook(MYSQL* conn){
    string bid, author, title, price,pub_name;
    cout<<"Enter Book_id:";
    cin>>bid;
    cout<<"Enter Author Name:";
    cin>>author;
    cout<<"Enter title:";
    cin>>title;
    cout<<"Enter price:";
    cin>>price;

    cout<<"Publisher Name:";
    cin>>pub_name;

    string query;
    query = "INSERT INTO BOOK VALUES(" + bid + ",'" + author + "','" + title + "'," + price + ","  + pub_name +");";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        //insertPublisher(conn,bid);
        cout<<"record inserted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;

}
/*
void printPublisher(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES *res;
    int qstate = mysql_query(conn,"select * from Publisher");

    if(!qstate)
    {
        res = mysql_store_result(conn);
        cout<<"Publisher_ID"<<'\t'<<"Address"<<'\t'<<"Name"<<'\t'<<"Book_id"<<'\t'<<endl;
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
*/
/*
void deletePublisher(MYSQL* conn){
    //MYSQL_ROW row;
    //MYSQL_RES *res;
    string id;
    cout<<"id of Publisher to delete: ";
    cin>>id;

    string query;
    query = "DELETE FROM PUBLISHER WHERE PUB_ID="+id+";";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record Deleted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}
*/
void insertMember(MYSQL* conn){
    string Expiry_date, name, address,Memb_type,Memb_date,Memb_id;
    cout<<"Enter Expiry_date:";
    cin>>Expiry_date;
    cout<<"Enter Memb_ID:";
    cin>>Memb_id;
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Address:";
    cin>>address;
    cout<<"Enter Memb_type:";
    cin>>Memb_type;
    cout<<"Enter Memb_date:";
    cin>>Memb_date;

    string query;
    query = "INSERT INTO MEMBER VALUES('" + Expiry_date + "'," + Memb_id + ",'" + name + "','" + address + "','" + Memb_type + "','" + Memb_date + "');";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record inserted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

void printMembers(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES *res;
    int qstate = mysql_query(conn,"select * from member");

    if(!qstate)
    {
        res = mysql_store_result(conn);
        cout<<"Expiry_date"<<'\t'<<"Memb_id"<<'\t'<<"Name"<<'\t'<<"address"<<'\t'<<"Memb_type"<<'\t'<<"Memb_date"<<'\t'<<endl;
        while(row=mysql_fetch_row(res))
        {
            cout<<row[0]<<'\t'<<row[1]<<'\t'<<row[2]<<'\t'<<row[3]<<'\t'<<row[4]<<'\t'<<row[5]<<'\t'<<endl;
        }
    }
    else
    {
        cout<<"query error: "<<mysql_error(conn)<<endl;
    }
}

void deleteMember(MYSQL* conn){
    //MYSQL_ROW row;
    //MYSQL_RES *res;
    string id;
    cout<<"id of Member to delete: ";
    cin>>id;

    string query;
    query = "DELETE FROM MEMBER WHERE MEMB_ID="+id+";";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record Deleted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}
int insertBorrower(MYSQL* conn){
    string bid, mid, due_date,return_date, issue;
    cout<<"Give Book_ID :";
    cin>>bid;
    cout<<"Memb_ID:";
    cin>>mid;
    cout<<"Due_date:";
    cin>>due_date;
    cout<<"Return_date:";
    cin>>return_date;
    cout<<"Issue(y/n):";
    cin>>issue;

    string query;
    query = "INSERT INTO BORROW VALUES(" + bid + "," + mid + ",'" + due_date + "','" + return_date + "');";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record inserted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}
void deleteBorrower(MYSQL* conn){
    //MYSQL_ROW row;
    //MYSQL_RES *res;
    string book_id,Memb_id;
    cout<<"Enter book_id: ";
    cin>>book_id;
    cout<<"Enter Memb_id: ";
    cin>>Memb_id;

    string query;
    query = "DELETE FROM BORROW WHERE BOOK_ID="+book_id+" AND MEMB_ID="+Memb_id+";";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record Deleted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

void printBorrower(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES *res;
    int qstate = mysql_query(conn,"select * from borrow");

    if(!qstate)
    {
        res = mysql_store_result(conn);
        cout<<"BOOK_ID"<<"\t"<<"MEMB_ID"<<'\t'<<"DUE_DATE"<<'\t'<<"RETURN_DATE"<<'\t'<<endl;
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



void menu(MYSQL* conn){
    bool ch = true;

    while(ch){
        int choice;
        cout<<"\n********Welcome to Library Management System:*******\n"
            <<"1. Add Book To The Library \n"
            <<"2. Add Members to Take Membership\n"
            <<"3. To issue Book to the Member\n"
            <<"4. Remove Books\n"
            <<"5. Delete Membership\n"
            <<"6. Delete Issued Record After Return\n"
            <<"7. Show All Records\n"
            <<"8. Exit\n";
        cout<<"Enter your choice: ";
        cin>> choice;

        switch(choice){
            case 1: {
                    insertBook(conn);
                    cout<<"\n\n Current Table: \n";
                    printBooks(conn);
                   // printPublisher(conn);
                    break;
                }
            case 2: {
                    insertMember(conn);
                    cout<<"\n\n Current Table: \n";
                    printMembers(conn);
                    break;
                }
            case 3: {
                    printBooks(conn);
                    printMembers(conn);
                    insertBorrower(conn);
                    cout<<"\n\n Current Table: \n";
                    printBorrower(conn);
                    break;
                }
            case 4: {
                    cout<<"\n\n Current Table: \n";
                    printBooks(conn);
                    deleteBook(conn);
                    break;
                }
                /*
            case 5: {
                    cout<<"\n\n Current Table: \n";
                    printPublisher(conn);
                    deletePublisher(conn);
                    break;
                }
                */
            case 5: {
                    cout<<"\n\n Current Table: \n";
                    printMembers(conn);
                    deleteMember(conn);
                    break;
                }
            case 6: {
                    cout<<"\n\n Current Table: \n";
                    printBorrower(conn);
                    deleteBorrower(conn);
                    break;
                }
            case 7: {
                    cout<<"\n\n Current Table: \n";
                    printBooks(conn);
                   // printPublisher(conn);
                    printMembers(conn);
                    printBorrower(conn);
                    break;
            }
            case 8: {
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

     conn = mysql_real_connect(conn,"localhost","root","","librarymanagement",3306,NULL,0);

     if(conn){
        menu(conn);
        //printMembers(conn);
        //printBorrower(conn);
     }
     else
        cout<<"connection failure: "<<mysql_error(conn)<<endl;

    return 0;
}
