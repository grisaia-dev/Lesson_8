#include "Figure.hpp"

Figure::Figure() {
	this->side_a = 0; this->side_b = 0; this->side_c = 0; this->side_d = 0;
	this->corner_a = 0; this->corner_b = 0; this->corner_c = 0; this->corner_d = 0;
	this->name = "";
}
//Figure(0, 0, 0, 0, 0, 0, 0, 0, "") {}

Figure::Figure(int a, int b, int c, int d, int A, int B, int C, int D, std::string _name) {
	this->side_a = a; this->side_b = b; this->side_c = c; this->side_d = d;
	this->corner_a = A; this->corner_b = B; this->corner_c = C; this->corner_d = D;
	this->name = _name;
}
Figure::Figure(int a, int b, int c, int A, int B, int C, std::string _name) {
	this->side_a = a; this->side_b = b; this->side_c = c;
	this->corner_a = A; this->corner_b = B; this->corner_c = C;
	this->name = _name;
}

std::string Figure::get_name() { return this->name; }
int Figure::get_side_a() { return this->side_a; }
int Figure::get_side_b() { return this->side_b; }
int Figure::get_side_c() { return this->side_c; }
int Figure::get_side_d() { return this->side_d; }
int Figure::get_corner_a() { return this->corner_a; }
int Figure::get_corner_b() { return this->corner_b; }
int Figure::get_corner_c() { return this->corner_c; }
int Figure::get_corner_d() { return this->corner_d; }
int Figure::get_var_nums() { return this->var_nums; }

