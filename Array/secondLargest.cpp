#include <iostream>
#include <vector>

using namespace std;

int secondLargest(vector<int> &nums)
{

    int largest = nums[0];
    int Slargest = INT16_MIN;

    for (int i = 0; i < nums.size(); i++)
    {

        if (largest < nums[i])
        {
            Slargest = largest;
            largest = nums[i];
        }
        else if (nums[i] < largest && nums[i] > Slargest)
        {
            Slargest = nums[i];
        }
    }

    return Slargest;
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

    int maxResult = secondLargest(nums);

    cout << maxResult;

    return 0;
}