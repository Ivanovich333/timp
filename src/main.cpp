#include <iostream>

class A {
    public:
    int foo(int a) {
        return a*2;
    }
};

int main () {
    A a;
    std::cout << a.foo(3) << std::endl;
    return 0;
}
