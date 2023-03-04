#include "Parallelogram.hpp"

Parallelogram::Parallelogram() : Parallelogram(20, 30, 30, 40, "Параллелограмм") {}

Parallelogram::Parallelogram(int ac, int bd, int AC, int BD, std::string _name) : Quadrilateral(ac, bd, ac, bd, AC, BD, AC, BD, _name) {}