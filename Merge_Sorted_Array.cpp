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
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(nums1[i]<nums2[j])
                {
                    cout<<nums1[i]<<" ";
                    i++;
                }
                else
                {
                    cout<<nums2[j]<<" ";
                    j++;
                }
            }
        }
    } 