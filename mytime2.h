#pragma once
#ifndef MYTIME2_H_
#define MYTIME2_H_

class Time {
private:
	int hours;
	int minutes;
	static int total;
public:
	Time();
	Time(int h, int m = 0);
	Time(const Time& t);
	~Time();
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time& t) const;
	Time operator-(const Time& t) const;
	Time operator*(double n) const;
	void Show() const;
	Time& operator++();
	Time operator++(int);
};

#endif