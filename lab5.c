
//question1

#include<stdio.h>
int main(){
    int a[]={60,30,50,20,70,10,100},sum=0,i,j,n=7;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }printf("sum of the elements in the array is %d\n",sum);
printf("the average of the elements in the above array is %f",(float)(sum/n));}

//question2 

#include<stdio.h>
int main(){
    int arr[20]={100,20,320,40},i,temp;
    for(i=0;i<4;i++){
        for(int j=0;j<4-i-1;j++){
        if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }printf("\n after sorting array elements are:");
     for(int i=0;i<4;i++){
        printf("%5d",arr[i]);
     }
}

//question3

#include<stdio.h>
int main(){
    int n,min,a[15],max;
    printf("enter n value:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }min=a[0];
    max=a[0];

    for(int i=1;i<n;i++){
        if(min>a[i]){
                min=a[i];
        if(max<a[i]);
        max=a[i];
        }
    }printf("min value %d",min);
    printf("max value %d",max);
}