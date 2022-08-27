#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,key,flage =0,s=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
// sort(arr,arr+n);
cin>>key;
for(int i=s;i<n;i++){
    int mid = (s+n)/2;
    if(arr[mid]==key){
        cout<<mid+1;
        flage=1;
        break;
    }
    else if(arr[mid]>key){
        n=mid-1;
    }
    else{
        s=mid+1;
    }
}
if(flage==0){
    cout<<"Element is not in list"<<endl;
}
return 0;
}