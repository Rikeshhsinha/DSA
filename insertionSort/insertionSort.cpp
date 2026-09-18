#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &num, int n)
{

    for (int i = 0; i < n; i++)
    {
        int j = i;

        while (j > 0 && num[j - 1] > num[j])
        {

            swap(num[j - 1], num[j]);

            j--;
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

    insertionSort(num, n);

    cout << "After sorting the array is :";

    for (int i = 0; i < n; i++)
    {

        cout << num[i] << " ";
    }

    return 0;
}