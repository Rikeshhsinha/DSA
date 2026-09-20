#include <iostream>
#include <vector>

using namespace std;
// This function removes duplicates from a sorted array and returns the new length of the array.
int removeDuplicates(vector<int> &nums)
{

    int i = 0;

    for (int j = 1; j < nums.size(); j++)
    {

       if(nums[j] != nums[i]){

        nums[i+1] = nums[j];
        i++;
       }
        
    }
    
    return i + 1;
    
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

    int result = removeDuplicates(nums);
   
    cout<<"The uniqe elements are : "<<result<<endl;
    
    for(int i =0 ;i < nums.size();i++){
        cout<<nums[i] <<" ";
    }

    return 0;
}