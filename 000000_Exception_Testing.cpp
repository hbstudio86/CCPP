#include <iostream>

using namespace std;

double d_Sum(double, double);

int main(void) {

	double x, y;
	x = 0;
	y = 0;
	
	try {
		cout << "���ڴ� " << d_Sum(x, y) << endl;
	}
	catch (const char * s) {
		cout << s << endl;
	}

	return 0;
}

double d_Sum(double a, double b) {

	if (b==0) {
		throw "0���� ���� �� �����ϴ�.";
	}
	return a / b;

}