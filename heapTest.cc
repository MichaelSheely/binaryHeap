#include "binHeap.h"
#include <iostream>
#include <math.h>

using std::cout; using std::endl;

int main() {
  binHeap<float> floatHeap;
  float x = floatHeap.findMin();
  cout << "Min was " << x << "." << endl;
  return 0;
}

