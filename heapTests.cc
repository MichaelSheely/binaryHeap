#include "binHeap.h"
#include <iostream>
using std::cout; using std::endl;

int main() {
  binHeap<float> floatHeap;
  float x = floatHeap.findMin();
  cout << "Min was " << x << "." << endl;
  return 0;
}
