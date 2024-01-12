module Biryukov1bib21076:F3;

namespace RBPO {
	namespace Lab2 {
		namespace Variant2 {
			namespace Task4 {
				double f3(unsigned long long);
			};
		};
	};
};

double RBPO::Lab2::Variant2::Task4::f3(unsigned long long n) {
	double sum = a(0);
	for (unsigned long long i = 0; i < n; sum += a(++i));
	return sum;
};
