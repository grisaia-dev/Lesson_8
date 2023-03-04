#include "Rhombus.hpp"

Rhombus::Rhombus() : Rhombus(30, 40, "Ромб") {}

Rhombus::Rhombus(int AC, int BD, std::string _name) : Parallelogram(30, 30, AC, BD, _name) {}