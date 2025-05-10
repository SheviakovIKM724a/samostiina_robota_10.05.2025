#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
    double a, b, c;

    bool isValid() const {
        return (a + b > c) && (a + c > b) && (b + c > a);
    }
     
public:
    // Конструктор
    Triangle(double side1, double side2, double side3) {
        a = side1;
        b = side2;
        c = side3;

        if (!isValid()) {
            cerr << "Невірні сторони трикутника!" << endl;
            a = b = c = 0;
        }
    }

    // Метод обчислення периметра
    double getPerimeter() const {
        return a + b + c;
    }

    // Метод обчислення площі за формулою Герона
    double getArea() const {
        double s = getPerimeter() / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    // Метод перевірки, чи є трикутник прямокутним
    bool isRightAngled() const {
        double aa = a * a, bb = b * b, cc = c * c;
        return fabs(aa + bb - cc) < 1e-6 ||
            fabs(aa + cc - bb) < 1e-6 ||
            fabs(bb + cc - aa) < 1e-6;
    }

    // Геттери
    double getA() const { return a; }
    double getB() const { return b; }
    double getC() const { return c; }
};

int main() {

    system("chcp 1251 > nul"); //підключення української мови

    Triangle t(3, 4, 5);

    cout << "Периметр: " << t.getPerimeter() << endl;
    cout << "Площа: " << t.getArea() << endl;
    cout << "Прямокутний: " << (t.isRightAngled() ? "Так" : "Ні") << endl;

    return 0;
}
