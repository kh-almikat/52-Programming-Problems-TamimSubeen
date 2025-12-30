#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    cin.ignore();   

    for (int i = 0; i < n; i++) 
    {
        string str;
        char ch;
        int count = 0;

        getline(cin, str);   
        cin >> ch;
        cin.ignore();        

        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[j] == ch) 
            {
                count++;
            }
        }

        cout << "Occurrence of '" << ch << "' in '" << str << "' = " << count << endl;
    }

    return 0;
}
