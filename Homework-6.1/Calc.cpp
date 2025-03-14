#include "Calc.h"
#include <cmath>

double add(double& num1, double& num2) {
    double inum = num1 + num2;
    return (inum);
};

double subtract(double& num1, double& num2) {
    double inum = num1 - num2;
    return (inum);
};

double multiply(double& num1, double& num2) {
    double inum = num1 * num2;
    return (inum);
};

double divide(double& num1, double& num2) {
    double inum = num1 / num2;
    return (inum);
};

double expPow(double& num1, double& num2) {
    double inum = pow(num1, num2);
    return (inum);
};