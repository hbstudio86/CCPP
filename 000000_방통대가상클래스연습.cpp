#include <iostream>

using namespace std;

//�߻�Ŭ����
class Aclass {
public:
	virtual void f1() const = 0;	//���� ���� �Լ�
	void f2() {
		cout << "�߻�Ŭ���� �Լ�f2" << endl;
	}
};

class Bclass : public Aclass {
public:
	void f1() const {
		cout << "�Ļ�Ŭ���� �Լ�f1" << endl;
	}
	//void f2() {
	//	cout << "�Ļ�Ŭ���� �Լ�f2" << endl;
	//}
	virtual void f3() {
		cout << "�Ļ�Ŭ���� �Լ�f3" << endl;
	}
};

class Cclass: public Bclass {
public:
	void f1() const {
		cout << "����Ŭ���� �Լ�f1" << endl;
	}
	//void f2() {
	//	cout << "����Ŭ���� �Լ�f2" << endl;
	//}
	void f3() {
		cout << "����Ŭ���� �Լ�f3" << endl;
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