
//question 1

#include<stdio.h>
int main(){
    void displaysString(char str[]);
    char str[50];
    printf("enter string:");
    fgets(str,sizeof(str),stdin);
    displayString(str);
    return 0;}
    void displayString(char str[]){
    printf("string output:");
    puts(str);
}

//question 2

#include<string.h>
int main(){
    char str1[10]="THIS IS",str2[10]="C PROGRAMMING";
    strcat(str1,str2);
    puts(str1);
    puts(str2);
    return 0;}

//question 3

#include<stdio.h>
#include<string.h>
int main(){
    char str1[10]="abcd",str2[10]="abCd",str3[]="abcd";
    int result1,result2;
    result1=strcmp(str1,str2);
    printf("%d",result1);
    result2=strcmp(str2,str3);
    printf("%d",result2);

}