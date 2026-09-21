#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> &nums, int target)
{

    for (int i = 0; i < nums.size(); i++)
    {

        if (nums[i] == target)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{

    int n;
    cout << "Enter the number of element wants to store in array :";
    cin >> n;
    int target;
    cout << "Enter the target element : ";
    cin >> target;

    vector<int> nums;

    for (int i = 0; i < n; i++)
    {

        int x;
        cout << "Enter the element of index " << i << ":";
        cin >> x;
        nums.push_back(x);
    }

    int result = linearSearch(nums, target);

    if (result < 0)
    {
        cout << "Target element is not in Array";
    }
    else
    {
        cout << "The index of target value is : " << result;
    }

    return 0;
}