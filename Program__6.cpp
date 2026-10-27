#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }

    // Unary operator overloading
    Complex operator++() {
        ++real;
        ++imag;
        return *this;
    }

    Complex operator--() {
        --real;
        --imag;
        return *this;
    }

    // Binary operator overloading
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator-(Complex c) {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "First complex number:\n";
    c1.input();

    cout << "Second complex number:\n";
    c2.input();

    c3 = c1 + c2;
    cout << "Addition: ";
    c3.display();

    c3 = c1 - c2;
    cout << "Subtraction: ";
    c3.display();

    ++c1;
    cout << "After incrementing first number: ";
    c1.display();

    --c2;
    cout << "After decrementing second number: ";
    c2.display();

    return 0;
}