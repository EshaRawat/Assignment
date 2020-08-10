#include<iostream>
using namespace std;
int main()
{
    int i,j,n,temp,A[30];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"\nEnter the elements\n";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(i=1;i<=n-1;i++)
    {
        temp=A[i];
        j=i-1;
        while((temp<A[j])&&(j>=0))
        {
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=temp;
    }
    cout<<"\nSorted list is as follows\n";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
return 0;
}
