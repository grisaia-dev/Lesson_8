#pragma once
#include "Triangle.hpp"

class RightTriangle : public Triangle {
public:
	RightTriangle();
protected:
	RightTriangle(int a, int b, int c, int A, int B, std::string _name);
};