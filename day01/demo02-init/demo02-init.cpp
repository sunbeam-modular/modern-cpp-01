#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*
    int num1 = 10;  // C-style variable initialization
    int num2(20);   // recommended in traditional C++
    int num3 = 3.14; // num3 will be 3 (compiler warning)
    int num4(3.14); // num4 will be 3 (compiler warning)
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;

    int var1{ 11 };
    cout << "var1 = " << var1 << endl;
    //int var2{ 3.14 }; // compiler error: cannot convert from double to int
    int var2{ static_cast<int>(3.14) }; // needs explicit casting for narrowing data type
    cout << "var2 = " << var2 << endl;
    
    vector<int> vec1(3);    // calls single arg ctor of vector<int> - vector of 3 elems
    vector<int> vec2{ 3 };  // creates a new vector with single elem i.e. 3
    cout << "vec1 size: " << vec1.size() << endl;
    cout << "vec2 size: " << vec2.size() << endl << endl;
    for (int i = 0; i < vec1.size(); i++)
        cout << "vec1 elem: " << vec1[i] << endl;
    cout << endl;
    for (int i = 0; i < vec2.size(); i++)
        cout << "vec2 elem: " << vec2[i] << endl;
    cout << endl;

    int arr1[] = { 1, 2, 3, 4 };    // array of 4 ints - 1, 2, 3, 4
    int arr2[3] = { 10, 20, 30 };   // array of 3 ints - 10, 20, 30
    int arr3[5] = { 11, 22 };       // array of 5 ints - 11, 22, 0, 0, 0

    // uniform initialization
    int arr4[] { 1, 2, 3, 4 };    // array of 4 ints - 1, 2, 3, 4
    int arr5[3] { 10, 20, 30 };   // array of 3 ints - 10, 20, 30
    int arr6[5] { 11, 22 };       // array of 5 ints - 11, 22, 0, 0, 0
    
    for (int i = 0; i < 4; i++)
        cout << "arr4 elem: " << arr4[i] << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)
        cout << "arr5 elem: " << arr5[i] << endl;
    cout << endl;

    for (int i = 0; i < 5; i++)
        cout << "arr6 elem: " << arr6[i] << endl;
    cout << endl;

    int* ptr1 = new int[3]; // allocate array of 3 ints - garbage values
    for (int i = 0; i < 3; i++)
        cout << "ptr1 elem: " << ptr1[i] << endl;
    cout << endl;
    delete[] ptr1;

    int* ptr2 = new int(5); // allocate one int i.e. 5
    cout << "ptr2 value: " << *ptr2 << endl;
    cout << endl;
    delete ptr2;

    int* ptr3 = new int[4] {11, 22, 33, 44}; // allocate array of 4 ints - given values
    for (int i = 0; i < 4; i++)
        cout << "ptr3 elem: " << ptr3[i] << endl;
    cout << endl;
    delete[] ptr3;

    int* ptr4 = new int[3] { }; // allocate array of 4 ints - zero value
    for (int i = 0; i < 3; i++)
        cout << "ptr4 elem: " << ptr4[i] << endl;
    cout << endl;
    delete[] ptr4;

    char greet1[]{ "Hello" }; // char array of 6 chars (including \0 char)
    string greet2{ "hello" }; // single greet2 object of string type
    cout << "greet1 = " << greet1 << endl;
    cout << "greet2 = " << greet2 << endl;
    cout << "string object size: " << sizeof(greet2) << endl; // 40 bytes on visual studio
    */

    const int passingScore{ 60 }; // passingScore is const int with value 60
    return 0;
}
