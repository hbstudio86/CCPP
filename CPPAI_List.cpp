#include <iostream>
#include <stdio.h>

using namespace std;

class List
{
public:
	int num;
	List* next;		//���� ����Ʈ�� �����ϴ� List *�� ����;
	List(int n)		//������
	{
		num = n;
	}
};

int main(void)
{
	List* objt1 = new List(1);
	List *objt2 = new List(2);
	List *objt3 = new List(3);
	List *objt4 = new List(4);	//�̰��� �����ڸ� �����Ѵ�.

	objt1->next = objt2;
	objt2->next = objt3;
	objt3->next = objt4;
	//�����ͷ� ����� ü���� ���� Ư�� ������Ʈ���� �ٸ� ������Ʈ�� ��� ������ �� �ִٴ� ���� �߿���
	List* obj = objt1;

	for (int i = 0; i < 4; i++)
	{
		cout << "num: " << obj->num << endl;
		obj = obj->next;
	}

	return 0;
}