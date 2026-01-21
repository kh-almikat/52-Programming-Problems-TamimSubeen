#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    

    for(int i = 0; i < n; i++)
    {
        char s[1005];
        int freq[26] = {0};

        fflush(stdin);
        gets(s);

        
        for (int j = 0; s[j] != '\0'; j++)
        {
            if (s[j] >= 'a' && s[j] <= 'z')
            {
                freq[s[j] - 'a']++;
            }
        }

        for (int j = 0; j < 26; j++)
        {
            if (freq[j] > 0)
            {
                printf("%c = %d\n", j + 'a', freq[j]);
            }
        }
    }

    return 0;
}
