#include "IsoscelesTriangle.hpp"

IsoscelesTriangle::IsoscelesTriangle() : IsoscelesTriangle(10, 20, 50, 60, "пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ") {}

IsoscelesTriangle::IsoscelesTriangle(int ac, int b, int AC, int B, std::string _name) : Triangle(ac, b, ac, AC, B, AC, _name) {}