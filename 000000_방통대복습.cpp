#include <iostream>
#include "Myclass.h"

using namespace std;

class A {
private:
	int a1;
protected:
	int a2;
public:
	A() :a1(1), a2(2) {
		cout << "A 积己磊 积己" << endl;
	}
	A(int x) : a1(x), a2(2) {
		cout << "A 积己磊 积己" << endl;
	}
	~A() {
		cout << "A 颇鲍磊 颇鲍" << endl;
	}
	void printA() {
		cout << a1 << endl;
	}
};

class B : public A {
private:
	int b1;
protected:
	int b2;
public:
	B() :b1(3), b2(4) {
		cout << "B 积己磊 积己" << endl;
	}
	B(int x, int y) :b2(x), A(y), b1(3) {
		cout << "B 积己磊 积己" << endl;
	}
	~B() {
		cout << "B 颇鲍磊 颇鲍" << endl;
	}
	void printB() {
		cout << b1 << endl;
	}
	void printALL() {
		A::printA();
		cout << b2 << endl;
	}
};

int main(void) {
	//int ar[3] = { 1,2,3 };
	//Myclass mc1(3, ar);
	//Myclass mc2(mc1);
	//mc1.print();
	//cout << endl;
	//mc2.print();
	//cout << endl;
	//return 0;

	//惑加 楷嚼
	B objB;
	objB.printB();
	objB.printALL();
	B objC(10,20);
	objC.printB();
	objC.printALL();
	return 0;
}