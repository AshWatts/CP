#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int m,n;
        cout<<"Enter Number of Elements in First Array : ";
        cin>>m;
        cout<<"Enter Number of Elements in Second Array : ";
        cin>>n;
        int nums1[m],nums2[n];
        cout<<"Enter Elements of First Array : ";
        for(int i=0;i<m;i++)
        {
            cin>>nums1[i];
        }
        cout<<"Enter Elements of Second Array : ";
        for(int i=0;i<n;i++)
        {
            cin>>nums2[i];
        }
        sort(nums1, nums1 + m);
        sort(nums2, nums2 + n);

        int r[m+n];
        for(int i=0;i<m;i++)
        {
            r[i]=nums1[i];
        }
        for(int i=0;i<n;i++)
        {
            r[m+i]=nums2[i];
        }

        sort(r,r+m+n);

        for(int i=0;i<m+n;i++)
        {
            cout<<r[i]<<" ";
        }
    } 