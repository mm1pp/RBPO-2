module;
#include <cmath>

module Biryukov1bib21076;

namespace RBPO {
	namespace Lab2 {
		namespace Variant2 {
			namespace Task3 {
				double f1(double);
			};
		};
	};
};

double RBPO::Lab2::Variant2::Task3::f1(double x) {
	return sqrt(2 * x + 2 * sqrt(x * x - 4)) / (sqrt(x * x - 4) + x + 2);
};
