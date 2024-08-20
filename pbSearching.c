#include <stdio.h>

int main()
{

    long long int N;
    int count = 0;

    scanf("%lld", &N);

    long long int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }
    long long int x;
    scanf("%lld", &x);

    for (int i = 0; i < N; i++)
    {
        if (A[i] == x)
        {
            printf("%d\n", i);
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("-1\n");
    }

    return 0;
}