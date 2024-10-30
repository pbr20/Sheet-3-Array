        //wrong answer

#include <stdio.h>
 
int main()
{
 
    int  N;
 
    scanf("%d", &N);
 
    char B[1000000];
    int sum = 0;
 
    
 
    for (int i = 0; i < N; i++)
    {
        scanf(" %c", &B[i]);
        sum += (B[i] - '0');
        
    }
 
    
 
    printf("%d\n", sum);
 
    return 0;
}