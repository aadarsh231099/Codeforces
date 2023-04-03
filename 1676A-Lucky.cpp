//https://codeforces.com/problemset/problem/1676/A
//Lucky?

#include <bits/stdc++.h>
using namespace std;

void solve(){
        string s;
        cin >> s;
        long c=0;
        for(long i=0;i<6;i++)
            {
                c+=(i<3 ? -1 : 1)*(s[i]-'0');
            }
        cout<<(c?"NO":"YES")<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
    long long t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}

