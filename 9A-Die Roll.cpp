//https://codeforces.com/problemset/problem/9/A
//Die Roll

#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
  return (b==0) ? a:gcd(b, a%b);
}

void solve(){
    int f,s;
    cin>>f>>s;
    if(f<s)
      {
        f=s;
      }
    const int numSides=6;
    int nom=numSides-f+1;
    int den=numSides;
    int div=gcd(nom, den); 
    nom/=div;
    den/=div;
    cout<<nom<<"/"<<den;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
    long long t=1;
  //cin>>t;
  while(t--)
    solve();
  return 0;
}

