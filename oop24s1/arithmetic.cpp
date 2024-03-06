#include <iostream>
#include <bitset>

// Function to perform binary addition
std::bitset<8> binaryAddition(std::bitset<8> num1, std::bitset<8> num2) {
    return num1 + num2;
}

// Function to perform binary subtraction
std::bitset<8> binarySubtraction(std::bitset<8> num1, std::bitset<8> num2) {
    return num1 - num2;
}

// Function to perform left shift on a binary number
std::bitset<8> leftShift(std::bitset<8> num, int shift) {
    return num << shift;
}

// Function to perform right shift on a binary number
std::bitset<8> rightShift(std::bitset<8> num, int shift) {
    return num >> shift;
}

int main() {
    std::bitset<8> num1("10101010"); // Binary number 1
    std::bitset<8> num2("01010101"); // Binary number 2

    // Perform binary addition
    std::bitset<8> sum = binaryAddition(num1, num2);
    std::cout << "Binary Addition: " << sum << std::endl;

    // Perform binary subtraction
    std::bitset<8> difference = binarySubtraction(num1, num2);
    std::cout << "Binary Subtraction: " << difference << std::endl;

    // Perform left shift
    std::bitset<8> leftShifted = leftShift(num1, 2);
    std::cout << "Left Shift: " << leftShifted << std::endl;

    // Perform right shift
    std::bitset<8> rightShifted = rightShift(num1, 2);
    std::cout << "Right Shift: " << rightShifted << std::endl;

    return 0;
}
