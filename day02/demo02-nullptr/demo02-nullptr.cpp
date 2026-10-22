#include <iostream>
using namespace std;

void show(int) {
    cout << "show(int) called." << endl;
}

void show(const void*) {
    cout << "show(void*) called." << endl;
}

int main() {
    show(0);        // show(int) called
    show(NULL);     // show(int) called
    show(nullptr);  // show(void*) called

    int* ptr1 = nullptr;    // ptr1 is int* pointing to null address.
    cout << "ptr1 type: " << typeid(ptr1).name() << endl;
    auto ptr2 = nullptr;    // ptr2 is nullptr_t pointing to null address.
    cout << "ptr2 type: " << typeid(ptr2).name() << endl;

    //char* p = 0; // allowed in C++ (traditional C++) -- not recommended in modern C++
    char* p = nullptr;
    return 0;
}
