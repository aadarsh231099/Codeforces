//https://codeforces.com/problemset/problem/1433/A
//Boring Apartments

#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n;
    cin>>n;
        vector<int>v;
        v.push_back(1);
        v.push_back(11);
        v.push_back(111);
        v.push_back(1111);
        for(int i=2;i<10;i++){
            for(int j=0;j<4;j++){
                int d=v[j]*i;
                v.push_back(d);
            }
        }
        int c = 0;
        for(int i=0;i<v.size();i++){
            if(v[i]==n){
                if(v[i]<10){
                    c++;
                }
                else if(v[i]<100){
                    c+=2;
                }
                else if(v[i]<1000){
                    c+=3;
                }
                else if(v[i]<10000){
                    c+=4;
                }
                break;
            }
            if(v[i]<10){
                c++;
            }
            else if(v[i]<100){
                c+=2;
            }
            else if(v[i]<1000){
                c+=3;
            }
            else if(v[i]<10000){
                c+=4;
            }

        }
        cout<<c<<endl;
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

