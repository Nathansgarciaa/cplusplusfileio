#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    if (!fin.is_open()) {
        cout << "Error opening input file." << endl;
        return 1;
    }

    if (!fout.is_open()) {
        cout << "Error opening output file." << endl;
        return 1;
    }

    string og;
    while (getline(fin, og)) {
        cout << "Choose an option:\n"
             << "1. Capitalize entire line\n"
             << "2. Lowercase entire line\n"
             << "3. Remove all punctuation/numbers" << endl;

        int choice;
        cin >> choice;

        string newLine;

        if (choice == 1) {
            for (char c : og) {
                newLine += toupper(c);
            }
        } else if (choice == 2) {
            for (char c : og) {
                newLine += tolower(c);
            }
        } else if (choice == 3) {
            for (char c : og) {
                if (isalpha(c)) {
                    newLine += c;
                }
            }
        } else {
            cout << "Invalid option. Skipping line." << endl;
            continue;
        }

        fout << newLine << endl;
    }

    fin.close();
    fout.close();

    return 0;
}
