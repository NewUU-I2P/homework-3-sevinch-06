#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string macAddress;

   std::stringstream ss(macAddress);
std::string hexNumber;
int firstOctet;

std::getline(ss, hexNumber, ':');
std::stringstream(hexNumber)>>std::hex>> firstOctet;

std::string addressType;
if (firstOctet % 2 == 0){
   addressType="Unicast";
}else if (firstOctet==0xFF){
   addressType="Broadcast";
}else{
   addressType="Multicast";
}
return 0;
}
