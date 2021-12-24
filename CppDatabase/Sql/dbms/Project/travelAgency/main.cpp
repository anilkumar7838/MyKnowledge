#include <iostream>
#include <windows.h>
#include <string.h>
#include <mysql.h>

using namespace std;

void addCustomer(MYSQL* conn){
    string cid,fname, lname, bal;
    cout<<"Enter Cust_Num:";
    cin>>cid;
    cout<<"Enter First Name:";
    cin>>fname;
    cout<<"Enter Last Name:";
    cin>>lname;
    cout<<"Enter Cust_Balance:";
    cin>>bal;

    string query;
    query = "INSERT INTO CUSTOMER VALUES(" + cid + ",'" + fname + "','" + lname + "'," + bal + ");";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record inserted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

void printCustomer(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES *res;
    int qstate = mysql_query(conn,"select * from customer");

    if(!qstate)
    {
        res = mysql_store_result(conn);
        cout<<"CUST_NUM"<<'\t'<<"FNAME"<<"\t\t"<<"LNAME"<<'\t'<<"CUST_BALANCE"<<'\t'<<endl;
        while(row=mysql_fetch_row(res))
        {
            cout<<row[0]<<"\t\t"<<row[1]<<"\t\t"<<row[2]<<"\t\t"<<row[3]<<'\t'<<endl;
        }
    }
    else
    {
        cout<<"query error: "<<mysql_error(conn)<<endl;
    }
    cout<<endl;
}

void removeCustomer(MYSQL* conn){
    //MYSQL_ROW row;
    //MYSQL_RES *res;
    string id;
    cout<<"cust_num of Customer to delete: ";
    cin>>id;

    string query;
    query = "DELETE FROM CUSTOMER WHERE CUST_NUM="+id+";";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record Deleted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

void addProduct(MYSQL* conn){
    string pid, pname, price;
    cout<<"Enter Prod_num:";
    cin>>pid;
    cout<<"Enter Prod_Name:";
    cin>>pname;
    cout<<"Enter Price:";
    cin>>price;

    string query;
    query = "INSERT INTO PRODUCT VALUES(" + pid + ",'" + pname + "'," + price + ");";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record inserted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

void printProducts(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES *res;
    int qstate = mysql_query(conn,"select * from product");

    if(!qstate)
    {
        res = mysql_store_result(conn);
        cout<<"PROD_NUM"<<'\t'<<"PROD_NAME"<<'\t'<<"PRICE"<<'\t'<<endl;
        while(row=mysql_fetch_row(res))
        {
            cout<<row[0]<<"\t\t"<<row[1]<<"\t\t"<<row[2]<<'\t'<<endl;
        }
    }
    else
    {
        cout<<"query error: "<<mysql_error(conn)<<endl;
    }
    cout<<endl;
}

void removeProduct(MYSQL* conn){
    //MYSQL_ROW row;
    //MYSQL_RES *res;
    string id;
    cout<<"prod_num of product to delete: ";
    cin>>id;

    string query;
    query = "DELETE FROM PRODUCT WHERE PROD_NUM="+id+";";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record Deleted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

void makeInvoice(MYSQL* conn){
    string inv_num, prod_num, cust_num, date,unit,amount;
    cout<<"Enter invoice details: "<<endl;
    cout<<"INV_NUM: ";
    cin>>inv_num;
    cout<<"PROD_NUM: ";
    cin>>prod_num;
    cout<<"CUST_NUM: ";
    cin>>cust_num;
    cout<<"INV_DATE: ";
    cin>>date;
    cout<<"UNIT_SOLD: ";
    cin>>unit;
    cout<<"AMOUNT: ";
    cin>>amount;

    string query;
    query = "INSERT INTO INVOICE VALUES(" + inv_num + "," + prod_num + "," + cust_num + ",'" + date + "'," + unit + "," +amount+ ");";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record inserted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

void printInvoice(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES *res;
    int qstate = mysql_query(conn,"select * from invoice");

    if(!qstate)
    {
        res = mysql_store_result(conn);
        cout<<"INV_NUM"<<'\t'<<"PROD_NUM"<<'\t'<<"CUST_NUM"<<'\t'<<"DATE"<<"\t\t"<<"UNIT"<<'\t'<<"AMOUNT"<<'\t'<<endl;
        while(row=mysql_fetch_row(res))
        {
            cout<<row[0]<<'\t'<<row[1]<<"\t\t"<<row[2]<<"\t\t"<<row[3]<<'\t'<<row[4]<<"\t"<<row[5]<<'\t'<<endl;
        }
    }
    else
    {
        cout<<"query error: "<<mysql_error(conn)<<endl;
    }
    cout<<endl;
}

void removeInvoice(MYSQL* conn){
    //MYSQL_ROW row;
    //MYSQL_RES *res;
    string inv_num, prod_num, cust_num, date;
    cout<<"Specify details to delete invoice:\n";
    cout<<"INV_NUM: ";
    cin>>inv_num;
    cout<<"PROD_NUM: ";
    cin>>prod_num;
    cout<<"CUST_NUM: ";
    cin>>cust_num;
    cout<<"DATE: ";
    cin>>date;

    string query;
    query = "DELETE FROM INVOICE WHERE INV_NUM="+inv_num+" AND PROD_NUM="+prod_num+"AND CUST_NUM="+cust_num+"AND DATE='"+date+"';";

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
        cout<<"\n********Welcome to Customer_Product Management System:*******\n"
            <<"1. Add Customer details\n"
            <<"2. Add Product details\n"
            <<"3. Make Invoice\n"
            <<"4. Delete Customer details\n"
            <<"5. Delete Product details\n"
            <<"6. Delete Invoice\n"
            <<"7. Exit\n";
        cout<<"Enter your choice: ";
        cin>> choice;

        switch(choice){
            case 1: {
                    addCustomer(conn);
                    cout<<"\n\n Current Table: \n";
                    printCustomer(conn);
                    break;
                }
            case 2: {
                    addProduct(conn);
                    cout<<"\n\n Current Table: \n";
                    printProducts(conn);
                    break;
                }
            case 3: {
                    printCustomer(conn);
                    printProducts(conn);
                    makeInvoice(conn);
                    cout<<"\n\n Current Table: \n";
                    printInvoice(conn);
                    break;
                }
            case 4: {
                    cout<<"\n\n Current Table: \n";
                    printCustomer(conn);
                    removeCustomer(conn);
                    printCustomer(conn);
                    break;
                }
            case 5: {
                    cout<<"\n\n Current Table: \n";
                    printProducts(conn);
                    removeProduct(conn);
                    printProducts(conn);
                    break;
                }
            case 6: {
                    cout<<"\n\n Current Tables: \n";
                    printInvoice(conn);
                    removeInvoice(conn);
                    cout<<"\n\n Current reservations: \n";
                    printInvoice(conn);
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

     conn = mysql_real_connect(conn,"localhost","root","","customerproblem",3306,NULL,0);

     if(conn){
        menu(conn);
     }
     else
        cout<<"connection failure: "<<mysql_error(conn)<<endl;

    return 0;
}
