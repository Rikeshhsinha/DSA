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
        int temp = num[min];

            num[min] = num[i];
            num[i] = temp;
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

    for (int i = 0; i < n; i++)
    {

        cout << num[i]<<" ";
    }

    return 0;
}