#include <iostream>
using namespace std;
//Factorial of N using Recursion
int factorial(int fact, int n)
{

    if (n == 0)
    {
        return fact;
    }
    factorial(fact * n, n - 1);
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int fact = factorial(1, n);

    cout << "The factorial of " << n << " is :" << fact;
    return 0;
}