#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int a, int b) {
        int x = a;
        while(a>=b){
            x+=a/b;
            a=a/b + a%b;
        }
        return x;
    }
};

int main(){
    Solution obj;
    cout<<obj.numWaterBottles(1120,22)<<endl;
    return 0;
}