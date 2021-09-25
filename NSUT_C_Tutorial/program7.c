// Anilkumar (2020UCD2101)
#include<stdio.h>
#include<stdlib.h>

typedef struct queue{ 
    int front,rear;
    int *arr;
    int cap;
} que;
que* createq(int size){
    que* temp;
    temp=(que*)malloc(sizeof(que));
    temp->cap=size;
    temp->front=-1;
    temp->rear=-1;
    temp->arr=(int*)malloc(sizeof(int)*size);
    return temp;
}
void insertEle(que* q1,int val){
        if(q1->rear==q1->cap-1){
            printf("Overflow\n");
            return;
        }
        q1->rear++;
        q1->arr[q1->rear]=val;
        if(q1->front==-1){
            q1->front++;
        }
        return;
    }
int DeleteEle(que* q1){
        if(q1->front==-1||q1->front>q1->rear){
            printf("Underflow\n");
            return -1;
        }
        return q1->arr[q1->front++];
    }
int main(){
    int size,choice;
    char ch;
    printf("Enter the size of Queue\n");
    scanf("%d",&size);
    que* ob=createq(4);
   do{
        printf("1 For Insertion.\n"
        "2 For Deletion\n");
        printf("Enter your choice.");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:{
            int item;
            printf("Enter the element you want to enter: ");
            scanf("%d",&item);
            insertEle(ob,item);
            break;
        }
        case 2:{
            int item=DeleteEle(ob);
            if(item!=-1){
                printf("The element is: %d\n",item);
            }
            break;
        }
        default:{
            printf("Enter the valid choice!!!\n");
            break;
        }
        }
        fflush(stdin);
        printf("Do you wish to continue.y/n\n");
        scanf("%c",&ch);
    }while(ch!='n');
    return 0;
}
