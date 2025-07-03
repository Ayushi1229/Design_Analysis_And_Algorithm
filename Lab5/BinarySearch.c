//Binary Search
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int binarySearch(int n, int arr[], int key){
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    for(int i=0;i<n;i++){
        if(arr[key]==mid){
            printf("Element found !");
        }
        else if(arr[key]<mid){
            end = mid-1;
        }
        else{
            start = mid +1;
        }
    }
    return -1;
}

void main(){
    FILE *fp;
    clock_t start, end;
    int n, userChoice;
    int arr[100000];
    fp = fopen("best.txt", "r");

    printf("Enter number of element : ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);
    start = clock();
    binarySearch(n, arr, 15);
    end = clock();
    // PrintArray(arr, n);

    double cpuTime = (double) ((end-start))/CLOCKS_PER_SEC;

    printf("Time taken by binary search : %f", cpuTime);
}