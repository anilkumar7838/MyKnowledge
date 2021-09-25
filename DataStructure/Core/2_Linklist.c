#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int info;
    struct node *link;
}lk;

lk *Start=NULL;

lk* createNode(){
    lk *n;
    n=(lk*)malloc(sizeof(lk));
    return n;
}

void insertNode()
{
    lk *temp,*t;
    temp=createNode();
        printf("Enter a number: ");
        scanf("%d",&temp->info);
        temp->link=NULL;
        if(Start==NULL){
            Start=temp;
        }
        else{
            t=Start;
            while(t->link!=NULL){
                t=t->link;
            }
            t->link=temp;
        }
}

void DeleteNode(){
    lk*  temp;
    if(Start==NULL){
        printf("List is Empty\n");
    }
    else{
        temp=Start;
        Start=Start->link;
        free(temp);
    }

}

void displayList(){
    lk* temp;
    if(Start==NULL){
        printf("List is Empty\n");
    }
    else{
        temp=Start;
        printf("List is: ");
        while(temp!=NULL){
            printf("%d ",temp->info);
            temp=temp->link;
        }
        printf("\n");
    }
}
int main(){
    int n;
    char ch;
    do{
        printf("************MENU*************\n"
        "1. Insert Element \n"
        "2. Delete Node\n"
        "3. Display List\n"
        "Enter your choice: ");
        scanf("%d",&n);
        switch(n){
            case 1:{
                insertNode();
                break;
            }
            case 2:{
                DeleteNode();
                break;
            }
            case 3:{
                displayList();
                break;
            }
        }
        printf("Do you wish to continue. y/n \n");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch!='n');
}