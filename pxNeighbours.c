#include<stdio.h>
 
int main()
{
 
    int N,M;
 
    scanf("%d",&N);
    scanf("%d",&M);
 
    char A[N][M];
 
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            scanf(" %c",&A[i][j]);
        }
 
 
    }
 
 
 
 
 
    int X,Y;
 
    scanf("%d",&X);
    scanf("%d",&Y);
 
    int count=0;
 
 
    for(int i=0; i<1; i++)
    {
        if(A[X-2][Y-2] == '.')
        {
 
 
            printf("no");
            count++;
            break;
        }
 
        if(A[X-1][Y-2] == '.')
        {
 
 
            printf("no");
            count++;
            break;
        }
        if(A[X][Y-2] == '.')
        {
 
 
            printf("no");
            count++;
            break;
        }
 
        if(A[X-2][Y-1] == '.')
        {
 
 
            printf("no");
            count++;
            break;
        }
 
        if(A[X][Y-1] == '.')
        {
 
 
            printf("no");
            count++;
            break;
        }
 
        if(A[X-2][Y] == '.')
        {
 
 
            printf("no");
            count++;
            break;
        }
 
        if(A[X-1][Y] == '.')
        {
 
 
            printf("no");
            count++;
            break;
        }
        if(A[X][Y] == '.')
        {
 
 
            printf("no");
            count++;
            break;
        }
 
    }
 
    if(count == 0)
    {
        printf("yes");
    }
    return 0;
}