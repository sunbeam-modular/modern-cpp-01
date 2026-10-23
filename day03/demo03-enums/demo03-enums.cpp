#include <iostream>
#include <vector>
using namespace std;

/*
// color constants: RED, ORANGE, PURPLE, PINK
// enum is user-defined data type
//  internally enums are stored as int
enum Color {
    RED, ORANGE, PURPLE, PINK
};

int main() {
    // c1 is var of type enum Color
    Color c1 = PURPLE;
    cout << "c1 : " << c1 << endl;
    int c2 = c1; // enum to int implicitly
    cout << "c2 : " << c2 << endl;
    Color c3 = (Color)3; // int to enum 
    cout << "c3 : " << c3 << endl;
    cout << "sizeof Color : " << sizeof(Color) << endl;
    switch (c3) {
    case RED:
        cout << "RED" << endl;
        break;
    case ORANGE:
        cout << "ORANGE" << endl;
        break;
    case PURPLE:
        cout << "PURPLE" << endl;
        break;
    case PINK:
        cout << "PINK" << endl;
        break;
    }
    return 0;
}
*/

/*
// color constants: RED, ORANGE, PURPLE, PINK
enum Color {
    RED, ORANGE, PURPLE, PINK
};

// traffic lights: RED, GREEN, YELLOW
enum TrafficLight {
    GREEN, YELLOW, RED
};

// ERROR: two enum types cannot have same const label

int main() {
    cout << "RED: " << RED << endl;
    return 0;
}
*/

/*
// C++11 -- enum class a.k.a. scoped enums
// color constants: RED, ORANGE, PURPLE, PINK
enum class Color {
    RED, ORANGE, PURPLE, PINK
};

// traffic lights: RED, GREEN, YELLOW
// optionally enum class can be inherited from integer type e.g. int, short, char
//      default type = int
enum class TrafficLight : char {
    GREEN = 'G', YELLOW = 'Y', RED = 'R'
};

int main() {
    // scoped enum -- cannot be auto-converted to int -- need explicit casting
    cout << "Color RED: " << (int)Color::RED << endl;   // 0
    cout << "Light RED: " << (int)TrafficLight::RED << endl;    // 82 (ascii of 'R')
    cout << "Sizeof enum Color: " << sizeof(Color) << endl; // 4 bytes
    cout << "Sizeof enum TrafficLight: " << sizeof(TrafficLight) << endl; // 1 byte
    return 0;
}
*/

/*
enum class Color {
    RED, ORANGE, PURPLE, PINK
};

enum class TrafficLight : char {
    GREEN = 'G', YELLOW = 'Y', RED = 'R'
};

int main() {
    Color c = Color::RED;
    switch (c) {
    case Color::RED:
        cout << "Color is RED" << endl;
        break;
    case Color::ORANGE:
        cout << "Color is ORANGE" << endl;
        break;
    case Color::PURPLE:
        cout << "Color is PURPLE" << endl;
        break;
    case Color::PINK:
        cout << "Color is PINK" << endl;
        break;
    }

    TrafficLight l = TrafficLight::RED;
    switch (l) {
    using enum TrafficLight;
    case RED:
        cout << "Traffic Light is RED" << endl;
        break;
    case GREEN:
        cout << "Traffic Light is GREEN" << endl;
        break;
    case YELLOW:
        cout << "Traffic Light is YELLOW" << endl;
        break;
    }
    return 0;
}
*/

/*
enum class OrderStatus {
    PENDING, DISPATCHED, DELIVERED
};

enum class HttpStatus {
    OK=200, FORBIDDEN=403, NOTFOUND=404, ERROR=500
};

OrderStatus getOrderStatus() {
    // ...
    return OrderStatus::DELIVERED;
}

HttpStatus getHttpStatus() {
    // ...
    return HttpStatus::OK;
}

int main() {
    { // block1 -- OrderStatus staus - scope is limited to this block
        OrderStatus status = getOrderStatus();
        // order status
        switch (status) {
            using enum OrderStatus;
        case PENDING:
            // ...
            break;
        case DISPATCHED:
            // ...
            break;
        case DELIVERED:
            // ...
            break;
        }
    }

    { // block2 -- HttpStatus staus - scope is limited to this block
        // http status
        HttpStatus status = getHttpStatus();
        switch (status) {
            using enum HttpStatus;
        case OK:
            // ...
            break;
        case FORBIDDEN:
            // ...
            break;
        case NOTFOUND:
            // ...
            break;
            // ...
        }
    }
    return 0;
}
*/

enum class OrderStatus {
    PENDING, DISPATCHED, DELIVERED
};

enum class HttpStatus {
    OK = 200, FORBIDDEN = 403, NOTFOUND = 404, ERROR = 500
};

OrderStatus getOrderStatus() {
    // ...
    return OrderStatus::DELIVERED;
}

HttpStatus getHttpStatus() {
    // ...
    return HttpStatus::OK;
}

vector<string> getNames() {
    vector<string> names{ "Nilesh", "Vishal", "Rahul", "Nitin" };
    return names;
}

int main() {
    // scope of loop variable is limited to that loop only
    for (int i = 0; i < 5; i++)
        cout << "loop1: " << i << endl;
    for (int i = 0; i < 3; i++)
        cout << "loop2: " << i << endl;

    // order status -- scope is limited to switch case -- switch initializer
    switch (OrderStatus status = getOrderStatus(); status) {
        using enum OrderStatus;
    case PENDING:
        cout << "Order - PENDING" << endl;
        break;
    case DISPATCHED:
        cout << "Order - DISPATCHED" << endl;
        break;
    case DELIVERED:
        cout << "Order - DELIVERED" << endl;
        break;
    }

    // http status
    switch (HttpStatus status = getHttpStatus(); status) {
        using enum HttpStatus;
    case OK:
        cout << "HTTP - OK" << endl;
        break;
    case FORBIDDEN:
        cout << "HTTP - FORBIDDEN" << endl;
        break;
    case NOTFOUND:
        cout << "HTTP - NOTFOUND" << endl;
        break;
        // ...
    }

    // if initializer - status var scope limited to if-else
    if (OrderStatus status = getOrderStatus(); status == OrderStatus::DELIVERED)
        cout << "Thank you for shopping with us. " << (int)status << endl;
    else
        cout << "Your order will be delivered soon. " << (int)status << endl;

    // range based for loop with initializer
    for (vector<string> names = getNames(); auto& name: names)
        cout << name << endl;
    return 0;
}

