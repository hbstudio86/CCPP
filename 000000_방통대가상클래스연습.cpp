#include <iostream>

using namespace std;

//추상클래스
class Aclass {
public:
	virtual void f1() const = 0;	//순수 가상 함수
	void f2() {
		cout << "추상클래스 함수f2" << endl;
	}
};

class Bclass : public Aclass {
public:
	void f1() const {
		cout << "파생클래스 함수f1" << endl;
	}
	//void f2() {
	//	cout << "파생클래스 함수f2" << endl;
	//}
	virtual void f3() {
		cout << "파생클래스 함수f3" << endl;
	}
};

class Cclass: public Bclass {
public:
	void f1() const {
		cout << "손자클래스 함수f1" << endl;
	}
	//void f2() {
	//	cout << "손자클래스 함수f2" << endl;
	//}
	void f3() {
		cout << "손자클래스 함수f3" << endl;
	}
};

//struct Astruct {
//	virtual int fn() = 0;
//};

int main(void) {

//	Aclass acl;
	Bclass bc1;
	bc1.f1();
	bc1.f2();
	bc1.f3();
	Cclass cc1;
	cc1.f1();
	cc1.f2();
	cc1.f3();

	return 0;
}