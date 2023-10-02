#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define c 200005
// #define in int
// #define int long long int
#define ve vector<int>
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define endl "\n"
int main()
{
    int T=1;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        //vector<vector<int>> v(n);
        vector<set<int>> v1(n);
        set<int> help;
       
        for(int i =0; i<n; i++){
            int a;
            cin>>a;
             set<int> s2;
            
            for(int j =0; j<a; j++){
                int b;
                cin>>b;
               // cout<<b<<" ";
             //   v[i].push_back(b);
                s2.insert(b);
                help.insert(b);
            }
           // cout<<endl;
            v1[i] = (s2);
        }
        int ans = 0;
        for(int i =1;i<=50; i++){
            set<int> h;
            for(int j=0; j<n; j++){
                if(v1[j].find(i) == v1[j].end()){
                    h.insert(v1[j].begin(),v1[j].end());
                }
            }
            if(h.size() > ans && h.size() < help.size()) ans = h.size() ;
        }
        cout<<ans<<endl;
        

    }
return 0;
}