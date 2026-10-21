/*
#include <iostream>
#include <string>
#include <vector>

struct Student {
    std::string name;
    int score;
};

void showName(const char* name) {
    if (name == NULL) {
        std::cout << "(no name)\n";
        return;
    }

    std::cout << name << '\n';
}

int main() {
    const int passingScore = 60;

    std::vector<Student> students;

    Student s1 = { "Asha", 78 };
    Student s2 = { "Ravi", 56 };
    Student s3 = { "Meera", 91 };

    students.push_back(s1);
    students.push_back(s2);
    students.push_back(s3);

    for (std::vector<Student>::const_iterator it = students.begin(); it != students.end();
        ++it) {

        const bool passed = it->score >= passingScore;

        std::cout << it->name << ": "
            << (passed ? "Pass" : "Fail") << '\n';
    }

    showName("Nilesh");
    showName(NULL);

    return 0;
}
*/

#include <iostream>
#include <string>
#include <vector>

struct Student {
    std::string name;
    int score;
};

void showName(const char* name) {
    if (name == nullptr) {
        std::cout << "(no name)\n";
        return;
    }
    std::cout << name << '\n';
}

int main() {
    constexpr int passingScore{ 60 };

    std::vector<Student> students = {
        { "Asha", 78 },
        { "Ravi", 56 },
        { "Meera", 91 }
    };

    for (auto &stud: students) {
        const bool passed = stud.score >= passingScore;

        std::cout << stud.name << ": "
            << (passed ? "Pass" : "Fail") << '\n';
    }

    showName("Nilesh");
    showName(nullptr);

    return 0;
}
