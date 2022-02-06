#include<bits/stdc++.h>

using namespace std;


int main(){

    int year;
    cin>>year;

    while(true){

        year+=1;
         int a=year/1000;

         int b=year/100%10;

         int c=year/10%10;

         int d=year%10;

         if(a!=b && b!=c && c!=a  && b!=c && b!=d && c!=d) 
         {

             cout<<year<<endl;
         

         return 0;

         }
    }

}