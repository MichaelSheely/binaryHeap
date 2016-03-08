
template <class T>
class binHeap {
  public:
    binHeap<T>() = default;
    ~binHeap<T>() = default;
    binHeap& operator=(const binHeap& other) = default;
    binHeap(const binHeap& other) = default;
  
    void insert(T obj, unsigned weight);
    T findMin();
    T deleteMin();
  private:
    T* data;
};

template <class T>
T binHeap<T>::findMin() {
  return *data;
}

template <class T>
T binHeap<T>::deleteMin() {
  return *data;
}

template <class T>
void binHeap<T>::insert(T obj, unsigned weight) {
  return;
}

