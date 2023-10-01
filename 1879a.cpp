#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define c 200005
#define in int
#define int long long int
#define ve vector<int>
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define endl "\n"
int32_t main()
{
    int T=1;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a,b;
        vector<pair<int,int>> v;
        for(int i =0; i<n; i++){
            int a2,b2;
            cin>>a2;
            cin>>b2;
            v.push_back({a2,b2});
        }
        a = v[0].first;
        b = v[0].second;
        int flag=0; 
        for(int i =1; i<n; i++){
           int a1 = v[i].first;
            int b1 = v[i].second;
            if(a1>=a && b1>=b) {flag = 1; break;}
        }
        if(flag==1) cout<<-1<<endl;
        else cout<<a<<endl;

    }
return 0;
}