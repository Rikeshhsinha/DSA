#include <iostream>

using namespace std;

int count = 0;

// Function to print numbers from 0 to n using recursion

void print(int n)
{

    if (count == n)
    {
        return;
    }
    cout << count << endl;

    count++;

    print(n);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    print(n);

    return 0;
}