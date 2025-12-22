#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
     {
        int num;
        scanf("%d", &num);
        int factorial = 1;

        for (int j = 1; j <= num; j++) 
        {
            factorial *= j;
        }
        printf("%d\n", factorial);
    }
    return 0;
}