    

#include <stdio.h>

void sorting(int A[] , int N){
    for(int i=0; i<N; i++){
        for(int j=1; j<(N-i); j++){
            if(A[j-1] > A[j] ){
                int t = A[j-1];
                A[j-1] = A[j];
                A[j] = t; 
            }
        }
    }

    for(int i=0; i<N; i++){
        printf("%d ",A[i]);
    }
}

int main()
{

    int N;

    scanf("%d", &N);

    int A[1000];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
sorting(A , N);
  

    return 0;
}