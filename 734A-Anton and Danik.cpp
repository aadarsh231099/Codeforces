//https://codeforces.com/problemset/problem/734/A
#include <bits/stdc++.h>

using namespace std;
void solve(){
     string s;
     int n,ca=0,cd=0;
     cin>>n;
     cin>>s;
     for (int i = 0; i < s.length(); ++i)
     {
          if(s[i]=='A')
               ca++;
          if(s[i]=='D')
               cd++;
     }
     if(ca>cd)
          cout<<"Anton";
     else if(ca==cd)
          cout<<"Friendship";
     else
          cout<<"Danik";
     }
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     //cin>>t;
     while(t--)
     solve();
     return 0;}