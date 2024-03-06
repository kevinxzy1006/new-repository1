#include <iostream>
#include <string>

//Functions to convert decimal to binary
std::string decimalToBinary(int decimal) {
    std::string binary = ""; //To store the binary

    if (decimal == 0) {
        return "0"; //If the input decimal is 0, return "0"
    }

    while (decimal > 0) {
        int reminder = decimal % 2; //Calculate the reminder
        binary = std::to_string(reminder) + binary;// Convert the reminder to a character and prepend it to the binary string
        decimal /= 2; 
    }

    return binary; //return the finally binary string
}

int main(void) {
    int decimal;
    std::cout << "Enter a decimal number: "; //get user input
    std::cin >> decimal; //User input for decimal number

    std::string binary = decimalToBinary(decimal); //call the function
    std::cout << "Binary representation: " << binary << std::endl; //Output the binary

    return 0;
}
