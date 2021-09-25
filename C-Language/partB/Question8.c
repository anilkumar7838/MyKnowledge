/* Create Structure of a Matrix . Write a menu-driven program to perform following Matrix operations:
    a) Sum
    b) Product 
    c) Transpose
*/
#include<stdio.h>
#include<stdlib.h>

struct Matrix{
    int row ;
    int column;
    int **a;
};


struct Matrix input(struct Matrix m){;
    printf("Enter the Number of row: ");
    scanf("%d",&m.row);
    printf("Enter the Number of column: ");
    scanf("%d",&m.column);
    m.a=(int**)malloc(m.row*sizeof(int*));
    for(int i=0;i<m.row;i++){
        m.a[i]=(int*)malloc(m.column*sizeof(int));
    }
    printf("Enter the element: \n");
    for(int i=0;i<m.row;i++){
        for(int j=0;j<m.column;j++){
            scanf("%d",(*(m.a+i)+j));
        }
    }
    return m;
}


void display(struct Matrix m){
    printf("Matrix is: \n");
    for(int i=0;i<m.row;i++){
        for(int j=0;j<m.column;j++){
            printf("%d ",m.a[i][j]);
        }
        printf("\n");
    }
}

void sum(){
    struct Matrix m1,m2,m3;
    m1=input(m1);
    m2=input(m2);
    m3.a=(int**)malloc(m1.row*sizeof(int*));
    for(int i=0;i<m1.column;i++){
        m3.a[i]=(int *)malloc(m1.column*sizeof(int));
    }
    m3.row=m1.row;
    m3.column=m1.column;
    // printf("%d",m3.row);
    for(int i=0;i<m3.row;i++){
        for(int j=0;j<m3.column;j++){
            m3.a[i][j]=(m1.a[i][j]+m2.a[i][j]);
        }
    }
    display(m3);
}
void Multiply(){
    struct Matrix m1,m2,m3;
    m1=input(m1);
    m2=input(m2);
    m3.a=(int**)malloc(m1.row*sizeof(int*));
    for(int i=0;i<m1.column;i++){
        m3.a[i]=(int *)malloc(m1.column*sizeof(int));
    }
    m3.row=m1.row;
    m3.column=m1.column;
    for(int i=0;i<m3.row;i++){
        for(int j=0;j<m3.column;j++){
            m3.a[i][j]=0;
        }
    }
    for(int i=0;i<m3.row;i++){
        for(int j=0;j<m3.column;j++){
            for(int k=0;k<m3.column;k++){
                m3.a[i][j]+=(m1.a[i][k]*m2.a[k][j]);
            }
        }
    }
    display(m3);
}

void transpose(){
    struct Matrix m;
    m=input(m);
    printf("Before Transpose: \n");
    for(int i=0;i<m.row;i++){
        for(int j=0;j<m.column;j++){
            printf("%d ",m.a[i][j]);
        }
        printf("\n");
    }
    printf("After Transpose: \n");
    for(int i=0;i<m.row;i++){
        for(int j=0;j<m.column;j++){
            printf("%d ",m.a[j][i]);
        }
        printf("\n");
    }
}
int main(){
    int n,choice;
    char c;
    do{
        printf("<<<<<<<<Matrix>>>>>>>\n"
        "(1)Sum\n"
        "(2)Product\n"
        "(3)Transpose\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                sum();
                break;
            }
            case 2:{
                Multiply();
                break;
            }
            case 3:{
                transpose();
                break;
            }
            default :{
                printf("Enter a valid choice!!!\n");
                break;
            }
        }
    printf("Do you wish to continue y/n.\n");
    fflush(stdin);
    scanf("%c",&c);
    }while(c!='n');
    // struct Matrix m;
    // m=input(m);
    // display(m);
}