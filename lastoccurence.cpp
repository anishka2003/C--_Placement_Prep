#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    vector<int> v;
    for(int i=0;i<6;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int x;
    cin>>x;

    int occurence=-1;

    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence=i;
        }
    }

    cout<<occurence<<endl;

    return 0;
}