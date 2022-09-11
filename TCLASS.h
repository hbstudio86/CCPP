#pragma once
#include <iostream>

class TCLASS {
private:
	int counting;
public:
	TCLASS():counting(0){}
	TCLASS(int n) { counting = n; }
	~TCLASS(){}
	void tcreset(void);
	void tcadd(void);
	void tcprint(void)const;
	void operator<<(const int);
	TCLASS operator++();
	TCLASS operator++(int);
};
