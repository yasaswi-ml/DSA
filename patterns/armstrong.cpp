#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ,num=0,count,temp,last_digit;
    cout<<"enter a number :";
    cin>>n;
    temp = n;
    count = (int)(log10(n)+1);  
      while(temp>0){
        last_digit = temp%10;
        num = num + pow(last_digit,count);
        temp = temp/10 ;
        
    }
  if(num==n){
  cout<<"it is an armstrong ";
}
  else{ cout<<"not an armstrong ";
}

}