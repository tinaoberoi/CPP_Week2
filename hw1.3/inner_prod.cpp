#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i =1; i<=6; i++){
        v.push_back((i));
    }
    cout << "Using inner product\n";
    cout << "Sum of Squares of all elemets in array  : " << inner_product(v.begin(), v.end(), v.begin(), 0) << endl;
}