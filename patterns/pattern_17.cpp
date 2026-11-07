#include<bits/stdc++.h>
using namespace std;
int main(){
    int n =5;
    //upper 
    for (int i =0;i<=n;i++){
        //stars
        for(int j=0;j<=(n-i);j++){
            cout<<"*";
        }
        
        //spaces
        for(int j=0;j<=(2*i)-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=(n-i);j++){
            cout<<"*";
        }
        
        cout<<endl;

      }
      //lower
    for (int i =0;i<=n;i++){
        //stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for (int j=0;j<=2*(n-i)-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        
        cout<<endl;

      }
    }