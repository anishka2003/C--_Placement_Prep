#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4,5,6};

    int sum=0;

    for(int i=0;i<6;i++){
        if(1%2==0){
            sum=sum+array[i];
        }

        else{
            sum=sum-array[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}