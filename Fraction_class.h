#pragma once
#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction() {
        numerator = 0;
        denominator = 1;
    }

    Fraction(int num, int denom) {
        numerator = num;
        denominator = denom;
    }

    void setNumerator(int num) {
        numerator = num;
    }

    void setDenominator(int denom) {
        denominator = denom;
    }

    int getNumerator() const {
        return numerator;
    }

    int getDenominator() const {
        return denominator;
    }

    Fraction operator+(const Fraction& other) const {
        int newNumerator = (numerator * other.denominator) + (other.numerator * denominator);
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction operator+(int value) const {
        int newNumerator = numerator + (value * denominator);
        int newDenominator = denominator;
        return Fraction(newNumerator, newDenominator);
    }

    friend Fraction operator+(int value, const Fraction& fraction) {
        return fraction + value;
    }

    Fraction operator-(const Fraction& other) const {
        int newNumerator = (numerator * other.denominator) - (other.numerator * denominator);
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction operator-(int value) const {
        int newNumerator = numerator - (value * denominator);
        int newDenominator = denominator;
        return Fraction(newNumerator, newDenominator);
    }

    friend Fraction operator-(int value, const Fraction& fraction) {
        return Fraction(value * fraction.denominator - fraction.numerator, fraction.denominator);
    }

    Fraction operator*(const Fraction& other) const {
        int newNumerator = numerator * other.numerator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction operator*(int value) const {
        int newNumerator = numerator * value;
        return Fraction(newNumerator, denominator);
    }

    friend Fraction operator*(int value, const Fraction& fraction) {
        return fraction * value;
    }

    Fraction operator/(const Fraction& other) const {
        int newNumerator = numerator * other.denominator;
        int newDenominator = denominator * other.numerator;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction operator/(int value) const {
        int newDenominator = denominator * value;
        return Fraction(numerator, newDenominator);
    }

    friend Fraction operator/(int value, const Fraction& fraction) {
        return Fraction(value * fraction.denominator, fraction.numerator);
    }

    Fraction operator++(int) {
        Fraction temp(*this);
        numerator += denominator;
        return temp;
    }

    Fraction& operator++() {
        numerator += denominator;
        return *this;
    }

    Fraction operator--(int) {
        Fraction temp(*this);
        numerator -= denominator;
        return temp;
    }

    Fraction& operator--() {
        numerator -= denominator;
        return *this;
    }

    void print() const {
        cout << "\nÄðîáü: " << numerator << "/" << denominator << endl;
    }
};
