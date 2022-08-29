#include <iostream>

using namespace std;

void TBM(void);
inline void SHTR(void) { cout << "See how they run" << endl; }
void FTC(float dC);
long double LTS(long double LY);
void hm_merge(int, int);

int main(void) {

	////Q1. 이름과 주소를 출력하는 프로그램작성
	//string name = "Alexander J Lee";	//c++ style
	//char addr[] = "Asan-si, Chung-Nam, Republic of Korea";	//c style
	//cout << "주소는 " << addr << "\n이름은 " << name << endl;

	////Q2.마일로 거리를 입력 받아 킬로미터 단위로 환산하여 출력 1mile = 1.60934
	//const float t_kilo = 1.60934f;	//킬로미터 변환 상수
	//float mile;	//입력 받을 변수
	//cout << "거리를 마일 단위로 입력하세요" << endl;
	//cin >> mile;
	//cout << "입력한 거리를 km로 환산하면..." << mile * t_kilo << "입니다." << endl;

	////Q3.사용자 정의 함수를 이용하여 문자열을 두번씩 출력 해라
	////하나는 전통적인 함수를, 하나는 인라인 함수로
	//TBM();
	//TBM();
	//SHTR();
	//SHTR();

	////Q4. 사용자 나이를 입력받아 개월수로 출력
	//int age;	//사용자 나이
	//cout << "Enter your age : ";
	//cin >> age;
	//cout << "당신의 나이를 월수로 나타낼 경우 " << age * 12 << "입니다." << endl;

	////Q5. 섭씨온도를 화씨온도로 변환하는 사용자 함수를 만들고 호출해라
	//float dC;
	//cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오: ";
	//cin >> dC;
	//FTC(dC);

	////Q6. 광년을 천문단위로 변환하는 사용자 함수를 작성하여 리턴값을 출력
	//long double astu;	//천문단위
	//cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";
	//cin >> astu;
	//cout << astu << " 광년은 " << LTS(astu) << "천문 단위입니다." << endl;

	//Q7. 시간 분을 입력 받아 사용자 함수에서 h:mm형태로 출력하도록 해라
	int h, m;
	cout << "시간 값을 입력하시오: ";
	cin >> h;
	cout << "분 값을 입력하시오: ";
	cin >> m;
	hm_merge(h, m);
	return 0;
}

void TBM(void) {
	cout << "Three blind mice" << endl;
}

void FTC(float dC) {
	float dF = (1.8f * dC) + 32.0f;
	cout << "섭씨 " << dC << "도는 화씨로 " << dF << "도 입니다." << endl;
}

long double LTS(long double LY) {
	return LY * 63240L;
}

void hm_merge(int h, int m) {
	cout << "시각: " << h << ":" << m << endl;
}