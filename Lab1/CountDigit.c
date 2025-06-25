#include<stdio.h>
void main(){
    int n , digit = 0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        digit++;
    }
    printf("Digit = %d",digit);
}