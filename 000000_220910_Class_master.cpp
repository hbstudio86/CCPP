#include <iostream>
#include "TCLASS.h"

using namespace std;

int main(void) {

	TCLASS t1;
	t1.tcprint();
	t1.tcadd();
	t1.tcprint();
	t1.tcreset();
	t1.tcprint();
	t1<<3;
	t1.tcprint();
	return 0;
}