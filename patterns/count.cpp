#include <bits/stdc++.h>
using namespace std ;
/*
int main(){
    int n ,last_digit;
    cout<<"enter number :";
    cin>>n;

    while (n>0)
    {
      last_digit = n%10;
      n = n/10;
      cout<<last_digit;
    }
    
       

}*/

//OR
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int k ,count;
    cout<<"enter number :";
    cin>>k;
    count = (int)(log10(k)+1);
    cout<<count;

}
