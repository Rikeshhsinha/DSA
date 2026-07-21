#include <iostream>

using namespace std;

void printUptoN(int sum, int n)
{

    if (n<1)
    {
        cout<<sum;
        return ;
    }
   

    printUptoN(sum + n,n-1);
}

int main()
{

    int i, n;
    cout << "Enter the number sum upto :";
    cin >> n;

    printUptoN(0, n);

    return 0;
}