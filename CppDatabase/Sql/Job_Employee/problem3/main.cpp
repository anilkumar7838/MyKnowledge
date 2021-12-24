#include <iostream>
#include <windows.h>
#include <string.h>
#include <mysql.h>

using namespace std;

string insertDep(MYSQL* conn){
    string depid, name, lid;
    cout<<"Enter Department_id:";
    cin>>depid;
    cout<<"Enter DepartmentName:";
    cin>>name;
    cout<<"Enter Location_id:";
    cin>>lid;

    string query;
    query = "INSERT INTO DEPARTMENT VALUES(" + depid + ",'" + name + "'," + lid + ");";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record inserted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

void printDep(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES *res;
    int qstate = mysql_query(conn,"select * from department");

    if(!qstate)
    {
        res = mysql_store_result(conn);
        cout<<"DEPARTMENT_ID"<<'\t'<<"DEPARTMENT_NAME"<<'\t'<<"LOCATION_ID"<<'\t'<<endl;
        while(row=mysql_fetch_row(res))
        {
            cout<<row[0]<<"\t\t"<<row[1]<<"\t\t"<<row[2]<<'\t'<<endl;
        }
    }
    else
    {
        cout<<"query error: "<<mysql_error(conn)<<endl;
    }
}

void deleteDep(MYSQL* conn){
    //MYSQL_ROW row;
    //MYSQL_RES *res;
    string id;
    cout<<"id of department to delete: ";
    cin>>id;

    string query;
    query = "DELETE FROM DEPARTMENT WHERE DEPARTMENT_ID="+id+";";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record Deleted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

void insertJob(MYSQL* conn){
    string jid, func;
    cout<<"Enter JOB_ID:";
    cin>>jid;
    cout<<"Enter FUNCTION:";
    cin>>func;

    string query;
    query = "INSERT INTO JOB VALUES(" + jid + ",'" + func + "');";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate){
        cout<<"record inserted successfully..."<<endl;
    }
    else{
        cout<<"query problem: "<<mysql_error(conn)<<endl;
    }
    return;
}

void printJobs(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES *res;
    int qstate = mysql_query(conn,"select * from job");

    if(!qstate)
    {
        res = mysql_store_result(conn);
        cout<<"JOB_ID"<<'\t'<<"FUNCTION"<<'\t'<<endl;
        while(row=mysql_fetch_row(res))
        {
            cout<<row[0]<<'\t'<<row[1]<<'\t'<<endl;
        }
    }
    else
    {
        cout<<"query error: "<<mysql_error(conn)<<endl;
    }
}

void deleteJob(MYSQL* conn){
    //MYSQL_ROW row;
    //MYSQL_RES *res;
    string id;
    cout<<"id of Job to delete: ";
    cin>>id;

    string query;
    query = "DELETE FROM JOB WHERE JOB_ID="+id+";";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record Deleted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

int insertEmp(MYSQL* conn){
    string eid, name, dob, jid, mid , date, salary, did;
    cout<<"Enter the Detail:"<<endl;
    cout<<"EMPLOYEE_ID: ";
    cin>>eid;
    cout<<"NAME: ";
    cin>>name;
    cout<<"DOB: ";
    cin>>dob;
    cout<<"JOB_ID:";
    cin>>jid;
    cout<<"MANAGER_ID: ";
    cin>>mid;
    cout<<"HIRE_Date: ";
    cin>>date;
    cout<<"SALARY: ";
    cin>>salary;
    cout<<"DEPARTMENT_ID: ";
    cin>>did;

    string query;
    query = "INSERT INTO EMPLOYEE VALUES(" + eid + ",'" + name + "','" + dob + "'," + jid + "," + mid + ",'" + date + "','" + salary + "'," + did + ");";

    const char* q = query.c_str();

    cout<<"query is: "<<q<<endl;
    int qstate = mysql_query(conn,q);

    if(!qstate)
        cout<<"record inserted successfully..."<<endl;
    else
        cout<<"query problem: "<<mysql_error(conn)<<endl;
}

void printEmp(MYSQL* conn){
    MYSQL_ROW row;
    MYSQL_RES *res;
    int qstate = mysql_query(conn,"select * from employee");

    if(!qstate)
    {
        res = mysql_store_result(conn);
        cout<<"EMPLOYEE_ID"<<'\t'<<"NAME"<<'\t'<<"DOB"<<"\t\t"<<"JOB_ID"<<'\t'<<"MANAGER_ID"<<'\t'<<"HIRE_DATE"<<'\t'<<"SALARY"<<'\t'<<"DEPARTMENT_ID"<<'\t'<<endl;
        while(row=mysql_fetch_row(res))
        {
            cout<<row[0]<<"\t\t"<<row[1]<<"\t"<<row[2]<<"\t"<<row[3]<<"\t\t"<<row[4]<<"\t"<<row[5]<<"\t"<<row[6]<<"\t"<<row[7]<<"\t"<<endl;
        }
    }
    else
    {
        cout<<"query error: "<<mysql_error(conn)<<endl;
    }
}

void deleteEmp(MYSQL* conn){
    //MYSQL_ROW row;
    //MYSQL_RES *res;
    string eid;
    cout<<"id of employee to remove:\n";
    cout<<"Employee ID: ";
    cin>>eid;

    string query;
    query = "DELETE FROM EMPLOYEE WHERE EMPLOYEE_ID="+eid+";";

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
        cout<<"\n********Welcome to Employee Management System:*******\n"
            <<"1. Insert new Department in DB\n"
            <<"2. Insert new Job in DB\n"
            <<"3. Insert new Employee in DB\n"
            <<"4. Remove Department\n"
            <<"5. Remove Job\n"
            <<"6. Remove Employee\n"
            <<"7. Exit\n";
        cout<<"Enter your choice: ";
        cin>> choice;

        switch(choice){
            case 1: {
                    insertDep(conn);
                    cout<<"\n\n Department Table: \n";
                    printDep(conn);
                    break;
                }
            case 2: {
                    insertJob(conn);
                    cout<<"\n\n Job Table: \n";
                    printJobs(conn);
                    break;
                }
            case 3: {
                    insertEmp(conn);
                    cout<<"\n\n Employee Table: \n";
                    printEmp(conn);
                    break;
                }
            case 4: {
                    cout<<"\n\n Department Table: \n";
                    printDep(conn);
                    deleteDep(conn);
                    printDep(conn);
                    break;
                }
            case 5: {
                    cout<<"\n\n Job Table: \n";
                    printJobs(conn);
                    deleteJob(conn);
                    printJobs(conn);
                    break;
                }
            case 6: {
                    cout<<"\n\n Current Table: \n";
                    printEmp(conn);
                    deleteEmp(conn);
                    cout<<"\n\n Employee Table: \n";
                    printEmp(conn);
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

     conn = mysql_real_connect(conn,"localhost","root","","employeeproblem",3306,NULL,0);

     if(conn){
        menu(conn);

     }
     else
        cout<<"connection failure: "<<mysql_error(conn)<<endl;

    return 0;
}
