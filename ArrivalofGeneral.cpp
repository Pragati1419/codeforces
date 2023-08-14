#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=0,min=101,maxi,mini;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
            maxi=i;
        }
        if(arr[i]<=min){
            min=arr[i];
            mini=i;
        }
    }
    int ans=0;
    if(maxi>mini){
        ans=maxi+(n-1-mini)-1;
    }
    else{
        ans=maxi+(n-1-mini);
    }
    cout<<ans;
    return 0;
}