#include<stdio.h>

int main(){

int n;

scanf("%d",&n);

int  long long fib1=0;
int  long long fib2=1;

int  long long sum=0;


if(n==1){
    printf("%lld\n",fib1);
}

else if(n==2){
    printf("%lld\n",fib2);
}

else if(n>2){
    fib1 = fib2;
    for(int i=3; i<=n; i++){
        sum = sum + fib2;
        fib2 = fib1;
        fib1 = sum;
    }
    printf("%lld\n",sum);
}




    return 0;
}