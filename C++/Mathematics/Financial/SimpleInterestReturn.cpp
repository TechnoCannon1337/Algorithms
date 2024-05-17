#include <iostream>
#include <cmath>
#include "financialFunctions.h"
using namespace std;

float simpleInterestReturn(float principleInvestment, float interestRate, float annualDuration)
{
  float interestPaid = principleInvestment * interestRate;
  float totalReturn = principleInvestment + (interestPaid * annualDuration);
  return totalReturn;
}
