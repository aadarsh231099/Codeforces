//https://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>

using namespace std;
int check(int n)
{  int f=0;
   string s=to_string(n);
   for(int i=0;i<s.length();i++)
   {  for(int j=0;j<i;j++)
          if (s[i]==s[j])
         {   f=1;
             break;
        }
   }
   if(f==0)
     return 1;
   else
     return 0;
}
void solve(){
     int n,flag=0,i;
     cin>>n;
     for(i=n+1;i<=10000;i++)
     {
               if(check(i)==1)
               {
                    flag=1;
                    break;
               }
          }
               cout<<i;
     }
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     //cin>>t;
     while(t--)
     solve();
     return 0;}