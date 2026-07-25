#include<iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    vector<int> num;

    cout<<"Enter how many element want to store :";
    cin>>n;

    for(int i = 0 ; i<n;i++ ){

        cout<<"Enter the value of index "<<i<<":";
        int x;
        cin>>x;
        num.push_back(x); 

    }

    // hash array

    int hash[10]={0};
    for(int i = 0;i<n;i++){
        hash[num[i]] += 1;
    }

    int q;
    cout<<"Enter the total number of query's :";
    cin>>q;

    while(q--){

        int number;
        cout<<"Enter the number for query : ";

        cin>>number; 
        //fetch
        cout<<"The "<< number << " appers in array " <<hash[number]<< " times." << endl;

    }
 


    return 0;
}