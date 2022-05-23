#include <iostream>

class Faculty {
    std::string name;
public:
    Faculty(std::string name) {
        this->name = name;
    }

    Faculty() {}
};

class University {
    std::string name;
    Faculty faculty;
public:
    University(std::string name, std::string facultyName) {
        this->name = name;
        this->faculty = Faculty(facultyName);
    }
};


int main() {
    University university = University("УГАТУ", "ФИРТ");

    return 0;
}
