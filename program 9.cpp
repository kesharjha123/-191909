#include<iostream>

using namespace std;

class Complex
{
private:
    int a;
    int b;
public:

    Complex(int);   //Constructor overloading
    Complex(int, int); //
    Complex(Complex& obj);
    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }

};

Complex::Complex(int y) { // --> Parameterized constructor -- Overloading
    a = 10;
    b = y;
}

Complex::Complex(int x, int y) { // --> Parameterized constructor
    a = x;
    b = y;
}

Complex::Complex(Complex& obj) {
    a = obj.a;
    b = obj.b;
}

int main()
{
    Complex a(5);

    Complex b(4, 6); // Parameterized Constructor invoked

    Complex c = b; // copy constructor invoked

    a.printNumber();
    b.printNumber();
    c.printNumber();

    return 0;
}
