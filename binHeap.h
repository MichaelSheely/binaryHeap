
#ifndef BINHEAP_HEADER_INCLUDED
#define BINHEAP_HEADER_INCLUDED

#include <stddef.h>
#include <vector>
using std::size_t;
using std::vector;

template <class T>
class binHeap {
  public:
    binHeap<T>() = default;
    ~binHeap<T>() = default;
    binHeap& operator=(const binHeap& other) = default;
    binHeap(const binHeap& other) = default;

    size_t size() { return data_.size(); }
    void insert(T obj, unsigned weight) {
      data_.push_back(Node
    }
    T findMin();
    T deleteMin();
    //void adjustWeight(Node*);
  private:
    struct Node {
      T value_;
      unsigned weight_;
    };
    vector<Node> data_;


};

#endif


