#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Employee{
    public:
    string Name,Department,Address,Email_Id,Position;
    long long Id,Salary,Contact_No,Experience;
    Employee(){
        Name="";
        Id=0;
        Department="";
        Salary=0;
        Address="";
        Contact_No=0;
        Email_Id="";
        Position="";
        Experience=0;
    }
    void insert(){
        // Name
        cout<<"Enter the Name: ";
        cin>>this->Name;

        // ID
        int check=1,num;
        while(check){
            cout<<"Enter the ID(4-Digit): ";
            cin>>num;
            if(999<num && num<10000){
                this->Id=num;
                check=0;
            }
            else{
                cout<<"Please enter valid Id!!!!!"<<endl;
            }
        }

        // Department
        cout<<"Department: ";
        cin>>this->Department;

        //Salary
        cout<<"Enter the Salary: ";
        cin>>this->Salary;

        //Address
        int flag=1;
        string addr="";
        while(flag){
            cout<<"Enter the Address: ";
            cin>>addr;
            if(addr.length()<=12){
                this->Address=addr;
                flag=0;
            }
            else{
                cout<<"Alert! Address exceed the range."<<endl;
            }
        }
        // Contact_No
        cout<<"Enter the Contact_No: ";
        cin>>this->Contact_No;

        //Email_Id
        cout<<"Enter the Email_Id: ";
        cin>>this->Email_Id;

        //Position
        cout<<"Enter the Position: ";
        cin>>this->Position;

        // Experience in Years 
        cout<<"Enter the Experience(years) ";
        cin>>this->Experience;
    }
    void PrintList(){
        // cout<<"Details: ";
        cout<<"Name: "<<this->Name<<" ID: "<<this->Id<<" Department: "<<this->Department<<" Salary: "<<this->Salary<<" Address: "<<this->Address<<" Contact_No: "<<this->Contact_No<<" Email_Id: "<<this->Email_Id<<" Position: "<<this->Position<<" Experience: "<<this->Experience<<endl;
    }
};
void deleteList(Employee *ob,int *idx,int i, int *shifts){
        if(i < 1 || i > (*idx)){
            cout<<"Data doesn't exist.\n";
            return;
        }
        for(int k=i-1;k<(*idx);k++){
            (*ob)=*(ob+1);
            ob++;
            (*shifts)++;
        }
        (*idx)--;
        cout<<"Delete Sucessfull\n";
}

