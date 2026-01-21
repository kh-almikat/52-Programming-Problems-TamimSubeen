#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore(); 

    for(int t = 0; t < T; t++)  
    {
        string s;
        getline(cin, s);

        int freq[26] = {0};

        
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                freq[s[i] - 'a']++;
            }
        }

        
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                cout << char(i + 'a') << " = " << freq[i] << endl;
            }
        }
    }

    return 0;
}
