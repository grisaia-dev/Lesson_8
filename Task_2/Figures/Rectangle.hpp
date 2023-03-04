#pragma once
#include "Quadrilateral.hpp"

class Rectangle : public Quadrilateral {
public:
	Rectangle();
protected:
	Rectangle(int ac, int bd, std::string _name);
};