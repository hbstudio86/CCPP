#include <iostream>

using namespace std;

void TBM(void);
inline void SHTR(void) { cout << "See how they run" << endl; }
void FTC(float dC);
long double LTS(long double LY);
void hm_merge(int, int);

int main(void) {

	////Q1. �̸��� �ּҸ� ����ϴ� ���α׷��ۼ�
	//string name = "Alexander J Lee";	//c++ style
	//char addr[] = "Asan-si, Chung-Nam, Republic of Korea";	//c style
	//cout << "�ּҴ� " << addr << "\n�̸��� " << name << endl;

	////Q2.���Ϸ� �Ÿ��� �Է� �޾� ų�ι��� ������ ȯ���Ͽ� ��� 1mile = 1.60934
	//const float t_kilo = 1.60934f;	//ų�ι��� ��ȯ ���
	//float mile;	//�Է� ���� ����
	//cout << "�Ÿ��� ���� ������ �Է��ϼ���" << endl;
	//cin >> mile;
	//cout << "�Է��� �Ÿ��� km�� ȯ���ϸ�..." << mile * t_kilo << "�Դϴ�." << endl;

	////Q3.����� ���� �Լ��� �̿��Ͽ� ���ڿ��� �ι��� ��� �ض�
	////�ϳ��� �������� �Լ���, �ϳ��� �ζ��� �Լ���
	//TBM();
	//TBM();
	//SHTR();
	//SHTR();

	////Q4. ����� ���̸� �Է¹޾� �������� ���
	//int age;	//����� ����
	//cout << "Enter your age : ";
	//cin >> age;
	//cout << "����� ���̸� ������ ��Ÿ�� ��� " << age * 12 << "�Դϴ�." << endl;

	////Q5. �����µ��� ȭ���µ��� ��ȯ�ϴ� ����� �Լ��� ����� ȣ���ض�
	//float dC;
	//cout << "���� �µ��� �Է��ϰ� Enter Ű�� �����ʽÿ�: ";
	//cin >> dC;
	//FTC(dC);

	////Q6. ������ õ�������� ��ȯ�ϴ� ����� �Լ��� �ۼ��Ͽ� ���ϰ��� ���
	//long double astu;	//õ������
	//cout << "���� ���� �Է��ϰ� Enter Ű�� �����ʽÿ�: ";
	//cin >> astu;
	//cout << astu << " ������ " << LTS(astu) << "õ�� �����Դϴ�." << endl;

	//Q7. �ð� ���� �Է� �޾� ����� �Լ����� h:mm���·� ����ϵ��� �ض�
	int h, m;
	cout << "�ð� ���� �Է��Ͻÿ�: ";
	cin >> h;
	cout << "�� ���� �Է��Ͻÿ�: ";
	cin >> m;
	hm_merge(h, m);
	return 0;
}

void TBM(void) {
	cout << "Three blind mice" << endl;
}

void FTC(float dC) {
	float dF = (1.8f * dC) + 32.0f;
	cout << "���� " << dC << "���� ȭ���� " << dF << "�� �Դϴ�." << endl;
}

long double LTS(long double LY) {
	return LY * 63240L;
}

void hm_merge(int h, int m) {
	cout << "�ð�: " << h << ":" << m << endl;
}