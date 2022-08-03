#include <iostream>

const int ArSize = 80;

char* left(const char* str, int n = 1);

int main(void)
{
	using namespace std;
	char sample[ArSize];	//���ڿ��� ���� ���ڹ迭�� ����ϴ�.
	cout << "���ڿ��� �Է��Ͻʽÿ�: \n";
	cin.get(sample, ArSize);	//cin.get()�� ����Ͽ� �Է¹��ۿ� �ִ� ���ڿ��� sample�� �ֽ��ϴ�.
	char* ps = left(sample, 4);	//left �Լ��� �����մϴ�. 
	cout << ps << endl;			//ps, �� left �Լ� ������ �Ѱ� ���� ���ڿ��� �ּ� ���� ����մϴٸ�, cout�̱� ������ ���ڿ� ���
	cout << &ps << endl;
	delete[] ps;				//�����Ҵ��ߴ� �޸𸮸� ���� �մϴ�.
	ps = left(sample);			//�̹����� ����Ʈ �Ű������� �̿���. (1)
	cout << ps << endl;			
	delete[] ps;
	return 0;
	
}

char* left(const char* str, int n )
{
	if (n < 0)	//�Էµ� n�� �Ű����� ���� 0�����̸�
		n = 0;	//������ 0���� �����ϵ��� �մϴ�.
	char* p = new char[n + 1];	//���ο� char�� �޸𸮸� �Ҵ��մϴ�. (�װ��� n���� 1�����ϴ�.)
	int i;
	for (i = 0; i < n && str[i]; i++)	// n�� ī���� �����ų�, �ι��ڱ��� ���� �Ҷ�����
		p[i] = str[i];					//�Էµ� ���ڸ� ���� �Ҵ��� �������ٰ� ���� �մϴ�.
	while (i <= n)						// i�� for�� �ٱ��� �����Ǿ������� i���� n�� ���� ���� ������.
		p[i++] = '\0';					// n�� ���� ��, �� �����ڸ� null ���ڷ� �����մϴ�.
	return p;							// �׸��� ���� �Ҵ��� �޸� �ּҸ� ��ȯ�մϴ�.
}