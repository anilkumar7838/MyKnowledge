/*
    Using Menu Driven, Perform following operations
        a. Fill a double-dimensional array of m rows and n columns
            i. Row Major Wise
            ii. Column Major Wise
        b. Print an array of m*n:
            i. Row Major Wise
            ii. Column Major Wise
        c. Print the transpose of a matrix
        d. Sum of all elements of 2-D array
        e. Sum of Diagonal elements of 2-d array
        f. Sum of non-diagonal elements of a 2d array
        g. Sum of upper Triangle of 2d array
        h. Sum of lower triangle of 2d array
        i. Sum of each row and column of a 2d array
        j. Addition, Subtraction, Division of two matrices
        k. Multiplication of a matrix
        l. Rotate 90degree

        For square matrix now
*/
#include<stdio.h>
#include<stdlib.h>

//functions
void input(int **a,int m,int n){
    int choice,i,j;
    printf("Fill a double-dimensional array of m rows and n columns.\n");
    printf("1. Row Major Wise.\n");
    printf("2. Column Major Wise.\n");
    scanf("%d",&choice);
    if(choice==1){                          //Row major wise
        printf("Enter the element : ");
        for( i=0;i<m;i++){
            for( j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
    }
    else if(choice==2){
        printf("Enter the element : ");     //Column major wise
        for( i=0;i<m;i++){
            for( j=0;j<n;j++){
                scanf("%d",&a[j][i]);
            }
        }
    }
    else{
        printf("Invalid input\n");
     }
   
}
void output(int **a,int m,int n){
    // input(a,m,n);
	int i,j;
    printf("Matrix is: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void transpose(int **a,int m,int n){
    int i,j;
    printf("Transpose of Matrix : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
void sum(int **a,int m,int n){
    int i,j,sum=0;
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            sum+=a[i][j];
        }
    }
    printf("Sum of a all elements is : %d\n",sum);
}
void sum_diagonal(int **a,int m,int n){
    int i,j,sum=0;
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            if(i==j){
            sum+=a[i][j];
            }
        }
    }
    printf("Sum of a diagonal elements is : %d\n",sum);
}
void sum_nondiagonal(int **a,int m,int n){
    int i,j,sum=0;
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            if(i!=j){
            sum+=a[i][j];
            }
        }
    }
    printf("Sum of a nondiagonal elements is : %d\n",sum);
}
void upperTriangular(int **a,int m,int n){
    int i,j,sum=0;
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            if(i<=j){
            sum+=a[i][j];
            }
        }
    }
    printf("Sum of a upper triangle of 2D array is : %d\n",sum);
}
void lowerTriangular(int **a,int m,int n){
    int i,j,sum=0;
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            if(i>=j){
            sum+=a[i][j];
            }
        }
    }
    printf("Sum of a lower triangle of 2D array is : %d\n",sum);
}
void sum_row_col(int **a,int m,int n){
    int i,j,sum=0;
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            sum+=a[i][j];
        }
        printf("Sum of row%d is : %d\n",i+1,sum);
        sum=0;
    }
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            sum+=a[j][i];
        }
        printf("Sum of column%d is : %d\n",i+1,sum);
        sum=0;
    }
}
void sumM(){
    int i,j,m,n,**a,**b,**sum;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of columns : ");
    scanf("%d",&n);
    a=malloc(m*sizeof(int*));
    b=malloc(m*sizeof(int*));
    sum=malloc(m*sizeof(int*));
    for(i=0;i<n;i++){
        a[i]=malloc(n*sizeof(int));
        b[i]=malloc(n*sizeof(int));
        sum[i]=malloc(n*sizeof(int));
    }
    printf("Input the matrix1: \n");
    input(a,m,n);
    printf("Input the matrix2: \n");
    input(b,m,n);
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            sum[i][j]=0;
        }
    }
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of a ");
    output(sum,m,n);
}
void Diff(){
    int i,j,m,n,**a,**b,**sum;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of columns : ");
    scanf("%d",&n);
    a=malloc(m*sizeof(int*));
    b=malloc(m*sizeof(int*));
    sum=malloc(m*sizeof(int*));
    for(i=0;i<n;i++){
        a[i]=malloc(n*sizeof(int));
        b[i]=malloc(n*sizeof(int));
        sum[i]=malloc(n*sizeof(int));
    }
    printf("Input the matrix1: \n");
    input(a,m,n);
    printf("Input the matrix2: \n");
    input(b,m,n);
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            sum[i][j]=0;
        }
    }
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            sum[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("Difference of a ");
    output(sum,m,n);
}
void Div(){
    int i,j,m,n,**a,**b;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of columns : ");
    scanf("%d",&n);
    a=malloc(m*sizeof(int*));
    b=malloc(m*sizeof(int*));
    for(i=0;i<n;i++){
        a[i]=malloc(n*sizeof(int));
        b[i]=malloc(n*sizeof(int));
    }
    printf("Input the matrix1: \n");
    input(a,m,n);
    printf("Input the matrix2: \n");
    input(b,m,n);
    printf("Division of a Matrix is: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%.2f ",(float)a[i][j]/b[i][j]);
        }
        printf("\n");
    }
}
void multiply(){
    int i,j,k,m,n,**a,**b,**sum;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of columns : ");
    scanf("%d",&n);
    a=malloc(m*sizeof(int*));
    b=malloc(m*sizeof(int*));
    sum=malloc(m*sizeof(int*));
    for(i=0;i<n;i++){
        a[i]=malloc(n*sizeof(int));
        b[i]=malloc(n*sizeof(int));
        sum[i]=malloc(n*sizeof(int));
    }
    printf("Input the matrix1: \n");
    input(a,m,n);
    printf("Input the matrix2: \n");
    input(b,m,n);
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            sum[i][j]=0;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                sum[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Multiplication of a Matrix is: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}
void matrixSDD(){
    int choice;
    char ch;
    do{
    printf("<<<<<<<<<<MATRIX>>>>>>>>>>>\n");
    printf("1.for Sum of a matrix.\n");
    printf("2.for Difference of a matrix.\n");
    printf("3.for Division of a matrix.\n");
    printf("Enter your choice.\n");
    scanf("%d",&choice);
      switch (choice)
      {
        case 1:{
           sumM();
            break;
        }
        case 2:{
            Diff();
            break;
        }
        case 3:{
            Div();
            break;
        }
        default:{
            printf("Enter the valid choice!!!\n");
            break;
        }
      }
      printf("Do you wish to continue menu2.y/n\n");
      fflush(stdin);
      scanf("%c",&ch);
    }while(ch!='n');
}
void Rotate(int **a,int m,int n){
    int i,j,k=(n-1),**b;
    b=malloc(m*sizeof(int*));
    for(i=0;i<n;i++){
        b[i]=malloc(n*sizeof(int));
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            b[i][j]=a[j][k];
        }
        k--;
    }
    printf("Before ");
    output(a,m,n);
    printf("After ");
    output(b,m,n);
}
//Main
int main(){
    int num,i,**a,v=0,row,col;
    char c;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    printf("Enter number of columns : ");
    scanf("%d",&col);
    a=malloc(row*sizeof(int*));
    for(i=0;i<col;i++){
        a[i]=malloc(col*sizeof(int));
    }
    do{
        printf("***************Menu*****************\n");
        printf("Enter 1 to input 2D array \n");
	    printf("Enter 2 to print 2D array \n");
	    printf("Enter 3 to find transpose of a matix\n");
	    printf("Enter 4 to calculate sum of elements of 2D array \n");
	    printf("Enter 5 to calculate sum of diagonal elements of 2D array \n");
	    printf("Enter 6 to calculate sum of non-diagonal elements of 2D array \n");
	    printf("Enter 7 to print sum of upper triangle \n");
	    printf("Enter 8 to print sum of lower triangle \n");
	    printf("Enter 9 to find sum of each row and coloumn of a 2D array\n");
	    printf("Enter 10 to find sum , subtraction and division of two 2D array\n");
	    printf("Enter 11 to find Multiplication of a 2D Array\n");
	    printf("Enter 12 to rotate 2D array by 90 degree\n");
        printf("Enter Your Choice : ");
        scanf("%d",&num);
        switch(num)
        {
            case 1:{
                input(a,row,col);
                v=1;
                break;
            }  
            case 2:{
                if(v!=1){
                    input(a,row,col);
                    v=1;
                }
                output(a,row,col);
                break;
            }  
            case 3:{
                if(v!=1){
                    input(a,row,col);
                    v=1;
                }
                transpose(a,row,col);
                break;
            }  
            case 4:{
                if(v!=1){
                    input(a,row,col);
                    v=1;
                }
                sum(a,row,col);
                break;
            }  
            case 5:{
                 if(v!=1){
                    input(a,row,col);
                    v=1;
                }
                sum_diagonal(a,row,col);
                break;
            }  
            case 6:{
                if(v!=1){
                    input(a,row,col);
                    v=1;
                }
                sum_nondiagonal(a,row,col);
                break;
            }  
            case 7:{
                if(v!=1){
                    input(a,row,col);
                    v=1;
                }
                upperTriangular(a,row,col);
                break;
            }  
            case 8:{
                if(v!=1){
                    input(a,row,col);
                    v=1;
                }
                lowerTriangular(a,row,col);
                break;
            }  
            case 9:{
                if(v!=1){
                    input(a,row,col);
                    v=1;
                }
                sum_row_col(a,row,col);
                break;
            }  
            case 10:{
                matrixSDD();
                break;
            }  
            case 11:{
                multiply();
                break;
            }  
            case 12:{
                 if(v!=1){
                    input(a,row,col);
                    v=1;
                }
                Rotate(a,row,col);
                break;
            }  
            default : {
                printf("Enter a valid choice!!!\n");
                break;
            } 
        }
       printf("Do you wish to continue menu1 y/n \n");
       fflush(stdin);
       scanf("%c",&c);
    }while(c!='n');
}
