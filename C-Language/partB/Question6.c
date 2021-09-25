//Write a program to search a given element in a set of N numbers using Binary search (i) with recursion (ii) without recursion.

#include<stdio.h>
#include<stdlib.h>

int Recursion(int *a,int m,int l,int s){
   
   while(m<=l){
    int mid=(m+l)/2;
    if(a[mid]>s){
        return Recursion(a,m,mid-1,s);
    }
    if(a[mid]<s){
        return Recursion(a,mid+1,l,s);
    }
    if(a[mid]==s){
        return mid+1;
    }
   }
   return 0;
}
int binRecursion(int *a,int n,int s){
    int first=0,last=n-1;
    while(first<=last){
        int mid=(first+last)/2;
        if(a[mid]>s){
            last=mid-1;
        }
        if(a[mid]<s){
            first=mid+1;
        }
        if(a[mid]==s){
            return mid+1;
        }
    }
    return 0;
}

int main(){
    int choice,n,*a,s;
    char c;
    do{
        printf("<<<<<<<<Search a element Using binary search>>>>>>\n"
        "1.with recursion\n"
        "2. without recursion\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:{
                printf("Enter the size :");
                scanf("%d",&n);
                a=malloc(n*sizeof(int));
                printf("enter the elements :");
                for(int i=0;i<n;i++){
                    scanf("%d",&a[i]);
                }
                
                printf("Enter the element to find :");
                scanf("%d",&s);
                int pos=Recursion(a,0,n-1,s);
                if(pos==0){
                    printf("element not found.\n");
                }
                else{
                    printf("Element %d is find at position %d in an array.\n",a[pos-1],pos);
                }
                break;
            }
            case 2:{
                 printf("Enter the size :");
                scanf("%d",&n);
                a=malloc(n*sizeof(int));
                printf("enter the elements :");
                for(int i=0;i<n;i++){
                scanf("%d",&a[i]);
                }
                
                printf("Enter the element to find :");
                scanf("%d",&s);
                int pos=binRecursion(a,n,s);
                if(pos==0){
                    printf("element not found.\n");
                }
                else{
                    printf("Element %d is find at position %d in an array.\n",a[pos-1],pos);
                }
                break;
            }
            default:{
                printf("Enter a valid choice!!!!\n");
                break;
            }
        }
        printf("Do you wish to continue. y/n :\n");
        fflush(stdin);
        scanf("%c",&c);
    }while(c!='n');
}