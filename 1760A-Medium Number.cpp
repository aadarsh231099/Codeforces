//https://codeforces.com/problemset/problem/1760/A
//Medium Number

#include <bits/stdc++.h>
using namespace std;

void solve(){
  int a,b,c;
  cin>>a>>b>>c;
  int arr[3];
  arr[0]=a;
  arr[1]=b;
  arr[2]=c;
  sort(arr,arr+3);
  cout<<arr[1]<<endl;
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

