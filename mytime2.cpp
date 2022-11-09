#include <iostream>
#include "mytime2.h"

using namespace std;

int Time::total = 0;

Time::Time() {
	hours = minutes = 0;
	cout << "생성자A 실행" << endl;
	total++;
	cout << "Total : " << total << endl;
}

Time::Time(int h, int m) {
	hours = h;
	minutes = m;
	cout << "생성자B 실행" << endl;
	total++;
	cout << "Total : " << total << endl;
}

Time::Time(const Time& t) {
	hours = t.hours;
	minutes = t.minutes;
	cout << "생성자C 실행" << endl;
	total++;
	cout << "Total : " << total << endl;
}

Time::~Time() {
	cout << "파괴자 실행" << endl;
	total--;
	cout << "Total : " << total << endl;
}

void Time::AddMin(int m) {
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h) {
	hours += h;
}

void Time::Reset(int h, int m) {
	hours = h;
	minutes = m;
}

Time Time::operator+(const Time& t) const {
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator-(const Time& t) const {
	Time diff;
	int tot1, tot2;
	tot1 = t.minutes + 60 * t.hours;
	tot2 = minutes + 60 * hours;
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;
	return diff;
}

Time Time::operator*(double mult) const {
	Time result;
	long totalminutes = hours * mult * 60 + minutes * mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}

void Time::Show() const {
	cout << hours << "시간, " << minutes << "분";
}

Time& Time::operator++() {
	hours++;
	return *this;
}

Time Time::operator++(int) {
	Time tmp(hours);
	++(*this);
	return tmp;
}