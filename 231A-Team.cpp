//https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>
using namespace std;
int s=0,ct=0;
int solve(){
	int a,b,c;
	cin>>a>>b>>c;
    if(a==1 && b==1 || a==1 && c==1 || b==1 && c==1) 
    		ct++;
    	return ct;
}	
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t;
	cin>>t;
	while(t--)
	{  ct=0;
       solve();
       s=s+ct;
	}
	cout<<s;
	return 0;}