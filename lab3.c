
//question 1

#include<stdio.h>
int main(){
    long int fact=1;
    int n;
    printf("enter the n value to write the factorial of that number:");
    scanf("%d",&n);
 // for(int i=n;i>=1;i--){
    for(int i=1;i<=n;i+2){ //i=1 or i=2 , increment is if i+2,then it is a infinte loop
        fact=fact*i;
    }
    printf("the factorial of %d is %ld",n,fact);
}

//question 2

#include<stdio.h>
int main(){
    int i=0;
    do{
        printf("hello world\n");
        i++;
    }while(i<5);
}

//question 3

#include<stdio.h>
int main(){
    int n,a=0,b=1,i=0,c=0;
    printf("enter:");
    scanf("%d",&n);
    printf("fibonacci series:");
    while(i<n){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    return 0;
}