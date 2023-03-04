#pragma once
#include "Parallelogram.hpp"

class Rhombus : public Parallelogram {
public:
	Rhombus();
protected:
	Rhombus(int AC, int BD, std::string _name);
};