#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]= temp;
}
int partition(int arr[], int low, int high){
   int pivot = arr[high];
   int i = low - 1;
    for (int j = low; j < high; j++)
    {
         if (arr[j]< pivot)
         {
            i++;
            swap(arr,i,j); 
         }
         
    }
    swap(arr,i+1,high);
    return i+1;
}
void quicksort(int arr[],int lowindex, int highindex){
    if (lowindex < highindex)
    {
        int pi = partition(arr, lowindex, highindex);
        quicksort(arr,lowindex,pi-1);
        quicksort(arr,pi+1, highindex);        
    }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i < n;i++){
    cin>>arr[i];
}
quicksort(arr,0,n-1);
return 0;
}