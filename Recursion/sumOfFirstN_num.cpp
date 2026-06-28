#include <iostream>
using namespace std;
// print Sum of first N numbers using recursion

int sumOfFirstN(int i, int sum)
{

    if (i < 1)
        return sum;

    

    sumOfFirstN(i - 1, sum + i);
}

int main()
{

    int n;

    cout << "Enter a number: ";
    cin >> n;

    int sum =sumOfFirstN(n, 0);

    cout<<"The sum of first n number is :"<<sum;
    
    return 0;
}