//https://codeforces.com/problemset/problem/282/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,res=0,c=0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {   string s;
    	cin>>s;
    	if(s[0]=='+' || s[2]=='+')
    		c=c+1;
    	else
    		c=c-1;
    }cout<<c;
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     //cin>>t;
     while(t--)
          solve();
     return 0;
}