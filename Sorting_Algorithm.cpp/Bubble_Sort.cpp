#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    int counter=0;
    while(counter<n-1){
    for(int i=0;i<n-counter;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        
        }

    }
    counter++;
    }
    
}
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}