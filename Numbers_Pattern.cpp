#include <iostream>
using namespace std;

void nBinaryTriangle(int n) {
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<=i;j++)
            {
                if (j % 2 == 0) 
                {
                    cout << 1<<" ";
                } else {
                    cout << 0<<" ";
                }
            }
        }
        else
        {
            for(int j=0;j<=i;j++)
            {
                if (j % 2 == 0) 
                {
                    cout << 0 <<" ";
                } else {
                    cout << 1 <<" ";
                }
            }
        }
        cout<<endl;
    }
}

int main() {
    int n = 5;
    nBinaryTriangle(n);
    return 0;
}