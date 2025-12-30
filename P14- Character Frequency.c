#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        char str[10005];
        char ch;
        int count = 0;

        fflush(stdin); 
        gets(str); 

      
        scanf("%c", &ch);
    

      
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[j] == ch)
            {
                count++;
            }
        }

       
        printf("Occurrence of '%c' in '%s' = %d\n", ch, str, count);
    }

    return 0;
}
