#include <iostream>

class A
{
private:
	int a;
public:
	A(int n = 0) { a = n; }	//�ζ��� �Լ�
};

class B : public A
{
private:
	int b;
public:
	B(int m = 0, int n = 0) : A(n) { b = m; }	//�ζ��� �Լ�
};

class C : public B
{
private:
	int c;
public:
	C(int g = 0, int m = 0, int n = 0) : B(m, n) { c = g; }	//�ζ��� �Լ�
};


int main(void)
{
	class C cc = C(1, 2, 3);
	//���� ������ ����, Class C�� �켱 ���� �ǰ�
	//�״��� Class B
	// Class A������� ���� �ȴ���
	// �� �������� ������ �ȴ�
	// Class C���� B�� �����ڰ� ������ �ǰ�
	// Class B���� A�� �����ڰ�
	// Class A���� ����� �ʱ�ȭ�� �ǰ�
	// �״��� B, C������ ����� �ʱ�ȭ �ȴ�.
	return 0;
}