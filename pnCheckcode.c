        //Wrong answer on test 9

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int A, B;

    scanf("%d%d", &A, &B);
    getchar();

    char X[A + B + 2];

    fgets(X, sizeof(X), stdin);

    size_t len = strlen(X);

    if (len > 0 && X[len - 1] == '\n')
    {
        X[len - 1] = '\0';
    }

    int count = 0;

    if (X[A] == '-')
    {

        for (int i = 0; i < (A + B + 2); i++)
        {
            if (isdigit(X[i]) || X[i] == '-')
            {
                count++;
            }
        }

        if (count == (A + B + 1))
        {
            printf("Yes\n");
        }
        else if (count != (A + B + 1))
        {
            printf("No\n");
        }
    }

    else
    {
        printf("No\n");
    }

    return 0;
}