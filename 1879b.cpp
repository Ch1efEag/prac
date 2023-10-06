#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define c 200005
#define in int
#define int long long int
#define vec vector<int>
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
        vec v1(n,0);
        vec v2(n,0);
        int sum1=0;
        int sum2=0;
        int min1=INT_MAX;
        int min2 = INT_MAX;
        for(int i =0;  i<n; i++){
            cin>>v1[i];
            sum1+= v1[i];
            if(min1 > v1[i]) min1 = v1[i];
        } 
         for(int i =0;  i<n; i++){
            cin>>v2[i];
            sum2+= v2[i];
            if(min2 > v2[i]) min2 = v2[i];
        } 
        cout<<min(sum2 + n*min1, sum1 + n*min2)<<endl;

    }
return 0;
}