#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3];
    int b[3];
    int x = 0;
    int y = 0;
    
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<3;i++)
    {
        cin>>b[i];
    }
    
    for(int i=0;i<3;i++)
    {
        if(a[i] > b[i])
        {
            x+=1;
        }
        
        else if(a[i] < b[i])
        {
            y+=1;
        }
    }
    cout<<x<<" "<<y;
}
