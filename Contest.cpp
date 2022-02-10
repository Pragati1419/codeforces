#include<bits/stdc++.h>

using namespace std;

int main(){

    int a , b , c , d , k1 , k2 ;
    cin>>a>>b>>c>>d>>k1>>k2 ;
    k1 = max( 3*a/10,a-a*c/250 ) ;
    k2 = max( 3*b/10,b-b*d/250 ) ;
    if( k1 > k2 )
        cout<<"Misha"<<endl;
    else if( k2 > k1 )
cout<<"Vasya"<<endl;
    else
        cout<<"Tie"<<endl;
    return 0 ;





}