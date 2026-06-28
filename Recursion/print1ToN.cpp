#include <iostream>
using namespace std;
// print numbers from 1 to n using recursion
void print1ToN(int i, int n)
{

    if (i > n)
        return;
    cout << i << endl;

    print1ToN(i + 1, n);
}
int main()
{

    int n;

    cout << "Enter the number you want to print from 1 to n: ";
    cin >> n;

    print1ToN(1, n);

    return 0;
}