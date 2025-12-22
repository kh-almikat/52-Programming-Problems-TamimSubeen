#include<stdio.h>

int main()
{
    int i, n, t, lsd, msd;

    scanf("%d", &n);

    for(i=1; i<=n;i++)
    {
        scanf("%d", &t);

        lsd = t % 10;

        int temp = t;
        while(temp >= 6)
        {
            temp = temp / 10;
        }
        msd = temp;

        printf("sum = %d\n", lsd + msd);
    }

    return 0;
}
