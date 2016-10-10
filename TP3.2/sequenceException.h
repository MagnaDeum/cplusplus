#pragma once
#include <stdexcept>
#include <string>
#include <iostream>
class sequenceException : public std::runtime_error
{
public:
	sequenceException();
	~sequenceException();
};

