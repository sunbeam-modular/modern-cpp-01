#include <iostream>
#include <print>
#include <string>
#include <vector>
using namespace std;

struct Student {
    int roll;
    string name;
    int marks;
};

int main() {
    cout << "Hello World!\n";
    println("Hi, World\n"); // print text + \n

    string course{ "Modern C++" };
    int day = 2;
    cout << "Welcome to " << course << " - Day " << day << endl;
    println("Welcome to {} - Day {}", course, day);
    print("Welcome to {} - Day {}\n", course, day);

    int num{ 65 };
    println("\nnum = {0:d} (dec), {0:o} (oct), {0:x} (hex), {0:b} (bin)\n",
        num);

    vector<Student> students{
        { 1, "Prisha", 98 },
        { 2, "Soham", 94 },
        { 3, "Sakshi", 96 }
    };
    for (const auto& st : students)
        println("|{0:0>5}|{1:^20}|{2:8.2f}|", st.roll, st.name, (double)st.marks);
    return 0;
}
