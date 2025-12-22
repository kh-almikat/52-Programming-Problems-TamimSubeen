#include<stdio.h>
int main()
{
    int i,j,n,t;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&t);
        printf("case %d:",i);

        for(j=1;j<=t;j++)
        {
            if(t%j==0)
            {
                printf(" %d",j);
            }
        }
        printf("\n");

    }
}