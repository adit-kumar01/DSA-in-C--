#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,key,flage=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cin>>key;
for(int i=0;i<n;i++){
    if(arr[i]==key){
        // position of key
        cout<<i+1;
        flage=1;
    }
   
}
if(flage==0){
    cout<<"Element is not present in list"<<endl;
}
return 0;
}