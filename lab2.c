
//question 1

#include<stdio.h>
int main(){
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age>=18){
    printf("he/ she is eligible to vote");
    }else{
        printf("you are not eligible for vote");
    }
}

//question 2

#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks");
    scanf("%d",&marks);
    if(marks>=90){
        printf("your grade is excellent");
    }else if(marks>=80){
        printf("your grade is A");
    }else if(marks>=70){
        printf("your grade is B");
    }else if(marks>=60){
        printf("your grade is C");
    }else if(marks>=50){
        printf("your grade is D");
    }else if(marks>=40){
        printf("your grade is E");
    }else{
        printf("you are fail");
    }

}

//question 3

#include<stdio.h>
int main(){
    int num;
    printf("enter a number blw 1 to 7");
    scanf("%d",&num);
    switch(num){
        case 1:
            printf("monday");
            break;
        case 2:
            printf("tuesday");
            break;
        case 3:
            printf("wednesday");
            break;
        case 4:
            printf("thursday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("saturday");
            break;
        case 7:
            printf("sunday");
            break;
        default:
            printf("enter valid weekday number");
    }
}
