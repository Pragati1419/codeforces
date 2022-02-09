#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,x,y;
        cin>>x>>y>>a>>b;
        long long ans=0;
        if((y-x)%(a+b)==0)
        {
            ans=(y-x)/(a+b);
        }
        else ans=-1;
        cout<<ans<<endl;
    }
    return 0;
}


    






    
 
