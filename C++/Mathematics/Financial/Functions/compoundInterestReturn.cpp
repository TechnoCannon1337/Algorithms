#include <iostream>
#include <cmath>
#include <string>
#include "financialFunctions.h"
using namespace std;

double COMPOUNDINTEREST::compoundInterestReturn(double principleInvestment, double interestRate, double compoundPerYear, double annualDuration)
{
    double convertedRate = (1+interestRate/compoundPerYear);
    double spanofCompound = (compoundPerYear*annualDuration);
    double powerRate = pow(convertedRate, spanofCompound);
    double totalReturn = principleInvestment * powerRate;

    return totalReturn;
}

string COMPOUNDINTEREST::vocabulary(){
  string compoundInterestDefined = "Compound interest is interest that applies not only to the initial principal of an investment or a loan, but also to the accumulated interest from previous periods. Compound interest involves earning, or owing, interest on your interest.";

  return compoundInterestDefined;

}
