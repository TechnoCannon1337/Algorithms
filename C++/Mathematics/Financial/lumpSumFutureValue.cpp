#include <iostream>
#include <cmath>
#include "financialFunctions.h"
using namespace std;

double lumpSumFutureValue(double lumpSum, double annualInterestRate, double compoundingPeriods, double timeSpan)
{
  double presentValue = lumpSum;
  double earnedInterestRate = annualInterestRate/compoundingPeriods;
  double futureValueInterestFactor = pow((1 + earnedInterestRate), timeSpan);
  double futureValue = presentValue * futureValueInterestFactor;
  return futureValue;

}
