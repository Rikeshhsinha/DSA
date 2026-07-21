#include <iostream>

using namespace std;

void printUptoN(int i, int n)
{

    if (i > n)
    {
        return;
    }
    cout << i<<" \n";

    printUptoN(i+1, n);
}

int main()
{

    int i, n;
    cout << "Enter the number print upto :";
    cin >> n;

    printUptoN(1, n);

    return 0;
}