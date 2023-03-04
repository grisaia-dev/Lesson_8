#include <iostream>
#include "Figures/Figure.hpp"
#include "Figures/Triangle.hpp"
#include "Figures/RightTriangle.hpp"
#include "Figures/EquilateralTriangle.hpp"
#include "Figures/IsoscelesTriangle.hpp"
#include "Figures/Quadrilateral.hpp"
#include "Figures/Rectangle.hpp"
#include "Figures/Parallelogram.hpp"
#include "Figures/Square.hpp"
#include "Figures/Rhombus.hpp"
#include "Figures/CatchError.hpp"

void print_info(Figure* f) {
    if (f->get_var_nums() == 6) {
        std::cout << f->get_name() << " (стороны " << f->get_side_a() << ", " << f->get_side_b() << ", " << f->get_side_c() << "; ";
        std::cout << "углы " << f->get_corner_a() << ", " << f->get_corner_b() << ", " << f->get_corner_c() << ")" << " cоздан" << std::endl;
    } else if (f->get_var_nums() == 8) {
        std::cout << f->get_name() << " (стороны " << f->get_side_a() << ", " << f->get_side_b() << ", " << f->get_side_c() << f->get_side_d() << "; ";
        std::cout << "углы " << f->get_corner_a() << ", " << f->get_corner_b() << ", " << f->get_corner_c() << f->get_corner_d() << ")" << " cоздан" << std::endl;

    }
}

int main() {
    setlocale(LC_ALL, "Rus");

    try {
        Triangle t;
        print_info(&t);

        RightTriangle rt;
        print_info(&rt);

        EquilateralTriangle et;
        print_info(&et);

    } catch (const CatchError& ce) {
        std::cout << "Ошибка создания фигуры. Причина: " << ce.what() << std::endl;
    }
    return 0;
}