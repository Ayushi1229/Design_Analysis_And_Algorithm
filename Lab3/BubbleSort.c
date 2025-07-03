#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        // int swapped = 0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                // swapped = 1;
            }
        }
        // if(swapped==0){
        //     break;
        // }
    }
}
void printArray(int arr[], int n){
         for(int i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
    }
void main(){
    FILE *file;
    clock_t start, end;
    int n, userChoice;
    double cpu_time_used;
    // int arr[100];
    

    printf("1. Best case\n2.Worst case\n3. Average case\n");
    scanf("%d",&userChoice);
    
    switch(userChoice)
    {
        case 1:
            file = fopen("best.txt","r");
            break;

        case 2:
            file = fopen("worst.txt","r");
            break;
        
        case 3:
            file = fopen("average.txt","r");
            break;
        
        default:
            printf("Enter valid number!!!");
            break;
        }

        printf("Enter number of element: ");
        scanf("%d",&n);

        int arr[n];
        for(int i=0;i<n;i++){
            fscanf(file,"%d",&arr[i]);
        }
   
    start = clock();
    bubblesort(arr,n);
    end = clock();
    printArray(arr,n);

    cpu_time_used =((double)(end-start))/ CLOCKS_PER_SEC;

    printf("The time taken to sort the array: %f seconds \n",cpu_time_used);
    
    // int n;
    // printf("Enter the size of array");
    // scanf("%d",&n);
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<n;i++){
    //     printf("%d",arr[i]);
    // }
    // bubblesort(arr,n);
     
}