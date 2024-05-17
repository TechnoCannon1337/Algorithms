#include <iostream>
#include <cmath>
#include "financialFunctions.h"
using namespace std;

float lumpSumPresentValue(float lumpSum, float annualInterestRate, float compoundingPeriods, float timeSpan)
{
  float futureValue = lumpSum;
  float earnedInterestRate = annualInterestRate/compoundingPeriods;
  float presentValueInterestFactor = pow(1/(1 + earnedInterestRate), timeSpan);
  float presentValue = futureValue * presentValueInterestFactor;
  return presentValue;

}
