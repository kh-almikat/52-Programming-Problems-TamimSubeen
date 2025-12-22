#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, num;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        
        int root = sqrt(num);
        
        if (root * root == num) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
