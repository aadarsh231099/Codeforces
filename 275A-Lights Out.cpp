//https://codeforces.com/problemset/problem/275/A
//Lights Out
#include <bits/stdc++.h>
using namespace std;
void solve(){
int grid[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> grid[i][j];
        }
    }

    int lights[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i][j] % 2 == 1) {
                lights[i][j] = 1 - lights[i][j];
                if (i > 0) lights[i-1][j] = 1 - lights[i-1][j];
                if (j > 0) lights[i][j-1] = 1 - lights[i][j-1];
                if (i < 2) lights[i+1][j] = 1 - lights[i+1][j];
                if (j < 2) lights[i][j+1] = 1 - lights[i][j+1];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << lights[i][j];
        }
        cout << endl;
}
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  //cin>>t;
  while(t--)
    solve();
  return 0;
}