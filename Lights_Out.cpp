#include <iostream>

using namespace std;

int main() 
{
    int grid[3][3];

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j) 
        {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            if (grid[i][j] % 2 == 1) 
            {
                cout << (1 - grid[i][j] % 2);
            } 
            else 
            {
                cout << grid[i][j] % 2;
            }
        }
        cout << endl;
    }

    return 0;
}