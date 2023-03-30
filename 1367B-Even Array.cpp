//https://codeforces.com/problemset/problem/1367/B
//Even Array
#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n,c=0,f=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int o=0,e=0;
        for(int i=0;i<n;i++){
            if(i%2!=a[i]%2){
                if(a[i]%2==1)o++;
                else e++;
            }
        }
        if(o!=e){
            cout<<-1<<endl;
        }
        else{
            cout<<e<<endl;
        }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}

