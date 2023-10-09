#include <iostream>
#include <cmath>

int main() {
    double a, b, c, Xstart, Xend, H;

    // Введення значень з клавіатури
    std::cout << "Enter a: ";
    std::cin >> a;
    
    std::cout << "Enter b: ";
    std::cin >> b;

    std::cout << "Enter c: ";
    std::cin >> c;

    std::cout << "Enter Xstart: ";
    std::cin >> Xstart;

    std::cout << "Enter Xend: ";
    std::cin >> Xend;

    std::cout << "Enter H: ";
    std::cin >> H;

    // Вивід заголовка таблиці
    std::cout << "X\t|\tF(x)" << std::endl;
    std::cout << "-----------------" << std::endl;

    // Обчислення та вивід значень функції
    for (double x = Xstart; x <= Xend; x += H) {
        double result;
        if (x < 3 && b != 0) {
            result = a * std::pow(x, 2) - b * x + c;
        } else if (x > 3) {
            result = (x - a) / (x - c);
        } else {
            result = x / c;
        }

        // Додаткова умова
        if (!((int(a) || int(b)) && !(int(a) % 2 == int(c) % 2)) && result != 0) {
            std::cout << x << "\t|\t" << result << std::endl;
        }
    }

    return 0;
}
