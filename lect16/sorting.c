// #include<stdio.h>
// int main(){
//     int arr[5]={1,4,5,65,3};
//     int n=sizeof(arr[5])/sizeof(int);
//     for (int i = 0; i<n-1; i++)
//     {
//         for (int j = 0; j=n-1; j++)
//         {
//         if(arr[j]>arr[j+1]){
//             int  temp=arr[j];
//             arr[j]=arr[j+1];
//            arr[j+1]=temp;
//         }
          
//         }
//         printf("%d",arr[i]);
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int arr[100],n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < n; j++){
        for (int k =0;k < n-j-1 ; k++){
            if(arr[k]<arr[k+1]){
                int temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    printf("Sorted array is:\n");
    for (int l = 0; l < n; l++)     
    {
        printf("%d\n",arr[l]);
    }
}