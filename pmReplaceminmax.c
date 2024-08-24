#include<stdio.h>

int min(int n, int A[]);

int max(int n, int A[]);

int main(){

int N,temp;

scanf("%d",&N);

int A[N];

for(int i=0; i<N; i++){
    scanf("%d",&A[i]);
}

int mm = min(N, A);

int maxm= max(N , A);

temp = A[mm];

A[mm] = A[maxm];

A[maxm] = temp;

for(int i=0; i<N; i++){
    printf("%d ",A[i]);
}

printf("\n");

    return 0;
}

int min(int n, int A[]){

    int mi = A[0];
    int minp = 0;

    for(int i=1; i<n; i++){
        if(mi > A[i]){
            mi = A[i];
            minp =i;

        }
    }
    return minp;
}

int max(int n, int A[]){
    int mai = A[0];
    int maxp =0;

    for(int i=0; i<n; i++){
        if(mai < A[i]){
            mai = A[i];
            maxp =i;
        }
    }
    return maxp;
}