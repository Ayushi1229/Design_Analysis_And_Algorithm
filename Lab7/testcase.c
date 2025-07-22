#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *file;

    file = fopen("best.txt", "w");
    
    for(int i=1; i<=100000; i++){
        fprintf(file, "%d\n", i);
    }

    fclose(file);

    file = fopen("worst.txt", "w");

    for(int i=100000; i>=1; i--){
        fprintf(file, "%d\n", i);
    }

    fclose(file);

    file = fopen("average.txt", "w");

    for(int i=1; i<=100000; i++){
        fprintf(file, "%d\n", rand()%100000);
    }

    fclose(file);
}