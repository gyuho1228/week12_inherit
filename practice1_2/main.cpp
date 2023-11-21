#include<iostream>
using namespace std;
class Person {
public:
	Person(int x) { cout << "Person::Person(int ) called" << endl; }
	Person() { 
		cout << "Person::Person() called" << endl;
		per = 1;
	}
	int per;
};

class Faculty : virtual public Person {
public:
	Faculty(int x) :Person(x) {
		cout << "Faculty::Faculty(int ) called" << endl;
		fac = 2;
	}
	int fac;
};

class Student : virtual public Person {
public:
	Student(int x) :Person(x) {
		cout << "Student::Student(int ) called" << endl;
		stu = 3;
	}
	int stu;
};

class TA : public Faculty, public Student {
public:
	TA(int x) :Student(x), Faculty(x) {
		cout << "TA::TA(int ) called" << endl;
		cout << per << fac << stu << endl;
	}
};

int main() {
	TA ta1(30);
}
