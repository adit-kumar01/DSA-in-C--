#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n-1;i++){
    for(int y=i+1;y<n;y++){
        if(arr[i]>arr[y]){
            int temp=arr[i];
            arr[i]=arr[y];
            arr[y]=temp;
        }
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

return 0;
}