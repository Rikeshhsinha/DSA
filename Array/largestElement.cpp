#include <iostream>
#include <vector>

using namespace std;

int largestElement(vector<int> &nums)
{

    int max = nums[0];

    for (int i = 0; i < nums.size(); i++)
    {

        if (max < nums[i])
        {

            max = nums[i];
        }
    }

    return max;
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

    int maxResult = largestElement(nums);

    cout << maxResult;

    return 0;
}