#include <bits/stdc++.h>
using namespace std;

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long a = min(A,B);
        long long b = max(A,B);
        long long lowest;
        long long highest;
        for(int i=a;i>0;i--){
            if(a%i==0 && b%i==0){
                lowest=i;
                break;
            }
        }
        highest = (a*b)/lowest;
        return {highest,lowest};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends

int main(){
    int t;
    cin>>t;
    while(t--){
        long long A,B;
        cin>>A>>B;
        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
