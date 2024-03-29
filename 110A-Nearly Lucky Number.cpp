//https://codeforces.com/problemset/problem/110/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
     string s;
     int c=0;
     cin>>s;
     for(int i=0;i<s.length();i++)
     {     if(s[i]=='4'||s[i]=='7')
               {
                    c++;
                    continue;
               }
     }    
          if((c==s.length() && s.length()>1 &&(c%4==0 || c%7==0))||(c==4 || c==7))
               cout<<"YES";
          else
               cout<<"NO";
     }
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     //cin>>t;
     while(t--)
     solve();
     return 0;}


ANOTHER SOLUTION:-
#include <bits/stdc++.h>
using namespace std;
void solve(){
     string s;
     long long c=0;
     cin>>s;
     for(int i=0;i<s.length();i++)
     {     if(s[i]=='4'||s[i]=='7')
               {
                    c++;
               }
     } 
     if(c==0){
          cout<<"NO";
          return;
     }   
    while(c){
     int temp=c%10;
     if(temp!=4&&temp!=7){
          cout<<"NO";
          return;
     }
     c=c/10;
    }
    cout<<"YES";
     }
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     //cin>>t;
     while(t--)
     solve();
     return 0;}