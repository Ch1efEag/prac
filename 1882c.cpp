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
        vector<int>v(n);
        int ans=0;
       for(int i =0; i<n; i++) cin>>v[i];
       vector<int> pref(n+1,0);
       for(int i =n-1; i>-1; i--){
        pref[i]  = pref[i+1] + max((int)0 ,v[i]);
       }
       for(int i =0; i<n; i++){
        if(i&1){
            ans = max(ans,pref[i+1]);
        }
        else{
            ans = max(ans, v[i] + pref[i+1]);
        }
       }
       cout<<ans<<endl;
      


    }
return 0;
}