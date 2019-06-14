#include "MoveSemantic.h"


MoveSemantic::MoveSemantic(unsigned int _size) :size{ _size }, ptr{ new int[size] }
{
	std::cout << "Constructor" << std::endl;
}

MoveSemantic::MoveSemantic(MoveSemantic& other) : size{ other.size }, ptr{ new int[other.size] }
{
	std::cout << "Copy Constructor" << std::endl;
}
MoveSemantic& MoveSemantic::operator=(const MoveSemantic& other)
{
	std::cout << "Copy Assingment Operator" << std::endl;
	this->ptr = new int[other.size];
	size = other.size;
	return *this;
}

MoveSemantic::MoveSemantic(MoveSemantic&& other) noexcept :size{ other.size }, ptr{ std::exchange(ptr, nullptr) }
{
	std::cout << "Move Constructor" << std::endl;
}
MoveSemantic& MoveSemantic::operator=(MoveSemantic&& other) noexcept
{
	ptr = std::exchange(other.ptr, nullptr);
	size = std::exchange(other.size, 0);
	std::cout << "Move Assignment Operator" << std::endl;
	return *this;
}

MoveSemantic::~MoveSemantic()
{
	delete []ptr;
	std::cout << "Destructor" << std::endl;
}