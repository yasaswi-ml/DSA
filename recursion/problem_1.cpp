 //print n times 
 #include<bits/stdc++.h>
 using namespace std;
 void print(int i,int n){
    if(i>=n)
    return;

    cout<<"yahhhh"<<endl;
    print(i+1,n);
 }
 int main(){
    int n;
    cout<<"enter n value";
    cin>>n ;
    print(1,n);
    //return 0;

 }