#include <stdio.h>

int main()
{
    int n,num;
    scanf("%d", &n);    

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        int count = 0;

        for(int j = 5; j <= num; j = j * 5)
        {
            count = count + (num / j);
        }

        printf("%d\n", count);
    }

    return 0;
}
