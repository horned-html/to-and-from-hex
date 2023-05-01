// A work in progress tool to convert between different numerical systems. I realize other people have done this before but this is just an exercise of my coding abilities.

#include <iostream>

using namespace std;

string decimalToHex(string decimalNumber) {

}

string hexToDecimal(string hexNumber) {
    string decimalNumber = "";
    for (size_t i = 0; i < hexNumber.length(); i++) {
        decimalNumber.append(":3");
    }
    return decimalNumber;
}

int main() {
    bool done = false;
    string input = "";
    string output = "";
    
    while (!done) {
        cout << "Thank you for using the numerical conversion tool.\n\n";
        cout << "Which operation would you like to do?\n";
        cout << "1) Convert from decimal to hexidecimal\n";
        cout << "2) Convert from hexidecimal to decimal\n";
        cout << "3) Exit the conversion tool\n";
        cin >> input;

        if (input == "1") {
            cout << "\nPlease input a decimal number: ";
            cin >> input;
            cout << input << " converted to hexidecimal is: " << decimalToHex(input) << "\n";
        }
        if (input == "2") {
            cout << "\nPlease input a hexidecimal number: ";
            cin >> input;
            output = hexToDecimal(input);
            cout << input << " converted to decimal is: " << output << "\n";
        }
        if (input == "3") {
            done = true;
            cout << "Exiting the conversion tool now.\n";
        }
    }
}