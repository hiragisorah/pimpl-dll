#include <iostream>
#include <memory>
#include <dynamic.h>
#include <static.h>

int main(void)
{
	{
		Dynamic dynamic;

		dynamic.set_a(10);
		dynamic.set_b(11);

		auto & a = dynamic.a();
		auto & b = dynamic.b();

		std::cout << a << std::endl;
		std::cout << b << std::endl;
	}

	{
		Static st;

		st.set_a(10);
		st.set_b(11);

		auto & a = st.a();
		auto & b = st.b();

		std::cout << a << std::endl;
		std::cout << b << std::endl;
	}

	rewind(stdin);
	getchar();

	return 0;
}