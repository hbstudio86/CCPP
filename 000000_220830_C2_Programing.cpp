#include <iostream>

using namespace std;

int main(void) {

	////Q1.키를 정수형 cm로 받고 m와 cm로 변환. 입력은 밑줄 문자표 표시
	//const int ctm = 100;
	//int height;
	//cout << "키를 입력하세요__\b\b";
	//cin >> height;
	//cout << "입력하신 키 " << height << "cm는 m로 " << (double)height / (double)ctm << "m입니다." << endl;

	////Q2. 키를 인치 피트로, 몸무게를 파운드로 받아서 BMI 결과 출력
	//double hfe, hin, wpd;
	//const double fti = 12.0;	//feet -> inch
	//const double itm = 0.0254;	//inch -> m 
	//const double ptk = 2.2;		//pound -> kg
	////const double ttt = 2.54e-2;
	//cout << "1. 키를 feet 단위로 입력해주세요___\b\b";
	//cin >> hfe;
	//cout << "2. 키를 inch 단위로 입력해주세요___\b\b";
	//cin >> hin;
	//cout << "3. 몸무게를 pound 단위로 입력해주세요___\b\b";
	//cin >> wpd;
	//double ftio = (hfe * fti) * itm;
	//double itmo = hin * itm;
	//cout << "4. feet단위 키 BMI는 " << (wpd / ptk) / (ftio * ftio) << endl;
	//cout << "5. inch단위 키 BMI는 " << (wpd / ptk) / (itmo * itmo) << endl;

	////Q3. 위도를 도각, 분각, 초각으로 입력을 받고 10진수 형식으로 출력
	//const int dtm = 60; //도각 -> 분각
	//const int mts = 3600; //분각 -> 초각
	//int dg, mg, sg;
	//cout << "위도를 도, 분, 초 단위로 입력하시오:" << endl;
	//cout << "먼저, 도각을 입력하시오: ";
	//cin >> dg;
	//cout << "다음에, 분각을 입력하시오: ";
	//cin >> mg;
	//cout << "끝으로, 초각을 입력하시오: ";
	//cin >> sg;
	//cout << dg << "도, " << mg << "분, " << sg << "초 = " << dg + (((double)mg / (double)dtm) + ((double)sg / (double)mts)) << "도" << endl;

	////Q4. 초수를 입력 받아 일 시 분 초로 출력하라
	//long inpsec;	//입력받을 초
	//const long cDay = 86400L;	//일 변환 상수
	//const long cHr = 3600L;		//시간 변환 상수
	//const long cMi = 60L;		//분 변환 상수
	//long tmp1,tmp2,tmp3;		//임시 변수
	//cout << "초 수를 입력하시오: ";
	//cin >> inpsec;
	//tmp1 = inpsec % cDay;	//시간이 남음
	//tmp2 = tmp1 % cHr;		//분이 남음
	//tmp3 = tmp2 % cMi;		//초가 남음
	//cout << inpsec << "초 = " << inpsec / cDay << "일, " << tmp1 / cHr << "시간, " << tmp2 / cMi << "분, " << tmp3 << "초" << endl;

	////Q5. 세계인구와 미국인구를 입력받아서 Proportion을 나타내기
	//long long wldPop, usaPop;
	//cout << "세계 인구수를 입력하시오: " << endl;
	//cin >> wldPop;
	//cout << "미국의 인구수를 입력하시오: " << endl;
	//cin >> usaPop;
	//cout << "세계 인구수에서 미국이 차지하는 비중은 " << ((long double)usaPop / (long double)wldPop) * 100 << "%이다" << endl;

	

	return 0;
}