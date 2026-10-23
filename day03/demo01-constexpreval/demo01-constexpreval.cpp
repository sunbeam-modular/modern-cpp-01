#include <iostream>
using namespace std;

// will evaluate in compile time if arg is compile-time constant
constexpr int square(int x) {
    return x * x;
}

// will be called at runtime
int cube(int x) {
    return x * x * x;
}

// C++20 - function must be evaluated at compile-time 
consteval int add(int a, int b) {
    return a + b;
}

int main() {
    // compiler should evaluate expr and assign num1 at compile time.
    constexpr int num1 = square(5); // compile time eval - replace 25
    cout << "num1 = " << num1 << endl;

    // compiler should evaluate expr and assign num2 at compile time.
    //constexpr int num2 = cube(4); // compiler error: compiler cannot call cube() at compiler

    int n = 6;
    int num3 = square(n); // non-const arg - fn can only be executed at runtime
    cout << "num3 = " << num3 << endl;

    int num4 = square(4); // const arg to constexpr fn - called in non-constexpr context
        // compiler may evaluate square() at compile time or call it at runtime.
    cout << "num4 = " << num4 << endl;

    // static_assert() is C++11 keyword that checks conditions at compile time.
    //  if condition fails, raise error.

    // compiler error on archs where sizeof(int) is not 4 bytes.
    static_assert(sizeof(int) == 4, "size of int must be 4 bytes");
    //static_assert(num1 == 26, "num1 must be 26"); // compiler error
    
    //static_assert(num4 == 16); // error: condition in static_assert must be evaluated at compile time.
    
    constexpr int num5 = add(22, 7); // compiler evaluate add() to 29
    cout << "num5 = " << num5 << endl;

    int num6 = add(12, 6); // compiler evaluate add() to 18
    cout << "num6 = " << num6 << endl;
    //num6++; // can be modified later

    int n1 = 10, n2 = 3;
    //int num7 = add(n1, n2); // compiler error: add() cannot be evaluated at compile time
    return 0;
}
