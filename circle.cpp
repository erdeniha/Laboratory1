#include "circle.h"
#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14
#endif

void calculateCircle(double radius, double angle, double &circumference, 
                     double &area, double &sectorArea) {
    circumference = 2 * M_PI * radius;
    area = M_PI * radius * radius;
    sectorArea = (M_PI * radius * radius * angle) / 360.0;
}

void handleCircle() {
    double radius, angle, circumference, area, sectorArea;
    
    std::cout << "Введите радиус окружности: ";
    std::cin >> radius;
    
    std::cout << "Введите угол сектора (в градусах): ";
    std::cin >> angle;
    
    if (radius > 0) {
        if (angle >= 0 && angle <= 360) {
            calculateCircle(radius, angle, circumference, area, sectorArea);
            
            std::cout << "Длина окружности: " << circumference << "\n";
            std::cout << "Площадь круга: " << area << "\n";
            std::cout << "Площадь кругового сектора: " << sectorArea << "\n";
        } else {
            std::cerr << "Ошибка: угол должен быть от 0 до 360 градусов!\n";
        }
    } else {
        std::cerr << "Ошибка: радиус должен быть положительным числом!\n";
    }
}