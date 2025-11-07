// question 1
#include<stdio.h>
long int fact(int);
int main(){
    int n;
    long int res;
    printf("enter the number:");
    scanf("%d",&n);
    res=fact(n);
    printf("Factorial of %d is %d \n",n,res);
    return 0;
}long int fact(int n){
    int res;
    if(n==0)
    return 1;
    else
    res=n*fact(n-1);
    return res;
}

//question 2
#include <stdio.h>
int sum(int n) {
    if (n == 0) {
        return 0;
    } 
    else {
        return n + sum(n - 1);
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The sum of the first %d natural numbers is: %d\n", num, sum(num));
    return 0;
}
// question 3
#include<stdio.h>
int fib(int a);
int main(){
    int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%4d",fib(i));
    }return 0;
}
int fib(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else 
    return (fib(n-1)+fib(n-2));
}