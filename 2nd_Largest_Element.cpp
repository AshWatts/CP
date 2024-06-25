#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
// class Solution{
// public:	
// 	int print2largest(int arr[], int n) {
// 	    sort(arr,arr+n);
// 	    int max=arr[n-1];
// 	    for(int i=n-2;i>=0;i--)
// 	    {
// 	        if(arr[i]<max)
// 	        {
// 	            return arr[i];
// 	        }
// 	    }
// 	    return -1;
// 	}
// };

// Best Approach
class Solution{
public:	
	int print2largest(int arr[], int n){
	    int max = arr[0];
	    int max2 = -1;           //INT_MIN if -ve numbers are there in array
	    for(int i=1;i<n;i++){
	        if(arr[i]>max){
	            max2=max;
	            max=arr[i];
	        }
	        if(arr[i]>max2 && arr[i]!=max){
	            max2=arr[i];
	        }
	    }
	    return max2;
	}
};

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    Solution ob;
    int ans = ob.print2largest(arr, n);
    cout << ans << "\n";
    return 0;
}