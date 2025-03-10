#ifndef STUDENT_HPP
#define STUDENT_HPP
#include "Person.hpp"

class Student: public Person {
private:
    double gpa;
public:
    double getGPA();
    void setGPA(double gpa);
    Student();
    Student(string name, int age,double gpa);
    void printInfo() override;
};



#endif