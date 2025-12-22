#include <iostream>
using namespace std;

int main() {
    int n, num;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> num;

        for (int row = 1; row <= num; row++) {
            for (int col = 1; col <= num; col++) {
                cout << "*";
            }
            cout << endl;
        }

        if (i != n) {
            cout << endl;
        }
    }

    return 0;
}
