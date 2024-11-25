#include<stdio.h>

int main(){

long long int fib1 = 0;
long long int fib2 = 1;

long long sum =0;

int N;

scanf("%d",&N);

if(N==1){
    printf("%lld",fib1);
}

if(N==2){
    printf("%lld",fib2);
}

if(N>=3){
    fib1 = fib2;
    for(int i=2; i<N; i++){
        sum = sum + fib2;
        fib2 = fib1;
        fib1 = sum;
    } 

    printf("%lld",sum);
}



    return 0;

}