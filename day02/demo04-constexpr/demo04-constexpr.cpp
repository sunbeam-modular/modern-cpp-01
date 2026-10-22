#include <iostream>
using namespace std;

/*
int main() {
    int x = sizeof(double); // solved by the compiler at compile time
    cout << "sizeof double = " << x << endl;
    const int y = 4;
    cout << "y = " << y << endl; // compiler replace const value (at few occasions)
    
    int input;
    cout << "Enter a number: ";
    cin >> input;
    const int z = input; // compiler cannot replace - evaluate at runtime
    //z++;    // error: compiler will not allow to modify this later
    cout << "z = " << z << endl;

    constexpr int a = 5; // constexpr int is always evaluated at compile time
    cout << "constexpr a = " << a << endl;
    constexpr int b = 4 + 4; // constexpr int is always evaluated at compile time
    cout << "constexpr b = " << b << endl;
    // constexpr int c = input; // compiler error: compiler cannot evaluate expression at compile time

    return 0;
}
*/

// constexpr fns are evaluated at compile-time 
//  if const (compile-time) arg is given to it.
// constexpr fns are invoked at run-time 
//  if arg is not compiletime const.

// In C++11, allowed to have single return statement & no local var modification in constexpr fns.
constexpr int square(int x) {
    return x * x;
}

constexpr int fact(int n) {
    return n == 0 ? 1 : n * fact(n - 1);
}

// In C++14, allowed to have loops/if-else in constexpr fn & also local vars can be modified
constexpr int pwr(int b, int i) {
    int r{ 1 };
    while (i--)
        r *= b;
    return r;
}

int main() {
    const int var1 = square(5);
    cout << "const var1 = " << var1 << endl;
    constexpr int var2 = square(5);
    cout << "constexpr var2 = " << var2 << endl;
    int var3;
    cout << "enter a number: ";
    cin >> var3;
    var3 = square(var3);
    cout << "var3 = " << var3 << endl;
    constexpr int var4 = fact(4);
    cout << "constexpr var4 = " << var4 << endl;
    constexpr int var5 = pwr(2, 5);
    cout << "constexpr var5 = " << var5 << endl;
    return 0;
}