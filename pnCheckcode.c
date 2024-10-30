#include <stdio.h>
#include <string.h>


int main()
{

    int A, B, count = 0;

    scanf("%d%d", &A, &B);
    getchar();

    char X[21];

    fgets(X, sizeof(X), stdin);

    if (X[A] == '-')
    {
        for (int i = 0; i <= (A + B); i++)
        {
            if (i == A)
            {
                continue;
            }

            if ((X[i] - '0') >= 0 && X[i] - '0' <= 9)
            {
                count++;
            }

            else
            {
                printf("No\n");
                break;
            }
        }
    }

    else
    {
        printf("No");
    }

    if (count == (A + B))
    {
        printf("Yes\n");
    }
    return 0;
}