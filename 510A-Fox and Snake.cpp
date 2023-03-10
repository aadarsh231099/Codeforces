//https://codeforces.com/problemset/problem/510/A
//Fox and Snake
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    for(int i=1; i<=a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(i%4==0)
            {
                if(j==0)cout<<"#";
                else cout<<".";
            }
            else if(i%4==2)
            {
                if(j==b-1)cout<<"#";
                else cout<<".";
            }
            else
            {
                cout<<"#";
            }
        }
        cout<<endl;
    }

}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  //cin>>t;
  while(t--)
    solve();
  return 0;
}