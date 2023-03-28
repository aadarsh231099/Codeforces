//https://codeforces.com/problemset/problem/1560/A
//Dislike of Threes
#include <bits/stdc++.h>
using namespace std;

bool is_disliked(int n) {
    return n % 3 == 0 || n % 10 == 3;
}

int get_kth_liked_integer(int k) {
    int count = 0;
    int n = 1;
    while (true) {
        if (!is_disliked(n)) {
            count++;
            if (count == k) {
                return n;
            }
        }
        n++;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cout << get_kth_liked_integer(k) << endl;
    }
    return 0;
}

