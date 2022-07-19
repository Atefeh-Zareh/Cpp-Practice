#ifndef __MY_CLASS__
#define __MY_CLASS__

class MyClass {
    int x;
 public:
    MyClass(int d) : x(d) {}
    MyClass() : x(0) {}

    MyClass(const MyClass &other) :  x(other.x) {}

    inline bool operator==(const MyClass &other) const { return x == other.x; }
    inline MyClass &operator=(const MyClass &other) { x = other.x; return *this; }

    inline int get() const { return x; }
};

#endif
