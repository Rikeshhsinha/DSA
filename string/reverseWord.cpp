#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string reverseWord(string &s)
{

    int n = s.length();

    reverse(s.begin(), s.end());

    string ans = "";
    string word = "";

    for (int i = 0; i < n; i++)
    {
        while (i < n && s[i] != ' ')
        {

            word = word + s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0)
        {
            ans = ans + ' ' + word;
        }
        word = "";
    }

    return ans.substr(1);
}

int main()
{

    string s;

    cout << "Enter the string :";
    getline(cin, s);

    string result = reverseWord(s);

    cout << "The Reverse word is :" << result;

    return 0;
}