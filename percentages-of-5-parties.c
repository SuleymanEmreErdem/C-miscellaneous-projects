#include <stdio.h>
#include <stdlib.h>

float* percentages(int votes[])
{
    float sum=0;
    int i;

    for(i=0; i<5; i++)
        sum += votes[i];

    float* percent = malloc(5 * sizeof(float));

    for(i=0; i<5; i++)
        percent[i] = votes[i] / sum * 100;
    return percent;
}

int main(void)
{
    int i, votes[5];

    printf("Enter votes of each party:\n");
    for(i=0; i<5; i++)
        scanf("%d", &votes[i]);
    float* percent = percentages(votes);
    printf("\nPercentages of each party:");
    for(i=0; i<5; i++)
    {
        printf("\n%d - %.2f", i+1, percent[i]);
    }
    free(percent);
    return 0;
}
