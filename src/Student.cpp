#include "Student.hpp"
#include <iostream>
using namespace std;

void Student::setGPA(double gpa){
    this->gpa = gpa;
}

double Student::getGPA(){
    return gpa;
}

Student::Student(): Person() {
    gpa = 3.5;
}

Student::Student(string name, int age, double gpa): Person(name,age){
    this->gpa = gpa;
}

void Student::printInfo(){
    cout <<getName() <<" is "<<getAge() <<" years old and has a gpa of "<< getGPA()<<endl;

}