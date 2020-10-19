#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

void print(vector<int> v1){  //function to print the vector
    for (int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    
}

int main(){
    vector<int> v1(4); //syntax vector<datatype> nameOfVariable(size);
    v1[0]=8;
    v1[1]=4;
    v1[2]=2;
    v1[3]=6;
    cout<<"before sort\n";
    print(v1);
    cout<<"\nafter sorting, Ascending\n";
    sort(v1.begin(), v1.end());  //sort() is included in algorithm header file
    print(v1);
    cout<<"\nafter sorting, Descending\n";
    sort(v1.begin(), v1.end(),greater<int>());
    print(v1);
    return 0;
}
