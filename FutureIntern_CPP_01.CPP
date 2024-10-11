#include <iostream> // For input/output operations
using namespace std;
int main() {
    double num1, num2; // Variables to hold the two numbers
    char operation;    // Variable to store the user's operation choice
    double result;     // Variable to store the result

    // Ask the user for the two numbers
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;

    // Ask the user for the operation they want to perform
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    // Perform the calculation based on the user's choice
    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Handle division by zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1; // Exit the program with an error code
            }
            break;
        default:
            // Handle invalid operations
            cout << "Error: Invalid operation!" << endl;
            return 1;
    }

    // Display the result of the operation
    cout << "Result: " << result << endl;

    return 0;
}


