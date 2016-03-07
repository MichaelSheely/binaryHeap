## binaryHeap

A simple general purpose min-queue which is implemented in C++ using a binary heap.  The queue supports insertion, min-lookup, min-deletion, and weight adjusting.  The data structure is templated such that it may hold any objects as long as they are tagged with an integral priority.

## Code Example

An example use case is shown below:
```
#include "binaryHeap.h"
#include <math.h>       /* cos gives priority values */

inHeap<int> heap;
for (unsigned i = 0; i < 10; ++i) {
  heap.enqueue(i, cos(i));
}
int currentMin = heap.findMin();
heap.deleteMin();
```

## Installation

Coming soon!

## API Reference

Coming soon!

## Tests

Coming soon!

## Contributors

Lisa Yin (HMC '17)

Michael Sheely (HMC '17)

## License

Unlicenced.  Feel free to use, modify, and share however you see fit.
