#pragma once
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class LongDouble {
	const size_t divDigits = 1000;

	int sign;
	vector<int> digits;
	long exponent;

	void initFromString(const std::string& s);
	void normalize();
	void removeZeroes();

public:
	LongDouble();
	LongDouble(const LongDouble& x);
	LongDouble(long double value);
	LongDouble(const std::string& s);
	~LongDouble();

	LongDouble& operator=(const LongDouble& x);

	bool operator>(const LongDouble& x) const;
	bool operator<(const LongDouble& x) const;
	bool operator>=(const LongDouble& x) const;
	bool operator<=(const LongDouble& x) const;
	bool operator==(const LongDouble& x) const;
	bool operator!=(const LongDouble& x) const;

	LongDouble operator-() const;

	LongDouble operator+(const LongDouble& x) const;
	LongDouble operator-(const LongDouble& x) const;
	LongDouble operator*(const LongDouble& x) const;
	LongDouble operator/(const LongDouble& x) const;

	LongDouble& operator+=(const LongDouble& x);
	LongDouble& operator-=(const LongDouble& x);

	LongDouble operator++(int);
	LongDouble operator--(int);

	LongDouble& operator++();
	LongDouble& operator--();

	LongDouble inverse() const;
	LongDouble abs() const;

	friend ostream& operator<<(ostream& os, const LongDouble& value);
};