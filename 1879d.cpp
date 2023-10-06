#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
#define c 200005
#define in int
#define int long long int
#define vec vector<int>
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define endl "\n"
int32_t main()
{
    int n;
    cin>>n;
    vec v1(n,0),v2(n+1,0);
    for(int i =0; i<n; i++){
        cin>>v1[i];
        if(i==0) v2[1] = v1[0];
        if(i>0)
        v2[i+1] = (v2[i]^v1[i]);
    }
    int ans=0;
    for(int i =0;  i<n; i++){
        for(int j =i; j<n; j++){
            if(i!=j)
            ans = (ans + ((j-i+1)* (v2[j+1] ^v2[i]))%mod)%mod;
           // else ans+= v1[i];
        }
    }
    cout<<ans<<endl;
return 0;
}