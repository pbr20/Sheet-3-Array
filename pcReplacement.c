#include <stdio.h>

int main()
{

    int long long N;

    scanf("%lld", &N);

    int long long A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);

        if (A[i] > 0)
        {
            printf("1 ");
        }
        else if (A[i] < 0)
        {
            printf("2 ");
        }
        else
        {
            printf("0 ");
        }
    }

    return 0;
}