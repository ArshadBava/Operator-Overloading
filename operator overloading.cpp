#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real;
    double imaginary;
public:
    ComplexNumber(double r = 0, double i = 0) : real(r), imaginary(i) {}

    // Overload the + operator
    ComplexNumber operator + (const ComplexNumber& other) {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }

    void display() const {
        cout << real << " + " << imaginary << "i" << endl;
    }

    // Method to input values
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }
};

int main() {
    ComplexNumber c1, c2;
    
    cout << "Enter first complex number:" << endl;
    c1.input();

    cout << "Enter second complex number:" << endl;
    c2.input();

    ComplexNumber c3 = c1 + c2;  // Use overloaded + operator

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}

