#include<stdio.h>
#include<stdlib.h>

struct ArrayStack
{
    int top;
    int capacity;
    int *a;
};
struct ArrayStack* createStack(int cap){
    struct ArrayStack *as;
    as=malloc(sizeof(struct ArrayStack));
    as->top =-1;
    as->capacity=cap;
    as->a=malloc(cap*sizeof(int));
    return as;
}
int isFull(struct ArrayStack *as){
    if(as->top==(as->capacity-1)){
        printf("Stack is Full\n");
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct ArrayStack *as){
    if(as->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct ArrayStack *ob,int item){
    if(!isFull(ob)){
        ob->top++;
        ob->a[ob->top]=item;
    }
    
}
int pop(struct ArrayStack *ob){
    int item;
    if(!isEmpty(ob)){
        item=ob->a[ob->top];
        ob->top--;
        return item;
    }
    return -1;
}
int main(){
    int cap,choice;
    char c;
    printf("Enter the capacity: ");
    scanf("%d",&cap);
    struct ArrayStack *ob;
    ob=createStack(cap);
    // printf("%d",ob.capacity);
    do{
        printf("1 For push.\n"
        "2 For pop\n");
        printf("Enter your choice.");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:{
            int item;
            printf("Enter the element you want to enter: ");
            scanf("%d",&item);
            push(ob,item);
            break;
        }
        case 2:{
            int item=pop(ob);
            if(item==-1){
                printf("Stack is Empty.\n");
            }
            else{
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
        scanf("%c",&c);
    }while(c!='n');
}