#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    vector<double> grades;

public:
    Student(string studentName);
    void addGrade(double grade);
    double calculateAverage();
    void printDetails();
    double roundToTwoDecimalPlace(double value);
};
