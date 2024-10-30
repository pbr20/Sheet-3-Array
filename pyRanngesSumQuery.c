#include<stdio.h>

int main(){

int N,Q,L,R,sum=0;

scanf("%d%d",&N,&Q);

int A[N];

for(int i=0; i<N; i++){
    scanf("%d",&A[i]);
}

for(int j=0; j<Q; j++){
    scanf("%d%d",&L,&R);

    for(int k=(L-1); k<=(R-1); k++){
        sum = sum + A[k];
    }
    printf("%d\n",sum);
    sum =0;
}

return 0;    
}