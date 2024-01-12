module Biryukov1bib21076:A;

namespace RBPO {
	namespace Lab2 {
		namespace Variant2 {
			namespace Task4 {
				double a(long long);
			};
		};
	};
};

double RBPO::Lab2::Variant2::Task4::a(long long i) {
	return (i % 2 ? -1 : 1) * (i + 1) / double(i * i + 2 * i + 1);
};