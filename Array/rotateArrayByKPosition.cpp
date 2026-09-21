#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// left rotate the array by k position

void rotatedArrayByKPosition(vector<int> &nums,int n,int d)
{

    d = d % n;

    reverse(nums.begin(), nums.begin() + d);
    reverse(nums.begin() + d, nums.end());
    reverse(nums.begin(), nums.end());

  
}

int main()
{

    int n;
    cout << "Enter the number of element wants to store in array :";
    cin >> n;
    int d;
    cout << "Enter the position by which you want to rotate the array: ";
    cin>>d;

    vector<int> nums;

    for (int i = 0; i < n; i++)
    {

        int x;
        cout << "Enter the element of index " << i << ":";
        cin >> x;
        nums.push_back(x);
    }

    rotatedArrayByKPosition(nums,n,d);
     
    for(int i =0 ; i<nums.size(); i++){
        cout<<nums[i];
    }

    return 0;
}