//https://codeforces.com/problemset/problem/4/A
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	long long n;
	cin>>n;
	if (n>2&&n%2==0)
	printf("YES");
    else
    printf("NO"); 
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t;
	t=1;
	while(t--)
		solve();
	return 0;
}