#include<bits/stdc++.h>
using namespace std;
int main(){
    int n =5;
    for (int i =0;i<=n;i++){
      //space
      for (int j = 0;j<=(n-i);j++){
        cout<<" ";
      }
      //increasing char 
      for (int j =0;j<i;j++){
        cout<<char('A'+j);
      }
      //decreasing char
      for(int j =i-2;j>=0;j--){
        cout<<char('A'+j);
      }
        cout<<endl;
    }
} 