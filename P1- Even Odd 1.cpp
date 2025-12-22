#include <iostream>
using namespace std;

int main() {
    int i, n, t;
    cin >> n;

    for (i = 1; i <= n; i++) {
        cin >> t;
        if (t % 2 == 0)
            cout << "Even" << endl;
        else
            cout << "Odd" << endl;
    }

    return 0;
}
