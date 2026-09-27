#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool validPalindrome(string &s)
{

    int st = 0;
    int end = s.length() - 1;

    while (st < end)
    {
        if (!isalnum(s[st]))
        {
            st++;
            continue;
        }
        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }

        if (tolower(s[st]) != tolower(s[end]))
        {
            return false;
        }

        st++;
        end--;
    }
    return true;
}

int main()
{

    string s;

    cout << "Enter the string :";
    cin >> s;

    validPalindrome(s);

    if (validPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}