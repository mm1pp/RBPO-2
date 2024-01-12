module;
#include <cmath>

module Biryukov1bib21076;

namespace RBPO {
	namespace Lab2 {
		namespace Variant2 {
			namespace Task3 {
				double f2(double);
			};
		};
	};
};

double RBPO::Lab2::Variant2::Task3::f2(double x) {
	return x < 4 ? cos(abs(2 + x)) : sqrt(x * x + 4);
};
