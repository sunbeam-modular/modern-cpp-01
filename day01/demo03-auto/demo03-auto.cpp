#include <iostream>
using namespace std;

/*
C language auto keyword -- storage class
    - auto means local variable (created on stack - during fn execution - block scope).
    - by default every local var is auto.
*/

/*
Modern C++ language auto keyword -- automatic type inference
    - Compiler can auto-detect the type of variable based value intialized to it at declaration
    - auto variables must be initialized at point of declaration
*/

int add(int a, int b) {
    return a + b;
}

int main() {
    auto var1 = 11;     // var1 as int
    auto var2 = 2.2;    // var2 as double
    auto var3 = 3.3f;   // var3 as float
    cout << "var1 type: " << typeid(var1).name() << endl;
    cout << "var2 type: " << typeid(var2).name() << endl;
    cout << "var3 type: " << typeid(var3).name() << endl;

    auto var4{ 10 };    // var3 as int -- uniform init
    auto var5 = { 20 }; // var4 as initializer_list
    cout << "var4 type: " << typeid(var4).name() << endl;
    cout << "var5 type: " << typeid(var5).name() << endl;

    auto var6 = add(1, 2); // var6 as int
    cout << "var6 type: " << typeid(var6).name() << endl;

    for (auto i = 0; i < 3; i++)
        cout << "in for loop: " << i << endl;

    auto v1{ 1 };   // 
    auto v2 = 1;    // more readable (less confusion)
    return 0;
}








