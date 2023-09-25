#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int s, t;
    cin >> s >> t; //inclusive range
    int a, b;
    cin >> a >> b; //location of apples and oranges
    int m, n;
    cin >> m >> n; //number of apples and oranges
    int arr[m];
    int brr[n];
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < m; i++) {
        cin >> arr[i];
        arr[i] += a;
        if (arr[i] >= s && arr[i] <= t) {
            count1++;
        }
    }
    for (int i = 0; i < n; i++) {
        cin >> brr[i];
        brr[i] += b;
        if (brr[i] >= s && brr[i] <= t) {
            count2++;
        }
    }
    cout << count1 << endl << count2;
    return 0;
}