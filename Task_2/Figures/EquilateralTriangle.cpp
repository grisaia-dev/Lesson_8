#include "EquilateralTriangle.hpp"
#include "CatchError.hpp"

EquilateralTriangle::EquilateralTriangle() : EquilateralTriangle(30, "Равносторонний треугольник") {}

EquilateralTriangle::EquilateralTriangle(int abc, std::string _name) : Triangle(abc, abc, abc, 60, 60, 60, _name) {
    if ((EquilateralTriangle::corner_a != EquilateralTriangle::corner_c) && (EquilateralTriangle::corner_b != EquilateralTriangle::corner_a)) {
        throw CatchError("Углы не равны 60");
        if ((EquilateralTriangle::side_a != EquilateralTriangle::side_b) && (EquilateralTriangle::side_c != EquilateralTriangle::side_a))
            throw CatchError("Стороны не равны");
    }
}