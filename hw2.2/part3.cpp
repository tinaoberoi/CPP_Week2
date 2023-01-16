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

int main()
{
    vector<double> original_vec {3, 2, 6, 4, 1};
    int n = original_vec.size();
    cout<<"Printing original vector\n";
    printVec(original_vec);
    nth_element(original_vec.begin(), original_vec.begin()+(n/2) ,original_vec.end());
    printVec(original_vec);
    double median;
    if (n%2 == 0){
        median = (original_vec[n/2] + original_vec[n/2 - 1])/2;
    } else {
        median = original_vec[n/2];
    }
    
    cout<<"Median: "<<median<<"\n";
    return 0;
}
