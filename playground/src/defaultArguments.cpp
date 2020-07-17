#include <iostream>
#include <string>
using namespace std;

double calc_cost(double base_cost, double tax_rate=0.06, double shipping=3.50){
  return base_cost += (base_cost * tax_rate) + shipping;
}

int main(int argc, char const *argv[]) {
  cout << calc_cost(10) << endl;
  return 0;
}
