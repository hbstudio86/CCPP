#include <iostream>

class CSuper {
private:
	int n;
public:
	CSuper() {
		n = 0;
	}
	friend void fNum(void);
	void fName() {
		std::cout << "number is " << this->n;
	}
};

void fNum(void) {
	using namespace std;
	//cout << n;
	cout << "this is friend!!";
}

int main() {

	CSuper csa = CSuper();
	fNum();
	csa.fName();
	return 0;
}