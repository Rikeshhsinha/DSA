#include<iostream>
#include <vector>
#include<map>

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

    // Map 

map<int ,int >mpp;

for(int i=0;i<n;i++){
    mpp[num[i]]++;
}

    int q;
    cout<<"Enter the total number of query's :";
    cin>>q;

    while(q--){

        int number;
        cout<<"Enter the number for query : ";

        cin>>number; 
        //fetch
        cout<<"The "<< number << " appers in array " <<mpp[number]<< " times." << endl;

    }
 


    return 0;
}