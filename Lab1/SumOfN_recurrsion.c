// Sum of n numbers using recurssion
#include<stdio.h>
int sum(int n){
    if (n==0){
        return 0;
    }
    else{
        return n+sum(n-1);
    }
}
void main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Sum of %d numbers is: %d", n, sum(n));
}