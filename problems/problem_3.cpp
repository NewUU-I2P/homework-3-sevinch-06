#include <string>

std::string problemSolution3(float height, char S) {
   std::string height1;
    printf("Enter the prices of three products: ");
    scanf("%f %f %f", &price1, &price2, &price3);
 float maxPrice = (price1 > price2) ? ((price1 > price3) ? price1 : price3) : ((price2 > price3) ? price2 : price3);
printf("The maximum number is %.2f\n", maxPrice);

    return 0;
}
