#include<bits/stdc++.h>
using namespace std  ;
int main(){
    int n = 6;
    int strt = 1;
    for (int i = 1;i<n;i++){
        if (i%2 != 0) {
          strt = 0;
        }
        else{
            strt = 1;
        }
        for (int j = 1;j<i;j++){
            cout<<strt;
            strt = 1-strt;
        }
        cout<<endl;
    }
}