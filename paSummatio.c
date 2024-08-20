#include <stdio.h>
#include <stdlib.h>

int main()
{

    long long int n;

    scanf("%lld", &n);

    long long int A[n];
    long long int b = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        b = b + A[i];
    }

    printf("%lld\n", abs(b));

    return 0;
}