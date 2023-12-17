#include "Calculation.h"
#include <iostream>
#include <sstream>
using namespace std;

Calculation::Calculation() {
    operation = '+';
    num1 = 0;
    num2 = 0;
    result = 0;
}

Calculation::Calculation(char op, double n1, double n2) {
    operation = op;
    num1 = n1;
    num2 = n2;
    result = 0;
}


void Calculation::display() {
    cout << "Operation: " << operation << ", Numbers: " << num1 << ", " << num2 << ", Result: " << result << endl;
}

string Calculation::getDetails() const {
    ostringstream oss;
    oss << "Operation: " << operation << ", Numbers: " << num1 << ", " << num2 << ", Result: " << result;
    return oss.str();
}
