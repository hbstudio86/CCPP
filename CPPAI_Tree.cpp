#include <iostream>
#include <stdio.h>
#include <vector>
#include <memory>

using namespace std;

class Function;

class Variable	//���� a�� �����ϱ⸸ �ϴ� Ŭ����
{
public:
	float a = 0.0f;
	Function* creator = nullptr;	//function ������ creator�� ������.
	Variable(float a)
	{
		this->a = a;
	}
};

using pVariable = shared_ptr<Variable>;	//variable�� ���� �����͸� ����

class Function		//
{
public:
	vector<pVariable> v;

	pVariable forward(pVariable v1, pVariable v2)		//�μ� ������
	{
		v.push_back(v1);
		v.push_back(v2);

		pVariable pv = pVariable(new Variable(0));
		pv->creator = this;

		pv->a += v1->a;
		pv->a += v2->a;
		
		return pv;
	}
	pVariable forward(pVariable v1)		//�μ��� �ϳ�����
	{
		v.push_back(v1);
		pVariable pv = pVariable(new Variable(0));
		pv->creator = this;

		pv->a += v1->a;
		return pv;
	}
};

void traverse(pVariable v)
{
	cout << v->a << endl;

	Function* f = v->creator;
	if (f == nullptr) return;

	for (int i = 0; i < f->v.size(); i++)
	{
		traverse(f->v[i]);
	}
}

int main(void)
{
	pVariable v1 = pVariable(new Variable(1));
	pVariable v2 = pVariable(new Variable(1));

	Function* f1 = new Function();
	Function* f2 = new Function();
	Function* f3 = new Function();

	pVariable r1 = f1->forward(v1, v2);
	pVariable r2 = f2->forward(r1);
	pVariable r3 = f3->forward(r2);

	traverse(r3);

	return 0;
}