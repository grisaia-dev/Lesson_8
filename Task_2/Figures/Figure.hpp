#pragma once

#include <string>

class Figure {
public:
	Figure();

	std::string get_name();
    int get_side_a();
    int get_side_b();
    int get_side_c();
    int get_side_d();
    int get_corner_a();
    int get_corner_b();
    int get_corner_c();
    int get_corner_d();
    int get_var_nums();
protected:
    Figure(int a, int b, int c, int d, int A, int B, int C, int D, std::string _name); // Для четырехугольников
    Figure(int a, int b, int c, int A, int B, int C, std::string _name); // Для треугольников

	std::string name;
    // Стороны
    int side_a, side_b, side_c, side_d;
    // Углы
    int corner_a, corner_b, corner_c, corner_d;

    int var_nums = 0;
};