#include "Square.hpp"

Square::Square() : Square(20, "Квадрат") {}

Square::Square(int abcd, std::string _name) : Rectangle(abcd, abcd, _name) {}