#include "student.h"
using namespace std;

Student::Student(string studentName) : name(studentName) {}

void Student::addGrade(double grade) {
    grades.push_back(grade); 
}

double Student::calculateAverage() {
    if (grades.empty()) {
        return 0.0; 
    }
    double sum = 0.0;
    for (double grade : grades) {
        sum += grade; 
    }
    return sum / grades.size(); 
}
double Student::roundToTwoDecimalPlace(double value) {
    return static_cast<int>(value * 100 + 0.5) / 100.0; 
}

void Student::printDetails() {
    cout << "Student Name: " << name << endl;
    cout << "Average Grade: " << roundToTwoDecimalPlace(calculateAverage()) << endl;
}