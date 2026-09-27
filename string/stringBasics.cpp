#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    vector<char> str;

    cout << "Enter how many char want to store :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cout << "Enter the value of index " << i << ":";
        char x;
        cin >> x;
        str.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {

        cout << str[i] << " ";
    }

    return 0;
}