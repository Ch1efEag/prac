#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
#define c 200005
#define in int
#define int long long int
#define ve vector<int>
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define endl "\n"
pair<int,int> fun(string &s, int n){
    //vector<int> v;
    int ans=1;
    int count=1;
    int count1 =0;
    int fact=1;
    for(int i =0; i<n-1;  i++){
        if(s[i] == s[i+1]){
            count++;
            count1++;
        }
        else{
           // v.push_back(count);
            ans = (ans*count)%mod;
            count=1;
            
            
        }
    }
    if(count>1){
        ans = (ans*count)%mod;
       // v.push_back(count);
    }
    for(int i=1;  i<=count1; i++){
        fact = (fact*i)%mod;
    }
    return {count1,(ans*fact)%mod};
}
int32_t main()
{
    int T=1;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        int n = s.size();
        pair<int,int> s1 = fun(s,n);
        cout<<s1.first<<" "<<s1.second<<endl;
    }
return 0;
}