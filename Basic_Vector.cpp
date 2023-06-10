#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    vector<int> v;

    //for loop
    for(int i =0;i<5;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);

        //cin>>array[i]
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    //for each loop 
    for(int ele:v){
        cout<<ele<<" ";
    }
    return 0;


}