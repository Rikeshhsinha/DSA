#include <iostream>

using namespace std;
// Reverse an array using Recursion

void reverseAnArray(int arr)

int main()
{

    int n;

    cout << "Enter the number want to store in array :";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {

        cout << "Enter the " << i << " index value :";
        cin >> arr[i];
    }

    for(int i =0;i<n;i++){

        cout<<arr[i]<<endl;
    }
   

    return 0;
}