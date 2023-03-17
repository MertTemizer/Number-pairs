#include <stdio.h>

int main()
{
    int n, i, j;
    
    printf("Enter a natural number: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i = i + 1)
        for(j = 1; j <= n; j = j + 1)
            printf("(%d, %d)\n", i, j);
    
    return 0;
}
