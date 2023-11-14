#include <iostream>
#include <string>

int main() {
    char sex;
    float height;

    std::cout << "Enter sex (M/F) and height (in meters): ";
    std::cin >> sex >> height;

    std::string description;

    if (sex == 'M') {
        if (height < 1.70) {
            description = "Short";
        } else if (height < 1.85) {
            description = "Normal";
        } else {
            description = "Tall";
        }
    } else if (sex == 'F') {
        if (height < 1.60) {
            description = "Short";
        } else if (height < 1.75) {
            description = "Normal";
        } else {
            description = "Tall";
        }
    } else {
        std::cout << "Invalid input for sex. Please enter 'M' or 'F'." << std::endl;
        return 1;  // Exit with an error code
    }

    std::cout << "Output: " << description << std::endl;

    return 0;
}
