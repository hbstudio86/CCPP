#include <iostream>

using namespace std;

class Pencils {
private:
	int dozens;
	int np;
	static int total;
public:
	Pencils() : dozens(0), np(0) {
		cout << "������ A ���� Total: " << ++total << endl;
	}
	Pencils(int n) {
		dozens = n / 12;
		np = n % 12;
		cout << "������ B ���� Total: " << ++total << endl;
	}
	Pencils(int d, int n) :dozens(d), np(n) {
		cout << "������ B ���� Total: " << ++total << endl;
	}
	~Pencils() {
		cout << "�ı��� ���� Total: " << --total << endl;
	}
	Pencils& operator++() {
		if (++np >= 12)
			++dozens, np = 0;
		return *this;
	}
	Pencils operator++(int) {
		Pencils tmp(*this);
		if (++np >= 12)
			++dozens, np = 0;
		return tmp;
	}
	void display() const {
		if (dozens) {
			cout << dozens << "Ÿ";
			if (np)	cout << np << "�ڷ�";
			cout << endl;
		}
		else
			cout << np << "�ڷ�" << endl;
	}
};

int Pencils::total = 0;

int main(void) {
	Pencils p1();
	return 0;
}