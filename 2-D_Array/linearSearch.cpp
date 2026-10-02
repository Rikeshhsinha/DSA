#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target;

    cout << "Enter the target number to search in the 2-D array: ";
    cin >> target;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Target found at [" << i << "][" << j << "]" << endl;
                return 0;
            }
        }
    }

    cout << "Target not found" << endl;

    return 0;
}