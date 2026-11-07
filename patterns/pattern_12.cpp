#include<bits/stdc++.h>
using namespace std;
int main (){
    int rows = 4; 
    int s=2*(rows-1); 
    for (int i=1;i<=rows;i++){
        //num1
        for(int j=1;j<=i;j++){
            cout<< j;
            } 
        //space
        for(int j=1;j<=s;j++){
            cout<< " ";
        }
        //num2
        for(int j=i;j>=1;j--){
            cout<< j;

        }
             cout<< endl;   
             s -= 2;
          }

    }
