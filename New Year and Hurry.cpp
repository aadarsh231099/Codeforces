//https://codeforces.com/problemset/problem/750/A
//New Year and Hurry
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int total_time = 0;
    for (int i = 1; i <= n; i++) {
        int problem_time = 5 * i;
        if (total_time + problem_time + k <= 240) {
            total_time += problem_time;
        } else {
            cout << i - 1 << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}









