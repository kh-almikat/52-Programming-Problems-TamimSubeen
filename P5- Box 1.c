#include <stdio.h>

int main() {
    int n,num;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &num);
        
        for (int row = 1; row <= num; row++) {
            for (int col = 1; col <= num; col++) 
            {
                printf("*");
            }
            printf("\n");
        }

        if (i != n) {
            printf("\n");  
        }
    }

    return 0;
}
