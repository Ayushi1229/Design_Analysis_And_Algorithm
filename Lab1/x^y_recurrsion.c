// x^y using recurrsion
#include<stdio.h>
int power(int x,int y){
    if(y==0){
        return 1;
    }
    else if(y>0){
        return x*power(x,y-1);
    }
}
int main(){
    int x,y;
    printf("Enter the base number: ");
    scanf("%d",&x);
    printf("Enter the exponent: ");
    scanf("%d",&y);
    printf("The result is: %d",power(x,y));
}