#include<vector>
#include<iostream>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;

void printVec(vector<double> v) {
    for (int j = 0; j <(int)v.size(); j++)
        cout << v[j] << ", ";
    cout<<"\n";
}

double op_square(double x) { return x * x; }

int main()
{
    vector<double> original_vec;
    vector<double> new_vec;
    for(int i =1; i<=6; i++){
        original_vec.push_back((i));
    }
    original_vec.push_back(7);
    original_vec.push_back(8);
    cout<<"Printing original vector\n";
    printVec(original_vec);
    
    sort(original_vec.begin(), original_vec.end());
    int n = original_vec.size();
    double median;
    if (n%2 == 0){
        median = (original_vec[n/2] + original_vec[n/2 - 1])/2;
    } else {
        median = original_vec[n/2];
    }
    
    cout<<"Median: "<<median<<"\n";
    return 0;
}
