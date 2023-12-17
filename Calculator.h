#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <vector>
#include <string>
#include "Calculation.h" // Including the Calculation class

using namespace std;

class Calculator {
    private:
        vector<Calculation> history;
        string fileName;

    public:
        Calculator(const string& fName); // Constructor
        void performCalculation(char operation, double num1, double num2);
        void displayHistory();
        void saveHistoryToFile(); // Method to save history to file
};
#endif // CALCULATOR_H