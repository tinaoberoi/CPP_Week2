#include <functional>
#include <iostream>
// The following library needs to be included to use std::accumulate()
#include <numeric>
#include <string>
#include <vector>

using namespace std;

double op_square(double x) { return x * x; }

int main() {
  std::vector<double> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  double sum = 0;
  sum = accumulate(next(vec.begin()), vec.end(), sum, op_square);

  cout << sum <<"\n";
} 