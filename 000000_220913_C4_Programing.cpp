#include <iostream>
#include <string>
#include <cstring>	



using namespace std;

int main(void) {
	////Q1. ������� �Է� �� ���. ������ �� �ܰ� �Ʒ� ������ ǥ��
	//char fName[20],lName[20], Score[2], Age[4];
	//cout << "���� �۽�Ʈ ����(�̸�) : ";
	////cin.getline(fName, 19);
	//cin.getline(fName, 20);
	////cin.get();
	//cout << "���� ��Ʈ ����(��) : ";
	//cin.getline(lName, 20);
	//cout << "�л��� ���ϴ� ����: ";
	//cin.getline(Score, 2);
	//cout << "����: ";
	//cin.getline(Age, 4);
	//Score[0] += 1;
	//cout << "����: " << lName << ", " << fName << endl;
	//cout << "����: " << Score << endl;
	//cout << "����: " << Age << endl;
	////�ı� : getline�� get�� �� ���� �д´�. �ٸ� getline�� ������ ������ �ݸ�, get�� ��� �о� ���δ�.
	
	////Q2.string���� ��ü�ؼ� 4.4 ���� �ٽ� �ۼ� �� ��
	//string name, dessert;
	//cout << "�̸��� �Է��Ͻʽÿ�:";
	//getline(cin, name);
	//cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ�:";
	//getline(cin, dessert);
	////cin.getline();
	//cout << "���ִ� " << dessert;
	//cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��!\n";
	////�ı� string�� �� ������ ���� ������ getline(cin,string)�� ��� �Ѵ�.
	////���⼭�� getline�� iostream������ �޼��尡 �ƴϴٶ�� ����� �� ���ִ�

	//Q3
	//char fName[10];
	//char lName[10];
	//printf("�۽�Ʈ ����(�̸�)�� �Է��Ͻÿ� : ");
	//fgets(fName, 10, stdin);
	//printf("��Ʈ ����(��)�� �Է��Ͻÿ� : ");
	//fgets(lName, 10, stdin);
	//for (int i = 0; i < 10; i++) {
	//	if (lName[i] == '\n') {
	//		lName[i] = '\0';
	//	}
	//	if (fName[i] == '\n') {
	//		fName[i] = '\0';
	//	}
	//}
	//printf("�ϳ��� ���ڿ��� �����: %s, %s\n", lName, fName);

	////Q4
	//string fName;
	//string lName;
	//cout << "�۽�Ʈ ���� (�̸�)�� �Է��Ͻÿ�: ";
	//getline(cin, fName);
	//cout << "��Ʈ ���� (��)�� �Է��Ͻÿ�: ";
	//getline(cin, lName);
	//cout << "�ϳ��� ���ڿ��� �����: " << lName << ", " << fName << endl;
	////�ı� : getline�� �������� �ʾҳ�... �̺κ��� �� �� �ϱ�����
	return 0;
}