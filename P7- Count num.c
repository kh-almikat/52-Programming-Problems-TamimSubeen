#include <stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        int x, count = 0;
        char ch = ' ';

        while(ch != '\n')
        {
            scanf("%d", &x);
            count++;

            ch = getchar();
        }

        printf("%d\n", count);
    }

    return 0;
}
