#include <stdio.h>

int main()
{
    int n, i, sum, count = 0;
    int p[3];
    scanf("%d", &n);
    while (n--)
    {
        sum = 0;
        for (i = 0; i < 3; i++)
        {
            scanf("%d", &p[i]);
            sum += p[i];
        }
        if (sum >= 2) count++;
    }
    printf("%d", count);
    return 0;
}


