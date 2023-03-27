#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

int main()
{
    int temp, i, j, N, matrix[SIZE][SIZE];

    scanf("%d", &N);

    for(i=0; i<=(N-1); i++)
        for(j=0; j<=(N-1); j++)
            scanf("%d", &matrix[i][j]);

    for(i=0; i<=(N-1); i++)
    {
        temp = matrix[i][i];
        matrix[i][i] = matrix[i][N-1-i];
        matrix[i][N-1-i] = temp;
    }

    for(i=0; i<=(N-1); i++)
    {
        for(j=0; j<=(N-1); j++)
        {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
