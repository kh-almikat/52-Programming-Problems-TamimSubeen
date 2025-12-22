#include <iostream>
using namespace std;

int main() {
    int n, num;
    cin >> n;    

    for (int i = 1; i <= n; i++) {
        cin >> num;
        int count = 0;

        for (int j = 5; j <= num; j = j * 5) {
            count += (num / j);
        }

        cout << count << endl;
    }

    return 0;
}
