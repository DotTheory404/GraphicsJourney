#include <iostream>

using PrintError = int;
typedef int PringError;

namespace day14{

	template <typename T>

	T add(T a, T b) {
		return a + b;
	}

	PrintError printData() {

		return 10;
	}

	template <int N>
	constexpr int factorial()
	{
		static_assert(N >= 0);

		int product{ 1 };
		for (int i{ 2 }; i <= N; ++i)
			product *= i;

		return product;
	}


}

int main() {

	//std::cout << day14::printData() << '\n';
	//std::cout << day14::add<>(2, 4);

	static_assert(day14::factorial<0>() == 1);
	static_assert(day14::factorial<3>() == 6);
	static_assert(day14::factorial<5>() == 120);

	//day14::factorial<-3>(); // should fail to compile

	return 0;
}
