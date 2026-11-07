#include<bits/stdc++.h>
using namespace std;
int main(){
        int rows = 6;
        for (int i =1;i<=rows;i++){
          for (int space=0;space<=(rows-i);space++){
            cout<<" ";
          }
          for (int star = 0;star<(2*i)-1 ; star++)  {
            cout<<"*";
          }
        cout<<endl;
        }
        for (int i =1;i<=rows;i++){
          for (int space=0;space<=i;space++){
            cout<<" ";
          }
          for (int star = 0;star<(2*(rows-i)-1 ); star++) {
            cout<<"*";
          }
        cout<<endl;
        }
        
}