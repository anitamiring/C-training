#include <iostream>
#include <functional>

class FuncObj
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

std::function<int(int)> makeLambda(int a)
{
	return [a](int b) {return a + b; };
}
int main(int argv, char* argc[])
{
	FuncObj obj;
	std::cout << obj(5, 4) << std::endl;

	auto lambda = [](int a, int b) {return a + b; };
	std::cout << lambda(3, 4) << std::endl;

	auto add3 = makeLambda(3);
	std::cout << add3(4) << std::endl;


}