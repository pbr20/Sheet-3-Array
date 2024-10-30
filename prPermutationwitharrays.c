#include <stdio.h>

int counting(int n,int A[],int B[]);

int main()
{

    int  n;
    int count = 0;
    
    scanf("%d", &n);

     int  A[1000]; 
     int   B[1000];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }

    count = counting(n,A,B);
    

    if (count == (n))
    {
       
            printf("yes\n");
        
    }

    else
    {
        printf("no\n");
    }
    return 0;
}

int counting(int n, int A[],int B[]){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (B[i] == A[j])
            {
                count++;
                A[j] = 0;
                break;
            }

           
        }
    }

   
    return count;
}