//1st program
#include<stdio.h>
int main(){
    int a[]={100,2,70,4,5};
    int *p=a,sum=0;
    for(int i=0;i<4;i++){
        printf("the address of a[%d]: %p\n",i,p+i);
    }
    for(int i=0;i<4;i++){
        printf("the values of a[%d]: %d\n",i,*(p+i));
    }
    for(int i=0;i<5;i++){
            sum=sum+*(p+i);
    }printf("%d\n",sum);
}
//2nd program
#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;}
    int main(){
    int a,b;
    printf("enter a value:\n");
    scanf("%d",&a);
    printf("enter b value:\n");
    scanf("%d",&b);
    printf("before swap: a=%d\t and b=%d\t",a,b);
    //call by reference 
    swap(&a,&b);
    printf("after swap: a=%d\t and b=%d\t",a,b);}
//3rd program
#include<stdio.h>
int main(){
    char *pstr;
    char str[]="hello world";
    pstr=str;
    printf("\n the string is:\n");
    while(*pstr!='\0'){
        printf("%c",*pstr);
        pstr++;
    } return 0;}
