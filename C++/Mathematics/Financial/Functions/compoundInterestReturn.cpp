#include "../Headers/financialFunctions.h"

void COMPOUNDINTEREST::compoundInterestReturn(double principleInvestment, double interestRate, double compoundPerYear, double annualDuration)
{
    double convertedRate = (1+interestRate/compoundPerYear);
    double spanofCompound = (compoundPerYear*annualDuration);
    double powerRate = pow(convertedRate, spanofCompound);
    totalReturn = principleInvestment * powerRate;
}

void COMPOUNDINTEREST::setcompoundInterestReturn(double setprincipleInvestment, double setinterestRate, double setcompoundPerYear, double setannualDuration){
  compoundInterestReturn(setprincipleInvestment, setinterestRate, setcompoundPerYear, setannualDuration);
}

double COMPOUNDINTEREST::getcompoundInterestReturn()
{
  return totalReturn;

}
