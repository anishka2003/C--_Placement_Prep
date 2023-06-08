#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,4,5,10};
    int size=sizeof(arr)/sizeof(int);

    int sum=0;
    for(int i =0;i<size;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;

    return 0;
}