// Returns ratio of Positive, Negative and Zero elements in the given string.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    float x=0;
    float y=0;
    float z=0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i] > 0)
        {
            x=x+1;
        }
        else if(a[i] < 0)
        {
            y=y+1;
        }
        else 
        {
            z=z+1;
        }
    }
    cout<<x/n<<endl;
    cout<<y/n<<endl;
    cout<<z/n;
}