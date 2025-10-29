#include<stdio.h>
int main(){
    int arr[5]={3,56,8,90,45};
    int min=arr[0];
    for(int i=5; i<0; i--){
       if(arr[i]>min){
        min=arr[i];   
        }
       
    }
     printf("the min of array is %d",min);
     return 0;
} 