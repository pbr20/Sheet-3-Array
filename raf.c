#include <stdio.h>
int main()
{
    int count=0, n,t,A[4],f=0;

    scanf("%d", &n);
    t=n;
    n/=10;
    t%=10;

    for(int i =0; i<3; i++){
        if(t == (n%10)){
            count++;
        }else if(i==1 && t != (n%10)){
            f=1;
        }
         t=n;
        t%=10;
        n/=10;
    
       
    }

    if(count>=2 && f==0){
        printf("Yes");
    }
    else{
        printf("No");
    }



   
    return 0;
}