#include <iostream>

using namespace std;

//print the name "Rikesh" n times using recursion
int count = 0;

void printNameFiveTimes(int i, int n)
{

    if (i > n)
        return;
    cout << "Rikesh" << endl;
    count++;

    printNameFiveTimes(i + 1, n);
}

int main()
{

    int n;

    cout << "Enter the number of times you want to print the name: ";
    cin >> n;
    printNameFiveTimes(1, n);
    return 0;
}
