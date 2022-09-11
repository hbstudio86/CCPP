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
TCLASS TCLASS::operator++() {
	this->counting++;
	return *this;
}
TCLASS TCLASS::operator++(int) {
	TCLASS prev(this->counting);
	this->counting++;
	return prev;
}