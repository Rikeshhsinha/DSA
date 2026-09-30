#include <iostream>

using namespace std;

// This function function find the num is prime or not.

string isPrimeOrNot(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return "false";
        }
    }

    return "True";
}

int main()
{

    int n;
    cout << "Enter the number to find the Number is prime or not :";
    cin >> n;

    string result = isPrimeOrNot(n);

    cout << "The number is prime  : " << result << endl;

    return 0;
}