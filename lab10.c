
//2nd program
/*#include<stdio.h>
#include<string.h>
union Student {
    int dormno;
    char name[10];
};
int main(){
    union Student s1;
    strcpy(s1.name,"navya");
    printf("name:%s\n",s1.name);
    s1.dormno=1;
    printf("dormno:%d\n",s1.dormno);
}*/
//3rd program
#include<stdio.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node node1,node2,node3;
    node1.data=10;
    node2.data=20;
    node3.data=30;
    node1.next=&node2;
    node2.next=&node3;
    node3.next=NULL;
    printf("the data of the node 1 : %d",node1.data);
    printf("the data of the node 2 : %d",node1.next->data);
    printf("The data  of the node 3 : %d",node1.next->next->data);}
//
#include<stdio.h>
#include<string.h>
struct Student{
    int rollno;
    char name[20];
    float cgpa;
    struct Address{
        char vname[20];
        int pincode;
    }addr;
};
void display(struct Student s[],int n){
    for(int i=1;i<n;i++){
    printf("student details %d\n",i);
    printf("name :%s\n",s[i].name);
    printf("rollno:%d\n",s[i].rollno);
    printf("cgpa:%0.2f\n",s[i].cgpa);
    printf("village name :%s\n",s[i].addr.vname);
    printf("pincode :%d\n",s[i].addr.pincode);}
}int main(){
    int n;
    printf("enter the number of student details you want:");
    scanf("%d",&n);
    struct Student s[n+1];
    for(int i=0;i<n;i++){
    printf("entert the details of the student %d\n",i+1);
    printf("enter the rollno:");
    scanf("%d",&s[i].rollno);
    printf("enter the name:");
    scanf("%s",&s[i].name);
    printf("enter the cgpa:");
    scanf("%f",&s[i].cgpa);
    printf("enter the location:");
    scanf("%s",s[i].addr.vname);
    printf("enter the pincode:");
    scanf("%d",&s[i].addr.pincode);
}  
}