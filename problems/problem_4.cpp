#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string macAddress;

    // Input
    std::cout << "Enter MAC address (in x:x:xx:xx format): ";
    std::getline(std::cin, macAddress);

    // Tokenize the MAC address
    std::istringstream iss(macAddress);
    std::string token;
    std::getline(iss, token, ':');  // Read the first octet

    // Convert the first octet to an integer
    int firstOctet;
    std::istringstream(token) >> std::hex >> firstOctet;

    // Determine the type based on the rules
    std::string addressType;
    if (firstOctet % 2 == 0) {
        addressType = "Unicast";
    } else if (firstOctet == 0xFF) {
        addressType = "Broadcast";
    } else {
        addressType = "Multicast";
    }

    // Output the result
    std::cout << "Address Type: " << addressType << std::endl;

    return 0;
}
