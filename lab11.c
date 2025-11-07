//1st program
#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("test.txt","r");
    char name[30];
    while(fgets(name,sizeof(name),fp)){
        printf("%s",name);
    }
    fclose(fp);

}
//2nd program
#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("text.txt","a");
    fprintf(fp,"AIML");
    fclose(fp);
    printf("updated content:");
    fp=fopen("text.txt","a");
    char name[30];
    fgets(name,sizeof(name),fp);
    printf("%s",name);
    fclose(fp);
}
//3rd program
#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("text.txt","w");
    fprintf(fp,"welcome to pspc");
    printf("File created successfully\n");
    fclose(fp);
    printf("FILE CONTENT\n");
    fp=fopen("text.txt","r");
    char name[30];
    fgets(name,sizeof(name),fp);
    printf("%s\n",name);
    fclose(fp);}