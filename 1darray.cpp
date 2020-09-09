#include<iostream>
using namespace std;
int main()
{
    int i,n;
    //initialization of array
    int a[100];
    cout<<"enter n:"<<"\t";
    cin>>n;
    //size of array
    cout<<sizeof(a)<<"\n";
    cout<<sizeof(float);

    for(int i=0;i<n;i++){
            cin>>a[i];}
            for(i=0;i<n;i++){
                cout<<a[i]<<",";
            }



    return 0;
}
