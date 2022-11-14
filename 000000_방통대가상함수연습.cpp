#include <iostream>

using namespace std;

class A {
private:
	int n;
public:
	void fun1() {
		cout << "Class A�� fun1 �Լ�" << n << endl;
	}
	virtual void fun2() {
		cout << "Class A�� fun2 �Լ�" << n << endl;
	}
};
class B:public A {
private:
	int m;
public:
	void fun1() {
		cout << "Class B�� fun1 �Լ�" << m << endl;
	}
	void fun2() {
		cout << "Class B�� fun2 �Լ�" << m << endl;
	}
};

int main(void) {

	A a;
	a.fun1();
	a.fun2();

	B b;
	b.fun1();
	b.fun2();

	A* c = new B;
	c->fun1();
	c->fun2();	//virtual�� ������ �Լ��� �Ļ�Ŭ�������� �ٽ� ������ �� ���̶�� �˷��ִ� ���̶�, ���� ���ǵ� �Լ��� ���� ��

	return 0;
}