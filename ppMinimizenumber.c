#include<stdio.h>

void operation(int n, int A[],int otc);

int main(){

int n;
int otc =0;

scanf("%d",&n);

int A[n];

for(int i=0; i<n; i++){
    scanf("%d",&A[i]);
}

operation(n,A,otc);



    return 0;
}

void operation(int n, int A[],int otc){

    int count =0;
    
    for(int i=0; i<n; i++){
        if(A[i] % 2 ==0){
            count ++;
            A[i] = A[i] / 2;
        }
    }
if(count != n){
  printf("%d\n",otc); 
}
   else if(count == n){
        otc ++;
        operation(n , A, otc);
    }
 
   
}