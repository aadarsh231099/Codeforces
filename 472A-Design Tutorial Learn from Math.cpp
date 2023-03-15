//https://codeforces.com/problemset/problem/472/A
//Design Tutorial: Learn from Math
#include <bits/stdc++.h>
using namespace std;

bool is_composite(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    for (int i = 4; i < n; i++) {
        if (is_composite(i) && is_composite(n - i)) {
            cout << i << " " << n - i << endl;
            break;
        }
    }

    return 0;
}






