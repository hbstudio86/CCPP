#include <iostream>
#include <stdio.h>

using namespace std;

class List
{
public:
	int num;
	List* next;		//다음 리스트를 저장하는 List *형 변수;
	List(int n)		//생성자
	{
		num = n;
	}
};

int main(void)
{
	List* objt1 = new List(1);
	List *objt2 = new List(2);
	List *objt3 = new List(3);
	List *objt4 = new List(4);	//이것은 생성자를 생성한다.

	objt1->next = objt2;
	objt2->next = objt3;
	objt3->next = objt4;
	//포인터로 연결된 체인을 따라가 특정 오브젝트에서 다른 오브젝트를 계속 참조할 수 있다는 것이 중요함
	List* obj = objt1;

	for (int i = 0; i < 4; i++)
	{
		cout << "num: " << obj->num << endl;
		obj = obj->next;
	}

	return 0;
}