#pragma once

#include <iostream>

class Myclass {
private:
	int n;
	int* pArr;
public:
	Myclass(int d, const int* ar = nullptr) : n(d) {
		pArr = new int[d];
		if (ar) memcpy(pArr, ar, sizeof(int) * n);
	}
	Myclass(const Myclass& mc) : n(mc.n) {
		pArr = new int[n];
		memcpy(pArr, mc.pArr, sizeof(int) * n);
	}
	~Myclass() { delete[] pArr; }
	Myclass add(const Myclass& mc)const {
		Myclass tmp(n);
		for (int i = 0; i < n; i++) {
			tmp.pArr[i] = pArr[i] + mc.pArr[i];
		}
		return tmp;
	}
	void print() const {
		std::cout << "[";
		for (int i = 0; i < n; i++) {
			std::cout << pArr[i] << " ";
		}
		std::cout << "]";
	}
};

