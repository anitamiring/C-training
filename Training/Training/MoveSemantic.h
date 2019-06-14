#pragma once
#include <iostream>

class MoveSemantic
{
	
	int* ptr;
	unsigned int size;

public:
	MoveSemantic(unsigned int size);

	MoveSemantic(MoveSemantic& other);
	MoveSemantic& operator=(const MoveSemantic& other);

	MoveSemantic(MoveSemantic&& other) noexcept;
	MoveSemantic& operator=(MoveSemantic&& other) noexcept;

	~MoveSemantic();
};

