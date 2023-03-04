#pragma once
#include "Rectangle.hpp"

class Square : public Rectangle {
public:
	Square();
protected:
	Square(int abcd, std::string _name);
};