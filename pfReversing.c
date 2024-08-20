#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    int long long A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &A[i]);
    }

    for (int i = (n - 1); i >= 0; i--)
    {
        printf("%lld ", A[i]);
    }

    return 0;
}