#include <iostream>
#include <vector>

using namespace std;

int isArraySorted(vector<int> &nums)
{

    for (int i = 1; i < nums.size(); i++)
    {

        if (nums[i] < nums[i - 1])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{

    int n;
    cout << "Enter the number of element wants to store in array :";
    cin >> n;

    vector<int> nums;

    for (int i = 0; i < n; i++)
    {

        int x;
        cout << "Enter the element of index " << i << ":";
        cin >> x;
        nums.push_back(x);
    }

    int result = isArraySorted(nums);

    if (result == 0)
    {
        cout << "Not Sorted Array";
    }
    else
    {
        cout << "Sorted Array";
    }

    return 0;
}