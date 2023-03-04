#pragma once
#include "Quadrilateral.hpp"

class Parallelogram : public Quadrilateral {
public:
	Parallelogram();
protected:
	Parallelogram(int ac, int bd, int AC, int BD, std::string _name);
};