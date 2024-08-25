#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    scanf("%d", &n);

    int A[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int md = 0;
    int sd = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                md += A[i][j];
            }
            if (j == (n - i - 1))
            {
                sd += A[i][j];
            }
        }
    }

    int ans = abs(md - sd);

    printf("%d", ans);

    return 0;
}