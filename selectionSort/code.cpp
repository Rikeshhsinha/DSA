#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &num, int n)
{

    for (int i = 0; i < n; i++)
    {

        int min = i;

        for (int j = i+1; j < n; j++)
        {

            if (num[j] < num[min])
            {
                min = j;
            }

            
        }
       swap(num[min], num[i]);
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

    selectionSort(num, n);

    cout << "After sorting the array is :";

    for (int i = 0; i < n; i++)
    {

        cout << num[i]<<" ";
    }

    return 0;
}