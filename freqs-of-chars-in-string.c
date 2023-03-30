#include <stdio.h>
#include <stdlib.h>

void freq(char st[], int n)
{
    int i, temp, ascii[26] = {0};

    for(i=0; i<n; i++)
    {
        temp = ((int)st[i])-'a';
        ascii[temp] += 1;
    }
    for(i=0; i<26; i++)
    {
        if(ascii[i]!=0)
            printf("%c - %d\n", i+'a', ascii[i]);
    }
}

int main()
{
    char st[30];
    printf("Enter a string: ");
    gets(st);
    int n = sizeof(st) / sizeof(st[0]);

    printf("\nFrequencies of chars in the string:\n");
    freq(st, n);

    return 0;
}
