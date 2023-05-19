#include <functional>
#include <iostream>

using namespace std;

// accepting two parameters and return the pointer of result
int *foo(int a, int b)
{
    return new int[]{a + b};
}

int main()
{
    // traditional way to define a function pointer
    int *(*ptr1)(int, int){foo};

    // modern way to define a function pointer
    using type_foo = int *(*)(int, int);
    type_foo ptr2{foo};

    // using std::function to define a function pointer
    function<int *(int, int)> ptr3{foo};

    // type inference
    auto ptr4{&foo};

    cout << "foo1: " << *ptr1(2, 3) << endl;
    cout << "foo2: " << *ptr2(2, 3) << endl;
    cout << "foo3: " << *ptr3(2, 3) << endl;
    cout << "foo4: " << *ptr4(2, 3) << endl;
}
