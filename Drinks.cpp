#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    double x=0;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        x+= static_cast<double>(p) / 100;
    }
    double y = x/n;
    cout << fixed << setprecision(12) << (y * 100) << endl;
    return 0;

}