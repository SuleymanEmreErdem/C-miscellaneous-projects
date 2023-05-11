#include <stdio.h>
#include <stdlib.h>

int main() {

    int j, i, n;
    scanf("%d", &n);
    int *mat = malloc(n*sizeof(int));

    for(j=n; j>0; j--){
        int a = n;
        for(i=n; i>0; i--){
            mat[n-i] = a;
            if(a>j)
                a--;
        }
        for(i=0; i<n; i++)
            printf("%d ", mat[i]);
        for(i=n-2; i>=0; i--)
            printf("%d ", mat[i]);
        printf("\n");
    }

    for(j=2; j<=n; j++){
        int a = n;
        for(i=n; i>0; i--){
            mat[n-i] = a;
            if(a>j)
                a--;
        }
        for(i=0; i<n; i++)
            printf("%d ", mat[i]);
        for(i=n-2; i>=0; i--)
            printf("%d ", mat[i]);
        printf("\n");
    }

    return 0;
}
