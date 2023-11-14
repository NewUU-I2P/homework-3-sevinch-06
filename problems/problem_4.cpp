#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    std::string result;
    int counter=0;
    for ( int i=0; i<18; i+=3){
        if (macAddress[i]=='F' && macAddress[i+1]=='F'){
            counter+=2;
            break;
        }
        if (counter==12){
            result = "broadcast";
            break;
        }
    }
     if (isdigit(macAddress[1]) == true) {
         if (macAddress[1]%2 == 0) {
             result = "Unicast";
         }
         else {
             result = "Multicast";
         }
     }
     else if (int(macAddress[1]+1)%2==0){
         result = "Unicast";
     }
     else {
         result = "Multicast";
     }

}
 return result;
}
