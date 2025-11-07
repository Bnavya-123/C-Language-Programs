
//question1

#include<stdio.h>
int main(){
    int r1,c1,A[10][10];
    printf("enter the rows and columns of the matrix A :\n");
    scanf("%d%d",&r1,&c1);
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            if((i+j)%2==0){
                A[i][j]=1;
            }else{
                A[i][j]=0;
            }printf("%2d",A[i][j]);
        }printf("\n");

    }
}

//question2

#include<stdio.h>
int main(){
    int i,j,C[10][10],A[10][10],B[10][10],m1,n1,m2,n2;
    printf("enter no.of rows for matrix A:\n");
    scanf("%d",&m1);
    printf("enter the no.of columns for matrix A:\n");
    scanf("%d",&n1);
    printf("enter no.of rows for matrix B:\n");
    scanf("%d",&m2);
    printf("enter the no.of columns for matrix B:\n");
    scanf("%d",&n2);
    printf("enter the elements for matrix A:\n");
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
            scanf("%d",&A[i][j]);
        }
    }printf("enter the elements for matrix B:\n"); 
       for(i=0;i<m2;i++){
        for(j=0;j<n2;j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("matrix A:\n");
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
            printf("%2d",A[i][j]);
        }printf("\n");
    }
    printf("matrix B:\n");
    for(i=0;i<m2;i++){
        for(j=0;j<n2;j++){
            printf("%2d",B[i][j]);
            }printf("\n");
        }if(m1==m1 && n1==n2){
            printf("matrix addition is possible");
    printf("addition of matrix a and b\n");
        for(i=0;i<m1;i++){
            for(j=0;j<n1;j++){
                C[i][j]=A[i][j]+B[i][j];
                printf("%3d",C[i][j]);
            }printf("\n");}
        }else{
            printf("matrix addition is not possible\n");
        }
        return 0;
    
}

//question3

#include<stdio.h>
int main(){
    int i,j,r,c,A[10][10];
    printf("enter the rows and columns of the matrix A:\n");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==0 || j==0 || i==r-1 ||j==c-1){
                A[i][j]=1;
            }else{
                A[i][j]=0;
            }printf("%2d",A[i][j]);
        }printf("\n");
    }

}