//https://codeforces.com/problemset/problem/151/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	cout<<(min(min(((k*l)/nl),(c*d)),(p/np)))/n;
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