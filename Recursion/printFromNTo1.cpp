#include <iostream>

using namespace std;

void printUptoN(int i, int n)
{

    if (n<1)
    {
        return;
    }
    cout << n <<" \n";

    printUptoN(i, n-1);
}

int main()
{

    int i, n;
    cout << "Enter the number print upto :";
    cin >> n;

    printUptoN(0, n);

    return 0;
}