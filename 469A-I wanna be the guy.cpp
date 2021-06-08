//https://codeforces.com/problemset/problem/469/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,c=1;
	cin>>n;
	int p;
	cin>>p;
	int a[1000];
	for(int i=0;i<p;i++)
	{
		cin>>a[i];
	}
	int q;
	cin>>q;
	for(int j=p;j<p+q;j++)
	{
		cin>>a[j];
	}
	sort(a,a+p+q);
	for (int i = 1; i < p+q; ++i)
	{
		if(a[i-1]!=a[i]){
			c++;
		}
	}if(p==0&&q==0){
		cout<<"Oh, my keyboard!"<<"\n";
		return;
	}
	if(c==n){
		cout<<"I become the guy."<<"\n";
		return;
	}

	cout<<"Oh, my keyboard!"<<"\n";
}    
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}