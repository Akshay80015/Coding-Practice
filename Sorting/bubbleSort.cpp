#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int stepcount = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                stepcount++;
            }
        }
        if (stepcount == 0)
            break;
    }

        //printing 
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }cout << endl;


    return 0;
}