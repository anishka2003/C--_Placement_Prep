#include<iostream>
using namespace std;
int main()
{   
    int r1,c1;
    cin>>r1>>c1;

    int first[r1][c1];
    for(int row=0;row<r1;row++){
        for(int col=0;col<c1;col++){
            cin>>first[row][col];
        }
    }

    int r2,c2;
    cin>>r2>>c2;

    int second[r2][c2];
    for(int row=0;row<r2;row++){
        for(int col=0;col<c2;col++){
            cin>>first[row][col];
        }
    }

    if(c1!=r2){
        cout<<"Invalid";
    
    }

    int product[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            product[i][j]=0;
            for(int k=0;k<c1;k++){
                product[i][j]+=first[i][k]*second[k][j];
            }
        }
    }

  
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
                cout<<product[i][j]<<" ";
            }
        cout<<endl;
    }


    
    return 0;
}