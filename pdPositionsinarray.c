#include <stdio.h>

int main()
{

    int long long n;

    scanf("%lld", &n);

    int long long A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &A[i]);

        if (A[i] <= 10)
        {
            printf("A[%d] = %lld\n", i, A[i]);
        }
    }

    return 0;
}