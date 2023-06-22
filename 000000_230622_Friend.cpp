#include <iostream>

class CSuper {
private:
	int n;
public:
	friend void fNum(void);
};

void CSuper::fNum(void) {
	using namespace std;
	cout << n;
}

int main() {

	return 0;
}