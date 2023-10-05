#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream fin("test.txt");
    
    if (!fin.is_open()) {
        cerr << "Error opening the file!" << endl;
        return 1; // return an error code
    }

    string og;
    getline(fin, og);

    fin.close();

    string newTxt;

    for (char c : og) {
        if (isupper(c)) {
            newTxt += tolower(c);
        } else if (islower(c)) {
            newTxt += toupper(c);
        } else {
            newTxt += c;  // Keep non-alphabetic characters unchanged
        }
    }

    ofstream fout("test.txt", ios::out);

    if (!fout.is_open()) {
        cerr << "Error opening the file for writing!" << endl;
        return 1; // return an error code
    }

    fout << newTxt << endl;

    fout.close();

    cout << "File edited successfully." << endl;

    return 0;
}
