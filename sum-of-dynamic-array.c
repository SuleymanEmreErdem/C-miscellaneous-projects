#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, n=0, sum=0, num;
    int *arr = malloc(sizeof(int));

    while(num!=-1)
    {
        scanf("%d", &num);
        n+=1;
        arr = realloc(arr, n * sizeof(int));
        *(arr+n-1) = num;
    }

    for(i=0; i<n-1; i++)
        sum += *(arr+i);
    printf("%d", sum);

    return 0;
}
