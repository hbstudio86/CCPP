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
		cout << "A 생성자 생성" << endl;
	}
	A(int x) : a1(x), a2(2) {
		cout << "A 생성자 생성" << endl;
	}
	~A() {
		cout << "A 파괴자 파괴" << endl;
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
		cout << "B 생성자 생성" << endl;
	}
	B(int x, int y) :b2(x), A(y), b1(3) {
		cout << "B 생성자 생성" << endl;
	}
	B(const B& b):A(0) {
		b1 = b.b1;
		b2 = b.b2;
	}
	~B() {
		cout << "B 파괴자 파괴" << endl;
	}
	void printB() {
		cout << b1 << endl;
	}
	void printALL() {
		A::printA();
		cout << b2 << endl;
	}
	B operator++(int) {	//후위연산자
		B tmp(*this);
		b1++;
		return tmp;
	}
	B& operator++() {	//전위연산자
		b1++;
		return *this;
	}
	friend ostream& operator<<(ostream& os, const B& b);
};

ostream& operator<<(ostream & os,const B& b) {
	os << b.b1;
	return os;
}

int main(void) {
	//int ar[3] = { 1,2,3 };
	//Myclass mc1(3, ar);
	//Myclass mc2(mc1);
	//mc1.print();
	//cout << endl;
	//mc2.print();
	//cout << endl;
	//return 0;

	//상속 연습
	B objB;
	objB.printB();
	objB.printALL();
	B objC(10,20);
	objC.printB();
	objC.printALL();
	cout << "objC++ 결과는 " << objC++ << endl;
	cout << "objC++ 결과는 " << objC++ << endl;
	cout << "objC++ 결과는 " << ++objC << endl;

	return 0;
}