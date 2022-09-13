#include <iostream>
#include <string>

using namespace std;

int main(void) {
	////Q1. 행단위로 입력 후 출력. 점수는 한 단계 아래 점수로 표기
	//char fName[20],lName[20], Score[2], Age[4];
	//cout << "영문 퍼스트 네임(이름) : ";
	////cin.getline(fName, 19);
	//cin.getline(fName, 20);
	////cin.get();
	//cout << "영문 라스트 네임(성) : ";
	//cin.getline(lName, 20);
	//cout << "학생이 원하는 학점: ";
	//cin.getline(Score, 2);
	//cout << "나이: ";
	//cin.getline(Age, 4);
	//Score[0] += 1;
	//cout << "성명: " << lName << ", " << fName << endl;
	//cout << "학점: " << Score << endl;
	//cout << "나이: " << Age << endl;
	////후기 : getline과 get은 한 행을 읽는다. 다만 getline은 개행을 버리는 반면, get은 모두 읽어 들인다.
	
	//Q2.string으로 대체해서 4.4 예제 다시 작성 할 것
	string name, dessert;
	cout << "이름을 입력하십시오:";
	getline(cin, name);
	cout << "좋아하는 디저트를 입력하십시오:";
	getline(cin, dessert);
	cout << "맛있는 " << dessert;
	cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";
	return 0;
}