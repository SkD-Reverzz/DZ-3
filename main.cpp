#include <iostream>
#include "Fraction_class.h"

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");

    Fraction fraction1(2, 3);
    Fraction fraction2(1, 4);

    Fraction addition = fraction1 + fraction2;
    Fraction subtraction = fraction1 - fraction2;
    Fraction multiplication = fraction1 * fraction2;
    Fraction division = fraction1 / fraction2;

    cout << "\nC�������: ";
    addition.print();

    cout << "\n���������: ";
    subtraction.print();

    cout << "\n���������: ";
    multiplication.print();

    cout << "\n�������: ";
    division.print();

    Fraction fraction3 = fraction1 + 5;
    Fraction fraction4 = 10 + fraction2;

    cout << "\n����� 3: ";
    fraction3.print();

    cout << "\n����� 4: ";
    fraction4.print();

    Fraction fraction5 = fraction1 - 2;
    Fraction fraction6 = 8 - fraction2;

    cout << "\n����� 5: ";
    fraction5.print();

    cout << "\n����� 6: ";
    fraction6.print();

    Fraction fraction7 = fraction1 * 3;
    Fraction fraction8 = 7 * fraction2;

    cout << "\n����� 7: ";
    fraction7.print();

    cout << "\n����� 8: ";
    fraction8.print();
}