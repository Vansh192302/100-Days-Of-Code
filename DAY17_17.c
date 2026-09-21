#include <stdio.h>

int main()
{
    int n, i, count = 0;

    scanf("%d", &n);

    if(n <= 1)
    {
        printf("Not Prime");
        return 0;
    }

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
    }

    if(count == 2)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}