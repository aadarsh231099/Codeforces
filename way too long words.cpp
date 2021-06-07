//https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	string s,res;
	cin>>s;
	int c;
	if(s.length()>10)
		cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
	else
		cout<<s<<endl;
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}