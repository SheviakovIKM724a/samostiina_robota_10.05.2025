#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    double averageGrade;

public:
    // Сеттер для імені
    void setName(string n) {
        name = n;
    }

    // Геттер для імені
    string getName() {
        return name;
    }

    // Сеттер для віку
    void setAge(int a) {
        if (a >= 0)
            age = a;
        else
            cout << "Некоректний вік!" << endl;
    }

    // Геттер для віку
    int getAge() {
        return age;
    }

    // Сеттер для середнього балу
    void setAverageGrade(double grade) {
        if (grade >= 0.0 && grade <= 12.0)
            averageGrade = grade;
        else
            cout << "Некоректний бал!" << endl;
    }

    // Геттер для середнього балу
    double getAverageGrade() {
        return averageGrade;
    }

    // Метод для виводу інформації про студента
    void displayInfo() {
        cout << "Ім'я: " << name << endl;
        cout << "Вік: " << age << endl;
        cout << "Середній бал: " << averageGrade << endl;
    }
};

int main() {

    system("chcp 1251 > nul"); //підключення української мови

    Student s1;

    s1.setName("Олександр");
    s1.setAge(20);
    s1.setAverageGrade(10.5);

    s1.displayInfo();

    return 0;
}
