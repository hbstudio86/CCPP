#include <iostream>

const int ArSize = 80;

char* left(const char* str, int n = 1);

int main(void)
{
	using namespace std;
	char sample[ArSize];	//문자열을 담음 문자배열을 만듭니다.
	cout << "문자열을 입력하십시오: \n";
	cin.get(sample, ArSize);	//cin.get()을 사용하여 입력버퍼에 있는 문자열을 sample에 넣습니다.
	char* ps = left(sample, 4);	//left 함수를 실행합니다. 
	cout << ps << endl;			//ps, 즉 left 함수 실행후 넘거 받은 문자열의 주소 값을 출력합니다만, cout이기 때문에 문자열 출력
	cout << &ps << endl;
	delete[] ps;				//동적할당했던 메모리를 해제 합니다.
	ps = left(sample);			//이번에는 디폴트 매개변수를 이용함. (1)
	cout << ps << endl;			
	delete[] ps;
	return 0;
	
}

char* left(const char* str, int n )
{
	if (n < 0)	//입력된 n의 매개변수 값이 0이하이면
		n = 0;	//강제로 0으로 변경하도록 합니다.
	char* p = new char[n + 1];	//새로운 char형 메모리를 할당합니다. (그것은 n보다 1많습니다.)
	int i;
	for (i = 0; i < n && str[i]; i++)	// n이 카운팅 끝나거나, 널문자까지 도달 할때까지
		p[i] = str[i];					//입력된 문자를 새로 할당한 공간에다가 복사 합니다.
	while (i <= n)						// i가 for문 바깥에 생성되었음으로 i값은 n과 같은 값을 가진다.
		p[i++] = '\0';					// n과 같은 값, 즉 끝문자를 null 문자로 지정합니다.
	return p;							// 그리고 새로 할당한 메모리 주소를 반환합니다.
}