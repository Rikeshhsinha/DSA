#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverseString(string &s)
{

    reverse(s.begin(), s.end());
}

int main()
{

    string s;

    cout << "Enter the string :";
    cin >> s;

    reverseString(s);

    cout << "The Reverse string is :" << s;

    return 0;
}