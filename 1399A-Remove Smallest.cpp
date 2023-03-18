//https://codeforces.com/problemset/problem/1399/A
//Remove Smallest
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        while (a.size() > 1) {
            int i = 0;
            while (i < a.size()-1 && abs(a[i] - a[i+1]) > 1) {
                i++;
            }
            if (i == a.size()-1) {
                break;
            }
            a.erase(a.begin()+i);
        }

        if (a.size() == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}