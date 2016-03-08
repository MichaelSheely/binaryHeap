
#ifndef BINHEAP_HEADER_INCLUDED
#define BINHEAP_HEADER_INCLUDED

#include <stddef.h>

template <class T>
class binHeap {
  public:
    binHeap<T>();
    ~binHeap<T>();
    binHeap& operator=(const binHeap& other);
    binHeap(const binHeap& other);
 
    size_t size() { return size_; }
    void insert(T obj, unsigned weight);
    T findMin();
    T deleteMin();
  private:
    struct Node {
      Node(T obj, int weight) : data_(obj), weight_(weight) { };
      T data_;
      int weight_;
      Node* left_;
      Node* right_;
    };
    static void recursiveDelete(Node*);
    size_t size_;
    Node* root_;
    T* data;
};

#include "binHeap-private.h"

#endif


