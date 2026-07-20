#include <iostream>

using namespace std;

void printNameNTimes(int n)
{

    if (n < 1)
    {
        return;
    }
    cout << "Rikesh\n";

    printNameNTimes(n - 1);
}

int main()
{

    int n;
    cout << "Enter the number of times you want to print your name :";
    cin >> n;

    printNameNTimes(n);

    return 0;
}