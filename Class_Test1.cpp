#include <iostream>

class A
{
private:
	int a;
public:
	A(int n = 0) { a = n; }	//인라인 함수
};

class B : public A
{
private:
	int b;
public:
	B(int m = 0, int n = 0) : A(n) { b = m; }	//인라인 함수
};

class C : public B
{
private:
	int c;
public:
	C(int g = 0, int m = 0, int n = 0) : B(m, n) { c = g; }	//인라인 함수
};


int main(void)
{
	class C cc = C(1, 2, 3);
	//실행 순서를 보니, Class C가 우선 실행 되고
	//그다음 Class B
	// Class A순서대로 실행 된다음
	// 그 역순으로 실행이 된다
	// Class C에서 B의 생성자가 실행이 되고
	// Class B에서 A의 생성자가
	// Class A에서 멤버가 초기화가 되고
	// 그다음 B, C순으로 멤버가 초기화 된다.
	return 0;
}