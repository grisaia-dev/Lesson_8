#include "Quadrilateral.hpp"

Quadrilateral::Quadrilateral() : Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80, "Четырехугольник") {}

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string _name) : Figure(a, b, c, d, A, B, C, D, _name) { this->var_nums = 8; }