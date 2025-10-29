#include<stdio.h>
int main(){
    int arr[5]={3,56,8,90,45};
    int max=0;
    for(int i=1; i<5; i++){
       if(arr[i]>max){
        max=arr[i];
       }
       
    }
     printf("the max of array is %d",max);
     return 0;
}