#include "RightTriangle.hpp"
#include "CatchError.hpp"

RightTriangle::RightTriangle() : RightTriangle(10, 20, 30, 30, 60, "Прямоугольный треугольник") {}

RightTriangle::RightTriangle(int a, int b, int c, int A, int B, std::string _name) : Triangle(a, b, c, A, B, 80, _name) {
    if (RightTriangle::get_corner_c() != 90) throw CatchError("Угол 'c' не равен 90");
}