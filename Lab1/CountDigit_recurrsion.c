// Count the number of digit using recurrsion
#include<stdio.h>
int CountDigit(int n){
    if(n==0){
        return 0;
    }
    else{
        return 1+CountDigit(n/10);
    }
}
void main(){
    int n;
    scanf("%d",&n);
    printf("%d",CountDigit(n));
}