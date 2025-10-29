#include<stdio.h>

int SumOfDigits(int n){
    int sum = 0;
    while (n>0){
        sum += n%10;
        n /= 10;
    }
 return sum;
}

int main(){
    int num, result;
    printf("Enter a number");
    scanf("%d",&num);

    result = num;
    while(result>=10){
        result= SumOfDigits(result);
    }
    if(result==1)
    printf("magic num",num);
    else{
        printf("not magic",num);

        return 0;
    }
}