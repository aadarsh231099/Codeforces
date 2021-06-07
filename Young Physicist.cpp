//https://codeforces.com/problemset/problem/69/A
#include <bits/stdc++.h>
using namespace std;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t,s1=0,s2=0,s3=0;
     cin>>t;
     while(t--)
     {
     int a[3];
     for(int i=0;i<3;i++)
     {
          cin>>a[i];
     }
          s1=s1+a[0];
          s2=s2+a[1];
          s3=s3+a[2];
     }
     if(s1==0 && s2==0 && s3==0)
          cout<<"YES";
     else
          cout<<"NO";
     return 0;}