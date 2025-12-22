#include <iostream>
using namespace std;

int main() {
    int t, i;
    cin >> t;

    for (i = 0; i < t; i++) {
        int x, count = 0;
        char ch = ' ';

        while (ch != '\n') {
            cin >> x;
            count++;

            cin.get(ch);
        }

        cout << count << endl;
    }

    return 0;
}
