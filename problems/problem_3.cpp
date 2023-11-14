#include <string>
std:: string problemSolution3(float height, char S){
std:: string result;
switch (S) {
        case 'M':
            if (height < 1.70) {
                result = "Short";
            } else if (height>=1.70&&height < 1.85) {
                result = "Normal";
            } else {
                result = "Tall";
            }
            break;
        case 'F':
            if (height<1.60) {
                result = "Short";
            }else if(height>1.60&&height <1.75) {
                  result = "Normal";
            }else {
                result = "Tall";
            }
            break;
   }      
    return result;
}
