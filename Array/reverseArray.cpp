#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &nums)
{

    int n = nums.size();
    int st = 0;
    int end = n - 1;

    while (st <= end)
    {

        swap(nums[st], nums[end]);
        st++;
        end--;
    }
}

int main()
{

    int n;
    vector<int> nums;

    cout << "Enter how many element want to store :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cout << "Enter the value of index " << i << ":";
        int x;
        cin >> x;
        nums.push_back(x);
    }

    reverseArray(nums);

    for (int i = 0; i < n; i++)
    {

        cout << nums[i] << " ";
    }

    return 0;
}