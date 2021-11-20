/*
    NAME:                   ANIL KUMAR
    ROLL NUMBER:            2020UCD2101
    CLASS AND SECTION :     CSDS 01
    MOBILE NUMBER:          7838180782
*/
#include<iostream>
#include<fstream>
using namespace std;

class node{
    public:
    string Pname;
    node* next;
    node(string name){
        Pname=name;
        next =NULL;
    }
};

class flight{
    public:
    string Fname;
    flight* next;
    node* link;
    flight(string name){
        Fname=name;
        link=NULL;
        next=NULL;
    }
};

void createF(flight* &head,string str){
    flight* fn=new flight(str);
    if(head==NULL){
        head=fn;
        return;
    }
    flight* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=fn;
    return;
}
// Enter the name of a passengers
void inputData(node* &head,string name){
    node* n=new node(name);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    return;
}

// Delete the Reservation
void deleteData(node* &head,string str){
    if(head==NULL){
        return;
    }
    node* todelete;
    if(head->Pname==str){
        todelete=head;
        head=todelete->next;
        delete todelete;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL and temp->next->Pname!=str){
        temp=temp->next;
    }
    todelete=temp->next;
    if(temp->next!=NULL){
        temp->next=todelete->next;
    }
    delete todelete;
    return;
}
// SearchFlight
flight* searchF(flight* head,string str){
    flight* fh=head;
    while(fh!=NULL and fh->Fname!=str){
        fh=fh->next;
    }
    return fh;
}
// print passengers name
void PrintpassengerName(node* head){
    fstream fout;
    fout.open("output.txt",ios::app);
    if(head==NULL){
        fout<<"No Passenger";
        cout<<"No Passenger";
        fout<<endl;
        fout.close();
        return;
    }
    node* temp=head;
    while(temp!=NULL){
        fout<<temp->Pname<<" ";
        cout<<temp->Pname<<"   ";
        temp=temp->next;
    }
    fout<<endl;
    fout.close();
    return;
}

void PrintflightName(flight* head){
    if(head==NULL){
        return;
    }
    cout<<head->Fname<<"   ";
    PrintflightName(head->next);
    return;
}

// print passengers number
int passengerNum(node* head){
    static int count=0;
    if(head==NULL){
        return 0;
    }
    count++;
    passengerNum(head->next);
    return count;
}

int main(){
    int n,size;
    char ch;
    string name,str;
    flight* headf=NULL;
    // node* headn=NULL;

    fstream fin,fout;

    // reset
    fout.open("output.txt",ios::out);
    fout<<"";
    fout.close();

    //read
    fin.open("input.txt",ios::in);
    fout.open("output.txt",ios::app);
    fin>>size;
    while(size--){
        fin>>str;
        createF(headf,str);
    }   
    do{
        cout<<"******Welcome to Reservation Centre******"<<endl;
        cout<<"1. Booking a Reservation"<<endl;
        cout<<"2. Cancelling the Reservation"<<endl;
        cout<<"3. Show the Passengers name on particular fight"<<endl;
        cout<<"4. Show the Number of Passengers on particular fight"<<endl;
        fin>>n;
        switch(n){
            case 1:{
                    cout<<endl;
                    fin>>str;
                    flight* temp=searchF(headf,str);
                    int np;
                    fin>>np;
                    for(int i=0;i<np;i++){
                        fin>>str;
                        inputData(temp->link,str);
                    }
                    cout<<"Reservation SuccessFull";
                    break;
            }
            case 2:{
                    cout<<endl;
                    fin>>str;
                    flight* temp=searchF(headf,str);
                    int np;
                    fin>>np;
                    for(int i=0;i<np;i++){
                        fin>>str;
                        deleteData(temp->link,str);
                    }
                    cout<<"Cancellation SuccessFull"<<endl;
                    break;
            }
            case 3:{
                    cout<<endl;
                    fin>>str;
                    flight* temp=searchF(headf,str);
                    cout<<"PassengerName SuccessFully uploaded: ";
                    PrintpassengerName(temp->link);
                    cout<<endl;
                    break;
            }
            case 4:{
                    cout<<endl;
                    fin>>str;
                    flight* temp=searchF(headf,str);
                    int cnt=passengerNum(temp->link);
                    fout<<cnt<<endl;
                    cout<<"Number_of_Passenger SuccessFully uploaded"<<endl;
                break;
            }
            default:{
                cout<<endl;
                cout<<"enter a valid number Please!!!!"<<endl;
                break;
            }
        }
        cout<<"\n"<<endl;
    }while(!fin.eof());
    fin.close();
    fout.close();
    return 0;
}
/*
    "I have done this assignment on my own. I have not copied any code
    from another student or any online source. I understand if my code is
    found similar to somebody else's code, my case can be sent to the
    Disciplinary committee of the institute for appropriate action."

*/