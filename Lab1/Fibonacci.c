// Fibonacci
#include<stdio.h>
void main(){
    int n , a = 0 , b = 1 , sum =0;
    printf("Enter the number of terms: ");
    scanf("%d" , &n);
    printf("Fibonacci Series: ");
    for(int i = 1 ; i <= n ; i++){
        sum = a +b;
        a=b;
        b=sum;
        printf("%d",sum);
    }
}