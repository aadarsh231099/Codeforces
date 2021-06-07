//https://codeforces.com/contest/158/problem/A
#include <bits/stdc++.h>
using namespace std;

void solve(){
int n,k,i,c=0;
cin>>n>>k;
int a[n];
for (i=0;i<n;i++)
{
	cin>>a[i];
}
int val=a[k-1];
for(i=0;i<n;i++)
{
	if(a[i]>=val && a[i]>0)
	c++;
}
cout<<c;
}	
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t=1;
	//cin>>t;
	while(t--)
	{  
       solve();
	}
	return 0;}