#include<iostream>
using namespace std;
int main(){
int a[100][100];
int i,j;
cin>>i>>j;
int val=1;
for(int row=0;row<=i;row++)
{
    for(int col=0;col<=j;col++)
    {
        a[i][j]=val;
        val=val+1;
        cout<<a[i][j]<<" " ;

    }
    cout<<"\n";
}
return 0;


}

