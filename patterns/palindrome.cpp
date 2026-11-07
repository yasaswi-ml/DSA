#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ,rev=0,last_digit,temp;
    cout<<"enter a number :";
    cin>>n;
    temp = n;
    while(temp>0){
        last_digit = temp%10;
        rev = (rev*10) +last_digit;
        temp = temp/10 ;
        
    }
  if(rev==n){
  cout<<"it is an palindrome ";
}
  else{ cout<<"not an palindrome ";
}

}