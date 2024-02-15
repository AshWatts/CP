#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        int max = 0;
        int min=0;

        if(x%2==0)
        {
            max=x/2;
        }
        else
        {
            max=x/2+1;
        }

        cout<<max;
    }

    return 0;
}
