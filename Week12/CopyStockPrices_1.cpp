#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include "CopyStockPrices_1.hpp"
using std::begin; using std::end;


int main() {
	int const source_size = 4;
	double source[source_size] = {3, 1, 2, 0};
	int const destination_size = 10;
	double destination[destination_size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double expected[destination_size] =  {3, 1, 2, 0, 5, 6, 7, 8, 9, 10};
	CopyStockPrices(source, destination);
  for (int i = 0; i < destination_size; ++ i) {
    CHECK(expected[i] == destination[i]);
  }
}