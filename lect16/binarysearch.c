#include<stdio.h>
int BinarySearch(){
    int arr[6]={1,2,3,4,5,6,};
    int target=3;
    int s=0;  //fixed value
    int end=5;
    while (s<=end)
    {
        int mid=(s+end/2);
        if (arr[mid]==target)
        {
            
           printf("%d",mid);
           return mid;

        }else if (arr[mid]<target)
        {
           s=mid+1;

        }else{
               end=mid-1;
        }
        
        
    }
    return -1;
}

int main(void){
    BinarySearch();
    return 0;
}