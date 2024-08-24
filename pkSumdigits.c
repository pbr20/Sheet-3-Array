        //wrong answer

#include <stdio.h>
 
int main()
{
 
    int  N;
 
    scanf("%lld", &N);
 
    int long long A;
    int B[N];
    int long long sum = 0;
 
    scanf("%lld", &A);
 
    for (int long long i = 0; i < N; i++)
    {
        B[i] = A % 10;
        A = A / 10;
    }
 
    for (int long long  i = 0; i < N; i++)
    {
        sum = sum + B[i];
    }
 
    printf("%lld\n", sum);
 
    return 0;
}