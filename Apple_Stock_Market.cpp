#include <bits/stdc++.h>

int main() 
{
    int a;
    cout<<"Enter Number of Days : "
    cin>>a;
    int arr[a];
    cout<<"Enter Stock Prices : ";
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

    int min=arr[0];
    for(int i=0;i<a;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }

    

    return 0;
}