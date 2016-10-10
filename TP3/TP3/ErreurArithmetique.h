#pragma once
#include <stdexcept>
#include <string>
#include <iostream>
class ErreurArithmetique : public std::runtime_error
{
public:
	ErreurArithmetique();
	~ErreurArithmetique();
};

