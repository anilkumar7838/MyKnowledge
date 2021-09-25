#include<stdio.h>
typedef struct MailList{
    char name[40];
    char street[40];
    char city[40];
    char state[40];
    long int zipcode;
} ml;
ml AddList(ml ob){
    printf("Enter name: ");
    scanf("%s",ob.name);
    printf("Enter street: ");
    scanf("%s",ob.street);
    printf("Enter city: ");
    scanf("%s",ob.city);
    printf("Enter state: ");
    scanf("%s",ob.state);
    printf("Enter zipcode: ");
    scanf("%d",&ob.zipcode);
    printf("\n");
    return ob;
}
int length(ml ob,char str[])
{
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
void deleteList(ml *ob,int *idx,int i){
    if(i<1||i>(*idx)){
        printf("Mail not exist.\n");
        return;
    }
    for(int k=i-1;k<(*idx);k++){
        *ob=*(ob+1);
        ob+1;
    }
    (*idx)--;
    printf("Delete Sucessfull\n");
    
}
void PrintList(ml ob){
    printf("Name: %s\n",ob.name);
    printf("Street: %s\n",ob.street);
    printf("City: %s\n",ob.city);
    printf("State: %s\n",ob.state);
    printf("Zipcode: %d\n",ob.zipcode);
    printf("\n");
}
int main(){ 
    char ch,n;
    int idx=0;
    ml ob[50];
    do{
    printf("\nAddress:");
    for (int j = 0; j < idx; j++){
        printf("\n%d.) %s", j + 1, ob[j].name);
    }
    printf("\n*******Menu********\n");
    printf("1. Add MailingList\n");
    printf("2. Delete MailingList\n");
    printf("3. Print MailingList\n");
    printf("Enter your choice\n");
    fflush(stdin);
    scanf("%c",&n);
    switch(n){
        case '1':{
            printf("Enter Customer Number %d\n",idx+1);
            ob[idx]=AddList(ob[idx]);
            idx++;
            break;
        }
        case '2':{
            int i;
            printf("Enter Customer Number: ");
            scanf("%d",&i);
            deleteList(&ob[i-1],&idx,i);
            break;
        }
        case '3':{
            int i;
            printf("Enter Customer Number: ");
            scanf("%d",&i);
            if(i<1||i>idx){
                printf("Invalid.\n");
                break;
            }
            printf("\nCustomer Number: %d\n",i);
            PrintList(ob[i-1]);
            break;
        }
        default:{
            printf("Enter the valid choice!!\n");
            break;
        }
    }
    printf("Do you wish to continue.y/n: ");
    fflush(stdin);
    scanf("%c",&ch);
    }while(ch!='n');
    return 0;
}