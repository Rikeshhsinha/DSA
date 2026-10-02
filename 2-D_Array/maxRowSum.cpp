#include <iostream>
#include <vector>

using namespace std;

int maxRowSum(vector<vector<int>> &matrix, int rows, int colums)
{

    int maxSum = 0; // we assume that all integer value is positive.

    for (int i = 0; i < rows; i++)
    {

        int sum = 0;

        for (int j = 0; j < colums; j++)
        {

            sum = sum + matrix[i][j];
        }
        maxSum = max(sum, maxSum);
    }

    return maxSum;
}

int main()
{

    int rows, colums;
    cout << "Enter the number of rows :";
    cin >> rows;

    cout << "Enter the number of colums :";
    cin >> colums;

    vector<vector<int>> matrix(rows, vector<int>(colums));

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < colums; j++)
        {

            cout << "Enter the value of index " << "[" << i << "] " << "[" << j << "] ";
            cin >> matrix[i][j];
        }
    }

    cout << " The max Sum of row is :" << maxRowSum(matrix, rows, colums);

    return 0;
}