#include <iostream>
#include "MoveSemantic.h"

int main(int argv, char* argc)
{
	MoveSemantic m1(5u);
	auto m2 = m1;
	auto m3(m1);
	auto m4 = MoveSemantic(5u);
	auto m5(std::move(m4));

	return 0;

}