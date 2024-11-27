#include <iostream>
using namespace std;
#include "Student.h"

int main() {
    Student student("Wilmer Cal");

    student.addGrade(67.0);
    student.addGrade(79.0);
    student.addGrade(88.);

    student.printDetails();

    return 0;
}
