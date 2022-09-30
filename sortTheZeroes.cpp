#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<int>v(n);
        map<int,int>mp;
        for(auto &it : v)
        cin>>it;
        for(int i=0;i<k;i++)
            mp[v[i]]++;
            sort(v.begin(),v.end());
            long long ans=0;
            for(int i=0;i<k;i++)
            mp[v[i]]++;
            if(mp[v[i]]==1)
            ans++;
            cout<<ans<<endl;

        
    }
    return 0;
}