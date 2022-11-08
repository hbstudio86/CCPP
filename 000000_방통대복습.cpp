#include <iostream>
#include "Myclass.h"

using namespace std;

class A {
private:
	int a1;
	static int totalA;
protected:
	int a2;
public:
	A() :a1(1), a2(2) {
		cout << "A ������ ����" << endl;
		totalA++;
		cout << "totalA : " << totalA << endl;
	}
	A(int x) : a1(x), a2(2) {
		cout << "A ������ ����" << endl;
		totalA++;
		cout << "totalA : " << totalA << endl;
	}
	~A() {
		cout << "A �ı��� �ı�" << endl;
		totalA--;
		cout << "totalA : " << totalA << endl;
	}
	void printA() {
		cout << a1 << endl;
	}
};

class B : public A {
private:
	int b1;
	static int totalB;
protected:
	int b2;
public:
	B() :b1(3), b2(4) {
		cout << "B ������ ����" << endl;
		totalB++;
		cout << "totalB : " << totalB << endl;
	}
	B(int x, int y) :b2(x), A(y), b1(3) {
		cout << "B ������ ����" << endl;
		totalB++;
		cout << "totalB : " << totalB << endl;
	}
	B(const B& b):A(0) {
		b1 = b.b1;
		b2 = b.b2;
	}
	~B() {
		cout << "B �ı��� �ı�" << endl;
		totalB--;
		cout << "totalB : " << totalB << endl;
	}
	void printB() {
		cout << b1 << endl;
	}
	void printALL() {
		A::printA();
		cout << b2 << endl;
	}
	B operator++(int) {	//���������� : �ڿ� �־ (����) �� (��ȣ)�� ä���� �ִ�.
		B tmp(*this);
		b1++;
		return tmp;
	}
	B& operator++() {	//���������� : �տ� �־ (����) �� (��ȣ)�� ����ִ�.
		b1++;
		return *this;
	}
	friend ostream& operator<<(ostream& os, const B& b);
};

int A::totalA = 0;
int B::totalB = 0;

ostream& operator<<(ostream & os,const B& b) {	// os << b�� ���·� �ȴ�.
	os << b.b1;	//���⼭ os�� cout�� �޴´�.
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

	//��� ����
	B objB;
	objB.printB();
	objB.printALL();
	B objC(10,20);
	objC.printB();
	objC.printALL();
	cout << "objC++ ����� " << objC++ << endl;
	cout << "objC++ ����� " << objC++ << endl;
	cout << "objC++ ����� " << ++objC << endl;

	return 0;
}