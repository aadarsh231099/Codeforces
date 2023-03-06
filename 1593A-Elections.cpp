
#include <bits/stdc++.h>
using namespace std;
void solve(){
        long a, b, c; 
        cin>>a>>b>>c;
        long mx = (a > b) ? a : b; mx = (mx > c) ? mx : c;
        bool tie = (((a == mx) + (b == mx) + (c == mx)) > 1);
        long u = (a == mx) ? tie : (mx + 1 - a);
        long v = (b == mx) ? tie : (mx + 1 - b);
        long w = (c == mx) ? tie : (mx + 1 - c);
        cout<<u<<" "<<v<<" "<<w<<" "<<endl;
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