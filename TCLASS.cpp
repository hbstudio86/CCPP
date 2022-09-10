#include <iostream>
#include "TCLASS.h"

void TCLASS::tcadd(void) {
	counting++;
}
void TCLASS::tcreset(void) {
	counting = 0;
}
void TCLASS::tcprint(void)const {
	std::cout << counting << std::endl;
}
void TCLASS::operator<<(const int n) {
	this->counting += n;
}