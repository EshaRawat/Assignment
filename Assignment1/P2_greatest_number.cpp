#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter any three numbers:  "<<endl;
    cin>>n1>>n2>>n3;
    if(n1>n2&&n1>n3)
    {
        cout<<"n1 is the greatest:  "<<n1;
    }
    else if(n2>n1&&n2>n3)
    {
        cout<<"n2 is the greatest:  "<<n2;
    }
    else if(n3>n1&&n3>n2)
    {
        cout<<"n3 is the greatest:  "<<n3;
    }
return 0;
}
