#include <iostream>
#include <string>

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
	
	//Q2.string���� ��ü�ؼ� 4.4 ���� �ٽ� �ۼ� �� ��
	string name, dessert;
	cout << "�̸��� �Է��Ͻʽÿ�:";
	getline(cin, name);
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ�:";
	getline(cin, dessert);
	cout << "���ִ� " << dessert;
	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��!\n";
	return 0;
}