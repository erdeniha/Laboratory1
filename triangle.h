#ifndef TRIANGLE_H
#define TRIANGLE_H
// Функция для проверки существования треугольника
bool isValidTriangle(double a, double b, double c);
// Функция для вычисления периметра
double calculatePerimeter(double a, double b, double c);
// Функция для вычисления площади по формуле Герона
double calculateArea(double a, double b, double c);
// Функция для проверки на равнобедренность
bool isIsosceles(double a, double b, double c);
// Функция для обработки ввода и вывода
void handleTriangle();
#endif