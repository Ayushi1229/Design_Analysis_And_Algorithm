// Linear search 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int linearSearch(int n,int arr[],int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
        printf("Key %d is at index %d \n",key,i);
        // printf("Index : %d" , i);
    }
}
    return 1;
}
// void printArray(int len,int arr[]){
//     for(int i=0;i<len;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }

void main(){
    FILE *fp;
    clock_t start, end;
    int n, userChoice;
    int arr[100000];

    printf("1.best case\n2.worst case\n3.average case\n");
    scanf("%d", &userChoice);

    switch (userChoice)
    {
    case 1:
        fp = fopen("best.txt", "r");
        break;
    
    case 2:
        fp = fopen("worst.txt", "r");
        break;

    case 3:
        fp = fopen("average.txt", "r");
        break;
    
    default:
        printf("Enter valid number!!!");
        break;
    }

    printf("Enter number of element : ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        fscanf(fp, "%d", &arr[i]);
    }

    start = clock();
    linearSearch( n, arr, 15);
    end = clock();
    // printArray(n, arr);

    double cpuTime = (double) ((end-start))/CLOCKS_PER_SEC;

    printf("Time taken by linear search is : %f", cpuTime);
}