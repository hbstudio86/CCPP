#include <iostream>

using namespace std;

class A {
private:
	int n;
public:
	void fun1() {
		cout << "Class A의 fun1 함수" << n << endl;
	}
	virtual void fun2() {
		cout << "Class A의 fun2 함수" << n << endl;
	}
};
class B:public A {
private:
	int m;
public:
	void fun1() {
		cout << "Class B의 fun1 함수" << m << endl;
	}
	void fun2() {
		cout << "Class B의 fun2 함수" << m << endl;
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
	c->fun2();	//virtual로 설정된 함수는 파생클래스에서 다시 재정의 될 것이라고 알려주는 것이라, 새로 정의된 함수가 실행 됨

	return 0;
}