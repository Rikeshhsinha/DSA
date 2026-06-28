#include <iostream>
using namespace std;
// print numbers from n to 1 using recursion

void printNTo1(int n)
{

    if (n < 1)
        return;
    cout << n << endl;

    printNTo1(n - 1);
}

int main()
{

    int n;
    cout << "Enter the number you want to print from n to 1: ";
    cin >> n;

    printNTo1(n);

    return 0;
}