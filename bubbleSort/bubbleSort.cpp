#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &num, int n)
{

    for (int i = n - 1; i > 0; i--)
    {

        int didSwap = 0;

        for (int j = 0; j < i; j++)
        {
            if (num[j] > num[j + 1])
            {
                swap(num[j], num[j + 1]);

                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }
}

int main()
{

    int n;
    vector<int> num;

    cout << "Enter how many element want to store :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cout << "Enter the value of index " << i << ":";
        int x;
        cin >> x;
        num.push_back(x);
    }

    bubbleSort(num, n);

    cout << "After sorting the array is :";

    for (int i = 0; i < n; i++)
    {

        cout << num[i] << " ";
    }

    return 0;
}