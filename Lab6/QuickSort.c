#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int pivotElement(int arr[], int i, int j) {
    int p = arr[i], temp;
    int k = i + 1;
    int l = j;

    while (k <= l) {
        while (k <= j && arr[k] <= p) k++;
        while (arr[l] > p) l--;

        if (k < l) {
            temp = arr[k];
            arr[k] = arr[l];
            arr[l] = temp;
        }
    }

    temp = arr[i];
    arr[i] = arr[l];
    arr[l] = temp;

    return l;
}

void quickSort(int arr[], int i, int j) {
    if (i < j) {
        int position = pivotElement(arr, i, j);
        quickSort(arr, i, position - 1);
        quickSort(arr, position + 1, j);
    }
}

void PrintArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main() {
    FILE *fp;
    int userChoice;
    printf("1.best case\n2.worst case\n3.average case\n");
    scanf("%d", &userChoice);

    switch (userChoice) {
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
            printf("Enter valid number!!!\n");
            return 1;
    }

    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];

  for (int i = 0; i < n; i++) {
    if (fscanf(fp, "%d", &arr[i]) != 1) {
        printf("Error reading number %d from file\n", i + 1);
        return 1;
    }
}
fclose(fp);

    clock_t start = clock();
    quickSort(arr, 0, n - 1);
    clock_t end = clock();

    printf("Sorted array:\n");
    PrintArray(arr, n);

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);

    return 0;
}

