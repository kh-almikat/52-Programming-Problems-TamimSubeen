#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        int a, b, c, temp;

        cin >> a >> b >> c;
        cout << "Case " << i << ": ";

        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }

        if (a > c) {
            temp = a;
            a = c;
            c = temp;
        }

        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }

        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}
