#include "Person.hpp"
#include "Student.hpp"
#include <iostream>
using namespace std;

int main() {

    Student s1;
    Student s2("Bob",33,3.2);
    Student* s3 = new Student();
    Student* s4 = new Student("Phil",17,4.2);

    cout <<"Testing Basic Student Creation"<<endl;
    s1.printInfo();
    s2.printInfo();
    s3->printInfo();
    s4->printInfo();

    cout <<"\nTesting Pointers"<<endl;
    Person* pptr = new Student("Kim",55,3.75);
    pptr->printInfo();
   
 /*
    cout<<"\nCheck Population ...."<<endl;
    cout<<Person::getPopulation()<<endl;
   
    Person p1;
    Person p2("Mary Johnson",21);

    cout << p1 <<endl;
    cout << p2 <<endl;

    p1.setAge(60);
    p1.setName("Bob Williams");
    p2.hasBirthday();

    cout << "\nAfter updates ..."<<endl;
    p1.printInfo();
    p2.printInfo();

    cout<<"\nChecking Validation ..."<<endl;
    p2.setAge(500);
    Person p3("Larry Smith",-71);
    p2.printInfo();
    p3.printInfo();

    cout<<"\nCheck Population ...."<<endl;
    cout<<Person::getPopulation()<<endl;

    // Now fun with pointers

    Person* p4 = new Person; // default constructor
    Person* p5 = new Person("Emily Young", 35); // constructor with parameters
    Person* p6 = new Person("Sam Jones", 77,"Old fart");

    p4 ->printInfo();
    p5 ->printInfo();
   // (*p5).printInfo();
    p6 -> printInfo();
    cout << *p6 <<endl; //dereference to print object

    cout<<"\nCheck Population ...."<<endl;
    cout<<Person::getPopulation()<<endl;
    delete p4; // invokes destructor
    delete p5;
    delete p6;

    cout<<"\nCheck Population ...."<<endl;
    cout<<Person::getPopulation()<<endl;
    */
    return 0;
} 