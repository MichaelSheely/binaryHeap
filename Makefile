CXX = clang++
TARGET = heapTest
CFLAGS = -std=c++11 -Wall -Wextra -pedantic

all: $(TARGET)

test: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) *.o

heapTest: heapTest.cc binHeap.h binHeap-private.h
	$(CXX) $(CFLAGS) -o $(TARGET) heapTest.cc