int main(){
    char ch,n;
    int idx=0;
    Employee ob[20];

    fstream fout,fin;
    // for read
    fin.open("temp.txt",ios::in);
    string str;
    char alpha;
    while(!fin.eof())
	{
        fin.get(alpha);
        while(true){
            if(alpha==' ' || alpha=='\n'  || alpha=='\r' || fin.eof()){
                break;
            }
            str+=alpha;
            fin.get(alpha);
        }
        if(ob[idx].Name==""){
            // cout<<"Name:"<<str<<endl;
            ob[idx].Name=str;
            str.erase();
            continue;
        }
        else if(ob[idx].Id==0){
            // cout<<"Id:"<<str<<endl;
            ob[idx].Id=stoll(str);
            str.erase();
            continue;
        }
        else if(ob[idx].Department==""){
            // cout<<"DPT:"<<str<<endl;
            ob[idx].Department=str;
            str.erase();
            continue;
        }
        else if(ob[idx].Salary==0){
            // cout<<"SAL:"<<str<<endl;
            ob[idx].Salary=stoll(str);
            str.erase();
            continue;
        }
        else if(ob[idx].Address==""){
            // cout<<"Adreess:"<<str<<endl;
            ob[idx].Address=str;
            str.erase();
            continue;
        }
        else if(ob[idx].Contact_No==0){
            // cout<<"CN:"<<str<<endl;
            ob[idx].Contact_No=stoll(str);
            str.erase();
            continue;
        }
        else if(ob[idx].Email_Id==""){
            // cout<<"EI:"<<str<<endl;
            ob[idx].Email_Id=str;
            str.erase();
            continue;
        }
        else if(ob[idx].Position==""){
        //    cout<<"PS:"<<str<<endl;
            ob[idx].Position=str;
            str.erase();
            continue;
        }
        else if(ob[idx].Experience==0){
            // cout<<"Experience:"<<str<<endl;
            ob[idx].Experience=stoll(str);
            idx++;
            str.erase();
            continue;
        }
	}
	fin.close();

    // // Write
    // fout.open("temp.txt",ios::app);
    // fout.write((char*)ob,sizeof(ob));
	// fout.close();

    int n_shifts[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1};

    do{
    cout<<"// -------------------"<<endl;
    cout<<("LIST:");
    for (int j = 0; j < idx; j++){
        cout<<"\n"<<j+1<<".)"<<ob[j].Name;
    }
    // cout<<"//----------------------"<<endl;
    cout<<("\n*******Menu*****\n");
    cout<<"1. Search for 4th person ( by ID) and print name of the employee";
    cout<<"\n2. Print data for the first employee"; 
    cout<<"\n3. Print data for the last employee"; 
    cout<<"\n4. Delete data for the employee at last position"; 
    cout<<"\n5. Delete data for the employee at first position"; 
    cout<<"\n6. Delete data for the employee at third position"; 
    cout<<"\n7. Insert data for a new employee at last position";
    cout<<"\n8. Insert data for a new employee at first position"; 
    cout<<"\n9. Insert data for a new employee at second position"<<endl;
    cout<<"Enter your choice\n";
    cin>>n;
    switch(n){
        case '1':{
            //Search by id
            int id;
            cout<<"Enter the ID: ";
            cin>>id;
            for(int i=0;i<idx;i++){
                if(ob[i].Id==id){
                    cout<<"Name: "<<ob[i].Name<<endl;
                }
            }
            n_shifts[0] = 0;
            break;
        }
        case '2':{
            //Details of 1st Employee
            cout<<"Details of Empolyee 1: ";
            ob[0].PrintList();
            // cout<<endl;
            n_shifts[1] = 0;
            break;
        }
        case '3':{
            //Details of last Employee
            cout<<"Details of Empolyee "<<idx<<": ";
            ob[idx-1].PrintList();
            // cout<<endl;
            n_shifts[2] = 0;
            break;
        }
        case '4':{
            //Delete from last
            int i=idx;
            n_shifts[3] = 0;
            deleteList(&ob[i-1],&idx,i, &n_shifts[3]);
            break;
        }
        case '5':{
            // Delete First
            int i=1;
            n_shifts[4] = 0;
            deleteList(&ob[i-1],&idx,i, &n_shifts[4]);
            break;
        }
        case '6':{
            // Delete Third
            n_shifts[5] = 0;
            int i=3;
            deleteList(&ob[i-1],&idx,i, &n_shifts[5]);
            break;
        }
        case '7': {
            //insert data at last 
                    cout<<"Enter Details ---- Employee serialNumber"<<idx+1<<endl;
                    ob[idx].insert();
                    idx++;
                    break;
                    n_shifts[6] = 0;
                }
        case '8':{
            //insert data at first
            n_shifts[7] = 0;
            Employee temp[20];
            for(int i=0;i<=idx;i++){
                temp[i]=ob[i];
            }
            ob[0].insert();
            idx++;
            for(int i=1;i<=idx+1;i++){
                ob[i]=temp[i-1];
                n_shifts[7]++;
            }
            break;
        }
        case '9':{
            //insert data at second
            n_shifts[8] = 0;
            Employee temp[20];
            for(int i=0;i<=idx;i++){
                temp[i]=ob[i];
            }
            ob[1].insert();
            idx++;
            for(int i=0;i<=idx+1;i++){
                if(i<1){
                    ob[i]=temp[i];
                }
                if(i>1){
                    ob[i]=temp[i-1];
                    n_shifts[8]++;
                }
            }
            break;
        }      
        default:{
            cout<<"Enter the valid choice!!\n";
            break;
        }
    }
    cout<<"\nDo you wish to continue.y/n: ";
    cin>>ch;
    }while(ch!='n');
    cout<<"option\t\tN shifts";
    for(int i=0; i<9; i++){
        if(n_shifts[i] != -1){
            cout<<endl<<i+1<<"\t\t"<<n_shifts[i];
        }
    }
    return 0;
}