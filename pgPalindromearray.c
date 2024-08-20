#include <stdio.h>

int main()
{

    int n;
    int count = 0;

    scanf("%d", &n);

    int A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0, j = (n - 1); i < n, j >= 0; i++, j--)
    {
        if (A[i] != A[j])
        {
            printf("NO\n");
            count++;
            break;
        }
    }

    if (count == 0)
    {
        printf("YES\n");
    }

    return 0;
}