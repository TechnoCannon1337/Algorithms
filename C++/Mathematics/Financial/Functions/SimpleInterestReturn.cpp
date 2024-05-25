#include "../Headers/financialFunctions.h"

void SIMPLEINTEREST::simpleInterestReturn(double principleInvestment, double interestRate, double annualDuration)
{
  double interestPaid = principleInvestment * interestRate;
  totalReturn = principleInvestment + (interestPaid * annualDuration);
}

void SIMPLEINTEREST::setsimpleInterestReturn(double setprincipleInvestment, double setinterestRate, double setannualDuration){
  simpleInterestReturn(setprincipleInvestment, setinterestRate, setannualDuration);
}

double SIMPLEINTEREST::getsimpleInterestReturn()
{
  return totalReturn;
}
