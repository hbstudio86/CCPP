#include <iostream>
#include <string>
#include <cstring>	

using namespace std;

struct CandyBar {
	string Name;
	float Weight;
	int Kcal;
};

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
	
	////Q2.string으로 대체해서 4.4 예제 다시 작성 할 것
	//string name, dessert;
	//cout << "이름을 입력하십시오:";
	//getline(cin, name);
	//cout << "좋아하는 디저트를 입력하십시오:";
	//getline(cin, dessert);
	////cin.getline();
	//cout << "맛있는 " << dessert;
	//cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";
	////후기 string을 한 행으로 읽을 때에는 getline(cin,string)을 써야 한다.
	////여기서의 getline은 iostream에서의 메서드가 아니다라는 사실을 알 수있다

	//Q3
	//char fName[10];
	//char lName[10];
	//printf("퍼스트 네임(이름)을 입력하시오 : ");
	//fgets(fName, 10, stdin);
	//printf("라스트 네임(성)을 입력하시오 : ");
	//fgets(lName, 10, stdin);
	//for (int i = 0; i < 10; i++) {
	//	if (lName[i] == '\n') {
	//		lName[i] = '\0';
	//	}
	//	if (fName[i] == '\n') {
	//		fName[i] = '\0';
	//	}
	//}
	//printf("하나의 문자열로 만들면: %s, %s\n", lName, fName);

	////Q4
	//string fName;
	//string lName;
	//cout << "퍼스트 네임 (이름)을 입력하시오: ";
	//getline(cin, fName);
	//cout << "라스트 네임 (성)을 입력하시오: ";
	//getline(cin, lName);
	//cout << "하나의 문자열로 만들면: " << lName << ", " << fName << endl;
	////후기 : getline이 생각나지 않았네... 이부분은 좀 더 암기하자

	////Q5
	//CandyBar snack = { "Mocha Munch",2.3,350 };
	//cout << "snack name > " << snack.Name << endl;
	//cout << "snack weith> " << snack.Weight << endl;
	//cout << "snack cal  > " << snack.Kcal << endl;
	////후기 : 쉽다

	////Q6
	//CandyBar snacks[3] = { {"snack1",10.1,100},{"snack2",11.2,200},{"snack3",13,300} };
	//cout << "snack1 " << snacks[0].Name << "/ wgt " << snacks[0].Weight << "kCal " << snacks[0].Kcal << endl;
	//cout << "snack2 " << snacks[1].Name << "/ wgt " << snacks[1].Weight << "kCal " << snacks[1].Kcal << endl;
	//cout << "snack3 " << snacks[2].Name << "/ wgt " << snacks[2].Weight << "kCal " << snacks[2].Kcal << endl;
	////후기 : 기본기를 토대로 하면 쉽게 할 수 있다.

	//q7 : pizza co. struct


	return 0;
}