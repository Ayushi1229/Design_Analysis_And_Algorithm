#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter the numbers you want to get the sum of:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum = sum +i;
    }
    printf("Sum = %d",sum);
}