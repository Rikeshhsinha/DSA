#include <iostream>
#include <vector>

using namespace std;

int main()
{

   string str;

//    cout<<"Enter string :";
//    cin>>str;


//    str="my name is rikesh";
//    cout<<str;

    cout<< "enter the string :";
    cin>>str;
   
    getline(cin,str);
    cout<<"output : "<< str;

    return 0;
}