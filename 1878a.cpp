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
        int n,k;
        cin>>n>>k;
        int a;
        int flag=0;
        for(int i =0; i<n; i++){
            cin>>a;
            if(a==k){
                flag=1;
            }
        }
        if(!flag) NO;
        else YES;
    }
return 0;
}