#pragma once

#include "Triangle.hpp"

class EquilateralTriangle : public Triangle {
public:
	EquilateralTriangle();
protected:
	EquilateralTriangle(int abc, std::string _name);
};