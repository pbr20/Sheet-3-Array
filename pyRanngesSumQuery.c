#include<stdio.h>
 
int main(){
 
int N,Q,L,R;
long long int sum=0;
 
scanf("%d%d",&N,&Q);
 
long long int A[100000];
 A[0] = 0;
for(int i=1; i<=N; i++){
    scanf("%lld",&A[i]);
}
 for(int i=1; i<=N; i++){
    A[i] = A[i-1] + A[i];
 }
 
 
 
for(int j=0; j<Q; j++){
    scanf("%d%d",&L,&R);
 
 long long int  sum = A[R] - A[L-1];
 
    printf("%lld\n",sum);
 
}
 
return 0;
}