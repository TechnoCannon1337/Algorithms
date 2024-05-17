#include <iostream>
#include <cmath>
#include "financialFunctions.h"
using namespace std;

double lumpSumPresentValue(double lumpSum, double annualInterestRate, double compoundingPeriods, double timeSpan)
{
  double futureValue = lumpSum;
  double earnedInterestRate = annualInterestRate/compoundingPeriods;
  double presentValueInterestFactor = pow(1/(1 + earnedInterestRate), timeSpan);
  double presentValue = futureValue * presentValueInterestFactor;
  return presentValue;

}
