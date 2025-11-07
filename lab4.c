
//question 1

#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    char c='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%2c",c);
             c++; 
        }printf("\n");
    }
}

// question 2

#include<stdio.h>
int main(){
    char i,j;
    for(i=65;i<=69;i++){
        for(j=65;j<=1;j++){
            printf("%c",i);
        }printf("\n");
    }
}

// question 3

#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    int num=1;
    for(int i=1;i<=n;i++){
        for(int space=n;space>=i;space--){
            printf("  ");}
        for(int j=1;j<=i;j++){
            printf("%4d",num);
            num=num+1;
        }printf("\n");
    }
}