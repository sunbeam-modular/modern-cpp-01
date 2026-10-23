#include <iostream>
using namespace std;

#include "function.h"
#include "function.h"   // skipped due to #pragma once
#include "function.h"   // skipped due to #pragma once

int main() {
    cout << "add() : " << add(22, 7) << endl;
    cout << "multiply() : " << multiply(22, 7) << endl;

    cout << "global1: " << global1 << endl;
    cout << "global3: " << global3 << endl;
    return 0;
}

