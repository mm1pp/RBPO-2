module;
#include <cmath>

module Biryukov1bib21076;

namespace RBPO {
	namespace Lab2 {
		namespace Variant2 {
			namespace Task2 {
				double f1(double);
				double f2(double);
				double f3(unsigned long long);
				double f4(double);
				double a(long long);
			};
		};
	};
};

double RBPO::Lab2::Variant2::Task2::f1(double x) {
	return sqrt(2 * x + 2 * sqrt(x * x - 4)) / (sqrt(x * x - 4) + x + 2);
};

double RBPO::Lab2::Variant2::Task2::f2(double x) {
	if (x < 4)
		return cos(abs(2 + x));
	return sqrt(x * x + 4);
};


double RBPO::Lab2::Variant2::Task2::f3(unsigned long long n) {
	double sum = a(0); unsigned long long i = 0;
	while (i < n)
		sum += a(++i);
	return sum;
};

double RBPO::Lab2::Variant2::Task2::f4(double eps) {
	double sum = a(0), temp = a(1), temp1 = a(2); unsigned long long i = 2;
	while (eps < abs(temp - temp1))
		sum += temp, temp = temp1, temp1 = a(++i);
	return sum;
};


double RBPO::Lab2::Variant2::Task2::a(long long i) {
	return (i % 2 ? -1 : 1) * (i + 1) / double(i * i + 2 * i + 1);
};