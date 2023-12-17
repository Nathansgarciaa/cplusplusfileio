#include "Calculator.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

Calculator::Calculator(const string& fName) {
    fileName = fName;
}

void Calculator::performCalculation(char operation, double num1, double num2) {
    Calculation calc(operation, num1, num2);
    history.push_back(calc);
}

void Calculator::displayHistory() {
    for (size_t i = 0; i < history.size(); ++i) {
        history[i].display();
    }
}

void Calculator::saveHistoryToFile() {
    ofstream file(fileName.c_str());
    if (file.is_open()) {
        for (size_t i = 0; i < history.size(); ++i) {
            file << history[i].getDetails() << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file: " << fileName << endl;
    }
}

