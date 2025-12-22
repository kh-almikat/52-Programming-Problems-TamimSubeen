#include <iostream>
using namespace std;

int main() {
    int i, j, n, t;
    cin >> n;

    for (i = 1; i <= n; i++) {
        cin >> t;
        cout << "case " << i << ":";

        for (j = 1; j <= t; j++) {
            if (t % j == 0) {
                cout << " " << j;
            }
        }
        cout << endl;
    }
    return 0;
}
