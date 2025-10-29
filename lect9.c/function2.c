#include<stdio.h>

int check(n){
    if(n%2==0){
        printf("number is even");
    }
    else{
        printf("number is odd");
    }
}

int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    check(n);

}