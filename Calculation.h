#ifndef CALCULATION_H
#define CALCULATION_H

#include <string>

class Calculation {
    private:
        char operation;
        double num1, num2, result;

    public:
        Calculation();
        Calculation(char op, double n1, double n2);
        void display();
        std::string getDetails() const;
};

#endif // CALCULATION_H
