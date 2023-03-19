#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int mid, int h){
    int n1=mid-l+1;
    int n2=h-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
     for(int i=0;i<n2;i++){
        b[i]=arr[mid+i+1];
    }
    int i =0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]= a[i];
            k++;
            i++;
        }
        else{
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while (i<n1)
    {
        arr[k]=a[i];
        k++;
        i++;
    }
    while (j<n2)
    {
        arr[k]=b[j];
        k++; j++;
    }
    
}
void mergesort(int arr[], int lowindex, int highindex){
    if(lowindex<highindex){
        int mid = (lowindex+highindex)/2;
        mergesort(arr, lowindex, mid);
        mergesort(arr, mid+1, highindex);
        merge(arr,lowindex,mid,highindex);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}