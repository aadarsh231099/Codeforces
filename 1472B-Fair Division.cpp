//https://codeforces.com/problemset/problem/1472/B
//Fair Division

#include <bits/stdc++.h>
using namespace std;

void solve(){
   int div=0,sum=0,one=0,n,a;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a==1){
                one++;
                sum++;
            }
            else
                sum+=2;
        }
        if(sum%2==0){
            div=sum/2;
            if(div%2==0){
                cout<<"YES"<<endl;
            }
            else{
                if(one){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
        else{
            cout<<"NO"<<endl;
        }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  long t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}

