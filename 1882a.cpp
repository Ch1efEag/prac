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
        vector<int> v(n,0);
        for(int i =0; i<n; i++)cin>>v[i];
        int a = 1;
        if(v[0] == 1) a =2;
        //if(v[0] == 2) a=1;
        for(int i =1; i<n; i++){
            int prev=a;
            if(v[i]== prev+1) a= a+2;
            else a+= 1;
           // cout<<a<<" ";
        }
        cout<<a<<endl;
    }
return 0;
}