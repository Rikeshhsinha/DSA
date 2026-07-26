#include <iostream>

using namespace std;

int main()
{

    string s;
    cout<<"Enter the string :";
    cin>>s;


    // hash array

    int hash[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]-'a']++ ;
    }

    int q;
    cout << "Enter the total number of query's :";
    cin >> q;

    while (q--)
    {

        char c;
        cout << "Enter the charecter for query : ";

        cin >> c;
        // fetch
        cout << "The " << c << " appers in array " << hash[c - 'a'] << " times." << endl;
    }

    return 0;
}