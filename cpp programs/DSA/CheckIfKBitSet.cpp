#include<bits/stdc++.h>
using namespace std;

//method 1

void kthbit(int n,int k){
    if(n&(1<<(k-1))) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}

//method 2

void kthbit2(int n,int k){
    if(n>>(k-1)&1) cout<<"yes";
    else cout<<"No";
}

int main(){
    
    int n;cout<<"N: ";cin>>n;int k;cout<<"K: ";cin>>k;
    kthbit2(n,k);
    return 0; 
}