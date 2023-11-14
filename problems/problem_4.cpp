#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    std::string result;
   std::cout << "Enter MAC address (in x:x:xx:xx format): ";
    std::getline(std::cin, macAddress);

    std::istringstream iss(macAddress);
    std::string token;
    std::getline(iss, token, ':');  // Read the first octet

    int firstOctet;
    std::istringstream(token) >> std::hex >> firstOctet;


    std::string addressType;
    if (firstOctet % 2 == 0) {
        addressType = "Unicast";
    } else if (firstOctet == 0xFF) {
        addressType = "Broadcast";
    } else {
        addressType = "Multicast";
    }

    std::cout << "Address Type: " << addressType << std::endl;

    return 0;
}
