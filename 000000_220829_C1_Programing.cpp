#include <iostream>

using namespace std;

int main(void) {

	//Q1. 이름과 주소를 출력하는 프로그램작성
	
	string name = "Alexander J Lee";	//c++ style
	char addr[] = "Asan-si, Chung-Nam, Republic of Korea";	//c style

	cout << "주소는 " << addr << "\n이름은 " << name << endl;

	return 0;
}