#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
    string fileName;
    cout << "Enter file name for saving history: ";
    cin >> fileName;

    Calculator calc(fileName);
    char operation;
    double num1, num2;

    while (true) {
        cout << "Enter an arithmetic operation (+ - * /) or 'q' to quit: ";
        cin >> operation;

        if (operation == 'q') break;

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        calc.performCalculation(operation, num1, num2);
    }

    calc.displayHistory();
    calc.saveHistoryToFile(); // Saving the history to file
    return 0;
}
