#include<iostream>
using namespace std;
int main()
{
    int n,key,i;
    int a[1000];
    cout<<"Enter the number of elements in Array :  ";
    cin>>n;
    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }
    cout<<"Enter the number u want to search :"<<"\t";
    cin>>key;
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==key)
        {
            cout<<key<<" found at  "<<i<<" index no."<<"\n";
        }
    if(i==n){
        cout<<key<<"not present"<<"\n";   }


    }






    return 0;

}
