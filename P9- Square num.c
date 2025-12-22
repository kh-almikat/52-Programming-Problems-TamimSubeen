#include <stdio.h> 
#include <math.h>

int main() 
{
    int n, num;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {

        scanf("%d", &num);
        
        int root = sqrt(num);
        
        if (root * root == num) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}