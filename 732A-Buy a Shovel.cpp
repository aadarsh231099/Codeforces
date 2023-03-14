//https://codeforces.com/problemset/problem/732/A
//Buy a Shovel
#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, r;
    cin >> k >> r;

    int cnt = 1; // Polycarp needs to buy at least one shovel
    int price = k; // price of the first shovel
    while (price % 10 != r && price % 10 != 0) { // while he can't pay without change
        cnt++;
        price += k; // buy one more shovel
    }
    cout << cnt << endl; // print the minimum number of shovels he needs to buy
    return 0;
}






