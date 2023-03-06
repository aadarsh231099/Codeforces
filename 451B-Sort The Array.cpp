//https://codeforces.com/problemset/problem/451/B
//Sort the Array
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int start = -1, end = -1;
    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i+1]) {
            start = i;
            break;
        }
    }
 
    if (start == -1) {
        cout << "yes" << endl;
        cout << "1 1" << endl;
        return 0;
    }
 
    for (int i = start+1; i < n-1; i++) {
        if (a[i] < a[i+1]) {
            end = i;
            break;
        }
    }
 
    if (end == -1) {
        end = n-1;
    }
 
    reverse(a.begin()+start, a.begin()+end+1);
    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i+1]) {
            cout << "no" << endl;
            return 0;
        }
    }
 
    cout << "yes" << endl;
    cout << start+1 << " " << end+1 << endl;
    return 0;
}