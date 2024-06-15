#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long a = A;
        long long b = B;
        long long lowest = 1;
        long long highest = a*b;
        while(A>0 && B>0){
            if(A>B){
                A=A%B;
            }
            else{
                B=B%A;
            }
        }
        if(A==0){
            lowest = B;
        }
        else{
            lowest = A;
        }
        highest = (a*b)/lowest;
        return {highest,lowest};
    }
};

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
