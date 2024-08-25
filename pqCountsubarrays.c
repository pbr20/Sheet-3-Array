#include<stdio.h>

int main(){

int t,n,temp;
int count;
int A[100];

scanf("%d",&t);

for(int i=1; i<=t; i++){
    scanf("%d",&n);
    for(int j=0; j<n; j++){
        scanf("%d",&A[j]);
    }
count =0;

    for(int i=0;i<n;i++){
    temp = A[i];
    for(int j=i; j<n; j++){
        if(temp <= A[j]){
            count ++;
            temp = A[j];
        }
        else{
            break;
        }
    }
}

printf("%d\n",count);
}

    return 0;
}