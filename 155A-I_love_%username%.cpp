//https://codeforces.com/problemset/problem/155/A
//I_love_%username%
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, a, best, worst, amazing = 0;
    cin >> n >> best;
    worst = best;
    for(int i=1; i<n; i++){
        cin >> a;
        if(a > best){
            best = a;
            amazing++;
        }
        else if(a < worst){
            worst = a;
            amazing++;
        }
    }
    cout << amazing << endl;

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