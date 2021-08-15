//https://codeforces.com/problemset/problem/1520/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n,c=0;
  cin>>n;
  char s[1000];
  char s1[1000];
  cin>>s;
  int j=0;
  for(int i=0;i<n;i++)
   { if(s[i]==s[i+1])
      continue;
    else
      {s1[j]=s[i];
      j++;}
  }
  for(int k=0;k<j;k++)
  {
    for(int l=k+1;l<j;l++)
      {if(s1[k]==s1[l])
        {c++;break;}
  }}if(c!=0)cout<<"NO"<<endl;
  else
    cout<<"YES"<<endl;

}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
     solve();
  }
  return 0;
}
