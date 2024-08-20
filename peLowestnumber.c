#include <stdio.h>

int main()
{

    int N;
    int long long b;

    scanf("%d", &N);

    int long long A[N];

    scanf("%lld", &A[0]);

    b = A[0];
    int long long x = 1;

    for (int i = 0; i < (N - 1); i++)
    {

        scanf("%lld", &A[i + 1]);

        if (b > A[i + 1])
        {
            b = A[i + 1];
            x = (i + 2);
        }
    }

    printf("%lld %d\n", b, x);

    return 0;
}