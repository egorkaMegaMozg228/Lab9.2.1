#include "input_output.h"

void getInput(double& x, double& y, double& z) {
    std::cout << "Enter value for x: "; std::cin >> x;
    std::cout << "Enter value for y: "; std::cin >> y;
    std::cout << "Enter value for z: "; std::cin >> z;
}

int displayResult(double w) {
    std::cout << "The result w = " << w << std::endl;
    return 0;
}
