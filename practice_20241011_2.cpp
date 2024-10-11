
// Math related function

#include <iostream> // This is called "header file"
#include <cmath> // Header file for functions other than max() and min()

int main() {

    double x = 3.6;
    double y = 4.2;
    double z = 2;
    double res_1;
    double res_2;
    double res_3;
    double res_4;
    double res_5;
    double res_6;
    double res_7;
    double res_8;

    res_1 = std::max(x, y);
    res_2 = std::min(x, y);
    res_3 = pow(x, z);
    res_4 = sqrt(2 * 2);
    res_5 = abs(-6.65); // abs() truncates results
    res_6 = round(x);
    res_7 = ceil(y);
    res_8 = floor(x);

    std::cout << res_1 << std::endl;
    std::cout << res_2 << std::endl;
    std::cout << res_3 << std::endl;
    std::cout << res_4 << std::endl;
    std::cout << res_5 << std::endl;
    std::cout << res_6 << std::endl;
    std::cout << res_7 << std::endl;
    std::cout << res_8 << std::endl;

    return 0;
}