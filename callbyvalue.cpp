#include<iostream>
using namespace std;
int callbyvalue(int &x,int &y)
{
    int z=x;
    x=y;
    y=z;
}
int main()
{
    int a=5,b=8;
    cout<<"before swapping"<<a<<","<<b<<"\n";
    callbyvalue( a, b);
    cout<<"after swapping"<<a<<" " <<b;
    return 0;

}
