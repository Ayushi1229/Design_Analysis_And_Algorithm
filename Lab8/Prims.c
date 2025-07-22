#include <stdio.h>
#include <limits.h>

#define N 7

int main() {
    int graph[N][N] = {
        {0,1,0,4,0,0,0},
        {1,0,2,6,4,0,0},
        {0,2,0,0,5,6,0},
        {4,6,0,0,3,0,4},
        {0,4,5,3,0,8,7},
        {0,0,6,0,8,0,3},
        {0,0,0,4,7,3,0}
    };

    int selected[N] = {0}; 
    int edgeCount = 0;
    int totalCost = 0;

    selected[0] = 1;  

    while (edgeCount < N - 1) {
        int min = INT_MAX;
        int x = 0, y = 0;

        for (int i = 0; i < N; i++) {
            if (selected[i]) {
                for (int j = 0; j < N; j++) {
                    if (!selected[j] && graph[i][j]) {
                        if (min > graph[i][j]) {
                            min = graph[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }

        if (x != -1 && y != -1) {
            printf("%d - %d \t%d\n", x + 1, y + 1, graph[x][y]);
            totalCost += graph[x][y];
            selected[y] = 1;
            edgeCount++;
        }
    }

    printf("Total cost of MST: %d\n", totalCost);

    return 0;
}