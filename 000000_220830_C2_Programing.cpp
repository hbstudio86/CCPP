#include <iostream>

using namespace std;

int main(void) {

	////Q1.Ű�� ������ cm�� �ް� m�� cm�� ��ȯ. �Է��� ���� ����ǥ ǥ��
	//const int ctm = 100;
	//int height;
	//cout << "Ű�� �Է��ϼ���__\b\b";
	//cin >> height;
	//cout << "�Է��Ͻ� Ű " << height << "cm�� m�� " << (double)height / (double)ctm << "m�Դϴ�." << endl;

	////Q2. Ű�� ��ġ ��Ʈ��, �����Ը� �Ŀ��� �޾Ƽ� BMI ��� ���
	//double hfe, hin, wpd;
	//const double fti = 12.0;	//feet -> inch
	//const double itm = 0.0254;	//inch -> m 
	//const double ptk = 2.2;		//pound -> kg
	////const double ttt = 2.54e-2;
	//cout << "1. Ű�� feet ������ �Է����ּ���___\b\b";
	//cin >> hfe;
	//cout << "2. Ű�� inch ������ �Է����ּ���___\b\b";
	//cin >> hin;
	//cout << "3. �����Ը� pound ������ �Է����ּ���___\b\b";
	//cin >> wpd;
	//double ftio = (hfe * fti) * itm;
	//double itmo = hin * itm;
	//cout << "4. feet���� Ű BMI�� " << (wpd / ptk) / (ftio * ftio) << endl;
	//cout << "5. inch���� Ű BMI�� " << (wpd / ptk) / (itmo * itmo) << endl;

	//Q3. ������ ����, �а�, �ʰ����� �Է��� �ް� 10���� �������� ���
	const int dtm = 60; //���� -> �а�
	const int mts = 3600; //�а� -> �ʰ�
	int dg, mg, sg;
	cout << "������ ��, ��, �� ������ �Է��Ͻÿ�:" << endl;
	cout << "����, ������ �Է��Ͻÿ�: ";
	cin >> dg;
	cout << "������, �а��� �Է��Ͻÿ�: ";
	cin >> mg;
	cout << "������, �ʰ��� �Է��Ͻÿ�: ";
	cin >> sg;
	cout << dg << "��, " << mg << "��, " << sg << "�� = " << dg + (((double)mg / (double)dtm) + ((double)sg / (double)mts)) << "��" << endl;
	return 0;
}