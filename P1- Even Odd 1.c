#include <stdio.h>

int main() {
    int i,n,t;
    scanf("%d", &n);
    for(i=1; i<=n; i++) 
    {
        scanf("%d", &t);
        if(t%2==0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
    return 0;
}