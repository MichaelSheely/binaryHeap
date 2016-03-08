
#ifndef BINHEAP_PRIVATE_HEADER_INCLUDED
#define BINHEAP_PRIVATE_HEADER_INCLUDED

template <class T>
void binHeap<T>::recursiveDelete(Node* nodeptr) {
  if (nodeptr != nullptr) {
    recursiveDelete(nodeptr->left_);
    recursiveDelete(nodeptr->right_);
    delete nodeptr;
  }
}

template <class T>
binHeap<T>::binHeap() : root_(nullptr) {
}

template <class T>
binHeap<T>::~binHeap<T>() {
  recursiveDelete(root_);
  delete root_;
}
    
template <class T>
binHeap<T>& binHeap<T>::operator=(const binHeap& other) {

}

template <class T>
binHeap<T>::binHeap(const binHeap<T>& other) {
  
}

template <class T>
T binHeap<T>::findMin() {
  return root_->data_;
}

template <class T>
T binHeap<T>::deleteMin() {
  --size_;
  return *data;
}

template <class T>
void binHeap<T>::insert(T obj, unsigned weight) {
  root_ = new Node(obj, weight);
  ++size_;
  return;
}

#endif
