#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char string1[30];
    int i,l;
    int c=0;
    cout<<"Enter a string: "<<endl;
    cin>>string1;
    l=strlen(string1);
    for(i=0;i<l;i++)
    {
        if(string1[i]!=string1[l-i-1])
        {
            c=1;
            break;
        }
    }

    if (c==1)
    {
        cout<<string1<<" is not a palindrome"<<endl;
    }
    else
    {
        cout<<string1<<" is a palindrome"<<endl;
    }
    return 0;
}
