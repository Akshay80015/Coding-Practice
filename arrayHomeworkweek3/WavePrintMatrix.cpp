#include <iostream>
#include <vector>

using namespace std;

void wavePrint(int arr[][3], int n, int m)
{

    for (int i = 0; i < m; i++)
    {

        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
                cout << arr[j][i] << " ";
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
                cout << arr[j][i] << " ";
        }
    }
}

int main()
{

    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    wavePrint(arr, 3, 3);

    vector<vector<int>> arr{{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};

    return 0;
}