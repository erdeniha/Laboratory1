#include "triangle.h"
#include <iostream>
#include <cmath>
bool isValidTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}
double calculatePerimeter(double a, double b, double c) {
    return a + b + c;
}
double calculateArea(double a, double b, double c) {
    double p = calculatePerimeter(a, b, c) / 2; // полупериметр
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
bool isIsosceles(double a, double b, double c) {
    return (a == b) || (a == c) || (b == c);
}
void handleTriangle() {
    double a, b, c;
    std::cout << "Введите три стороны треугольника: ";
    if (std::cin >> a >> b >> c && a > 0 && b > 0 && c > 0) {
        if (isValidTriangle(a, b, c)) {
            double perimeter = calculatePerimeter(a, b, c);
            double area = calculateArea(a, b, c);
            bool isosceles = isIsosceles(a, b, c);
            
            std::cout << "Периметр: " << perimeter << "\n";
            std::cout << "Площадь: " << area << "\n";
            std::cout << "Треугольник " << (isosceles ? "является" : "не является") << " равнобедренным\n";
        } else {
            std::cerr << "Ошибка: треугольник с такими сторонами не существует!\n";
        }
    } else {
        std::cerr << "Ошибка: введите положительные числа!\n";
    }
}
//Комментарий