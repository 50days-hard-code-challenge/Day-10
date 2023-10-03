#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int&i,int n){
    if(i>n-1){
        return;
    }
    for(int k=0;k<n-i-1;k++){
        if(arr[k]>arr[k+1]){
            swap(arr[k],arr[k+1]);
        }
    }
    bubblesort(arr,++i,n);
}
int main(){
    int n;
    cin>>n;
    int*arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    bubblesort(arr,i,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
