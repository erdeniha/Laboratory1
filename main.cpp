#include <iostream>
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"  

void handleRectangle() {
    double length, width, perimeter, square, diagonal;
    std::cout << "Введите длину и ширину: ";
    
    if (std::cin >> length >> width && length > 0 && width > 0) {
        calculateRectangle(length, width, perimeter, square, diagonal);
        
        std::cout << "Периметр: " << perimeter << "\n";
        std::cout << "Площадь: " << square << "\n";
        std::cout << "Диагональ: " << diagonal << "\n";
    } else {
        std::cerr << "Ошибка: введите положительные числа!\n";
    }
}
int main() {
    int choice;
    std::cout << "1. Прямоугольник" << std::endl;
    std::cout << "2. Трегульник" << std::endl;
    std::cout << "3. Окружность" << std::endl;  
    std::cout << "Выберите фигуру: ";
    
    if (!(std::cin >> choice)) {
        std::cerr << "Ошибка: введите число!" << std::endl;
        return 1;
    }

    switch (choice) {
        case 1: { 
            handleRectangle();
            break;
        }
        case 2:{
            handleTriangle();
            break;
        }
        case 3:{  
            handleCircle();
            break;
        }
        default:
            std::cout << "Такого пункта в меню нет." << std::endl;
            break;
    }

    return 0;
}