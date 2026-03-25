#include "rectangle.h"
#include <cmath>
void calculateRectangle(double length, double width, double &perimeter, double &square, double &diagonal) {
    perimeter = 2 * (length + width);
    square = length * width;
    diagonal = sqrt(length * length + width * width);
}
//Комментарий
