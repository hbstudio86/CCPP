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

	////Q5
	//CandyBar snack = { "Mocha Munch",2.3,350 };
	//cout << "snack name > " << snack.Name << endl;
	//cout << "snack weith> " << snack.Weight << endl;
	//cout << "snack cal  > " << snack.Kcal << endl;
	////�ı� : ����

	////Q6
	//CandyBar snacks[3] = { {"snack1",10.1,100},{"snack2",11.2,200},{"snack3",13,300} };
	//cout << "snack1 " << snacks[0].Name << "/ wgt " << snacks[0].Weight << "kCal " << snacks[0].Kcal << endl;
	//cout << "snack2 " << snacks[1].Name << "/ wgt " << snacks[1].Weight << "kCal " << snacks[1].Kcal << endl;
	//cout << "snack3 " << snacks[2].Name << "/ wgt " << snacks[2].Weight << "kCal " << snacks[2].Kcal << endl;
	////�ı� : �⺻�⸦ ���� �ϸ� ���� �� �� �ִ�.

	//q7 : pizza co. struct


	return 0;
}