#include <iostream>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;

        float overs_played = (300 - c) / 6.0;
        float overs_remaining = c / 6.0;

        float run_rate = b / overs_played;
        float required_run_rate = ((a - b) + 1) / overs_remaining;

        cout.setf(ios::fixed);
        cout.precision(2);
        cout << run_rate << " " << required_run_rate << endl;
    }

    return 0;
}
