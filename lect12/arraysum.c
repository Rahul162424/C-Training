#include<stdio.h>
int main(){
    int arr[5]={2,3,4,7,9};
    int sum=0;
    for(int i=0; i<5; i++){
        sum=sum+arr[i];
       
    }
     printf("the sum of array is %d",sum);
     return 0;
}