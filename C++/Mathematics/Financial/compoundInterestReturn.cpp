#include <iostream>
#include <cmath>
#include "financialFunctions.h"
using namespace std;

double compoundInterestReturn(double principleInvestment, double interestRate, double compoundPerYear, double annualDuration)
{
    double convertedRate = (1+interestRate/compoundPerYear);
    double spanofCompound = (compoundPerYear*annualDuration);
    double powerRate = pow(convertedRate, spanofCompound);
    double totalReturn = principleInvestment * powerRate;

    return totalReturn;
}
