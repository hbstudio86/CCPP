#include <iostream>
#include "Myclass.h"

using namespace std;

int main(void) {
	int ar[3] = { 1,2,3 };
	Myclass mc1(3, ar);
	Myclass mc2(mc1);
	mc1.print();
	cout << endl;
	mc2.print();
	cout << endl;
	return 0;
}