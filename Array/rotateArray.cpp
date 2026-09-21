#include <iostream>
#include <vector>

using namespace std;

// left rotate the array by one

void leftRotatedArray(vector<int> &nums)
{


     int temp = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
          
        nums[i-1] = nums[i];

        
    }
 
    nums[nums.size() - 1] = temp;
   
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

    leftRotatedArray(nums);
     
    for(int i =0 ; i<nums.size(); i++){
        cout<<nums[i];
    }

    return 0;
}