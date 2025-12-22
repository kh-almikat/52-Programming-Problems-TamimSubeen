#include <iostream>
using namespace std;

int main() {
    int i, n, t, lsd, msd;

    cin >> n;

    for (i = 1; i <= n; i++) {
        cin >> t;

        lsd = t % 10;

        int temp = t;
        while (temp >= 6) {
            temp = temp / 10;
        }
        msd = temp;

        cout << "sum = " << lsd + msd << endl;
    }

    return 0;
}
