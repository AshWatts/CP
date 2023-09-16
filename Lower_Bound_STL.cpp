// Search for an element, and see its index or possible index.

#include <bits/stdc++.h>
using namespace std;

int main () 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int m;
    cin>>m;
    int k[m];
    for(int i=0;i<m;i++)
    {
        cin>>k[i];
        for(int j=0;j<n;j++)
        {
            std::vector<int> v(a,a+n);           
            std::sort (v.begin(), v.end());             

            std::vector<int>::iterator low;
            low=std::lower_bound (v.begin(), v.end(), k); 
            std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
        }
    }





    return 0;
}