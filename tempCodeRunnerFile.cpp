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
    vec v1(n,0),v2(n,0);
    for(int i =0; i<n; i++){
        cin>>v1[i];
        if(i==0) v2[0] = v1[0]%mod;
        if(i>0)
        v2[i] = (v2[i-1]^v1[i])%mod;
    }
    int ans=0;
    for(int i =0;  i<n; i++){
        for(int j =i; j<n; j++){
            ans+= ((j-i+1)* (v2[j] ^v2[i] ^ v1[i])%mod)%mod;
        }
    }
    cout<<ans<<endl;
return 0;
}