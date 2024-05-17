#include <iostream>
#include <cmath>
#include "financialFunctions.h"
using namespace std;

double simpleInterestReturn(double principleInvestment, double interestRate, double annualDuration)
{
  double interestPaid = principleInvestment * interestRate;
  double totalReturn = principleInvestment + (interestPaid * annualDuration);
  return totalReturn;
}
