#pragma once
#include "Figure.hpp"

class Quadrilateral : public Figure {
public:
	Quadrilateral();
protected:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string _name);
};