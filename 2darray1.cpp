#include<iostream>
using namespace std;
int main()
{

    int a[100][100]={0};
    int i,j;
    cin>>i>>j;
    int val=1;
    for(int row=0;row<=i-1;row++){
        for(int col=0;col<=j-1;col++){
                a[i][j]=val;
                val=val+1;

                cout<<a[i][j]<<" ";



        }
        cout<<"\n";
    }
    return 0;

}
