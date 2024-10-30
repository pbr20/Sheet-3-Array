        //wrong answer

#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int b,x,y;

    for (int i = 0; i < N; i++)
    {

        b = A[i];
        y = A[i];
        for (int j = i+1; j < N; j++)
        {
            if (b > A[j])
            {
                b = A[j];
                A[i] = A[j];
                x = j;
                  A[x] = y; 
            }
        }
      

        
    }

    for(int i=0; i<N; i++){
        printf("%d ",A[i]);
    }

    return 0;
}