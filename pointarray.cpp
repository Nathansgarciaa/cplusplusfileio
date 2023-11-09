#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    int starting_array_size = atoi(argv[1]);
    cout << "enter " << starting_array_size << " integers values:" << endl;
    
    int* starting_array = new int[starting_array_size];

    for (int i = 0; i < starting_array_size; ++i) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> starting_array[i];
    }

    cout << "original array: " << endl;
    for(int i = 0; i < starting_array_size; i++){
        cout << starting_array[i] << endl;
    }

    int sum = 0;
    int* pointer = starting_array;
    
    int min = *pointer;
    int max = *pointer;
    for(int k = 0; k < starting_array_size; k++){
        sum += *pointer;
        if(*pointer < min){
            min = *pointer;
        }
        if(*pointer > max){
            max = *pointer;
        }
        *pointer++;
    }
    cout << "sum of array elements: " << sum << endl;
    cout << "maximum value: " << max << endl;
    cout << "minimum value: " << min << endl;

    int* new_array = new int[starting_array_size];
    
    for(int j = 0; j < starting_array_size; j++){
        new_array[j] = *pointer;
        *pointer--;
    }
    cout << "reversed array: " << endl;
    for(int g = 0; g < starting_array_size; g++){
        cout << new_array[g] << " ";
    }

    delete[] starting_array;
    delete[] new_array;

    return 0;
}
