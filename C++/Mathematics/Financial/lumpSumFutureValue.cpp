#include <iostream>
#include <cmath>
#include "financialFunctions.h"
using namespace std;

float lumpSumFutureValue(float lumpSum, float annualInterestRate, float compoundingPeriods, float timeSpan)
{
  float presentValue = lumpSum;
  float earnedInterestRate = annualInterestRate/compoundingPeriods;
  float futureValueInterestFactor = pow((1 + earnedInterestRate), timeSpan);
  float futureValue = presentValue * futureValueInterestFactor;
  return futureValue;

}
