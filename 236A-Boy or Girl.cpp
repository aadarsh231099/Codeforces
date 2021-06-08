//https://codeforces.com/problemset/problem/236/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
     string s;
     long long c=0,flag=0;
     cin>>s;
     for (int i = 0; i < s.length(); ++i)
     {
          flag=0;
          for (int j = 0; j < i; ++j)
          {
               if(s[i]==s[j]){
                    flag=1;
                    break;
               }
               
          }
          if(flag==0){
               c++;
          }
     }
     if((c%2)==0)
     cout<<"CHAT WITH HER!";
     else
     cout<<"IGNORE HIM!";
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     //cin>>t;
     while(t--)
     solve();
     return 0;}