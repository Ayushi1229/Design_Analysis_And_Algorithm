// x^y
#include<stdio.h>
void main(){
    int x,y,ans=1;
    printf("Enter the base number: ");
    scanf("%d",&x);
    printf("Enter the power: ");
    scanf("%d",&y);
    for(int i=1;i<=y;i++){
        ans=ans*x;
    }
    printf("The result is: %d",ans);
}