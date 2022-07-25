/*
ofstream�� ostream�� �޼��带 ����� �� �ִ�.
�� ������ ofstream�� ostream�� ��ӹ��� �ڽ� Ŭ�����̱� �����̴�.
*/


#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void file_it(ostream& os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main(void)
{
	ofstream fout;   //FILE *fp
	const char* fn = "ep-data.txt";
	fout.open(fn);	//fopen(~)
	if (!fout.is_open())
	{
		cout << fn << " ������ �� �� �����ϴ�. ��\n";
		exit(EXIT_FAILURE);
	}
	double objective;
	cout << "�빰���� �����Ÿ��� "
		"mm ������ �Է��Ͻʽÿ�: ";
	cin >> objective;
	double eps[LIMIT];
	cout << LIMIT << "���� ��ȷ����� �����Ÿ��� "
		"mm ������ �Է��Ͻʽÿ�: \n";
	for (int i = 0; i < LIMIT; i++)
	{
		cout << "��ȷ��� #" << i + 1 << ": ";
		cin >> eps[i];
	}
	file_it(fout, objective, eps, LIMIT);	//�̰��� ���Ͽ� ���� �뵵
	file_it(cout, objective, eps, LIMIT);	//�̰��� ȭ�鿡 ����ϴ� �뵵
	//ostream �� ofstream ��ü�� ostream ��ü�� ���о��� ���� �� �� �ִ�.
	cout << "���� \n";
	return 0;
}


void file_it(ostream& os, double fo, const double fe[], int n)
{
	ios_base::fmtflags initial;
	initial = os.setf(ios_base::fixed);
	os.precision(0);
	os << "�빰������ �����Ÿ�: " << fo << "mm\n";
	os.setf(ios::showpoint);
	os.precision(1);
	os.width(17);
	os << "��ȷ��� �����Ÿ�";
	os.width(15);
	os << "Ȯ�����" << endl;
	for (int i = 0; i < n; i++)
	{
		os.width(17);
		os << fe[i];
		os.width(15);
		os << int(fo / fe[i] + 0.5) << endl;
	}
	os.setf(initial);
}