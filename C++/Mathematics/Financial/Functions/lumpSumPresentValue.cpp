#include "financialFunctions.h"

void PRESENTLUMPSUM::lumpSumPresentValue(double lumpSum, double annualInterestRate, double compoundingPeriods, double timeSpan)
{
  double futureValue = lumpSum;
  double earnedInterestRate = annualInterestRate/compoundingPeriods;
  double presentValueInterestFactor = pow(1/(1 + earnedInterestRate), timeSpan);
  presentValue = futureValue * presentValueInterestFactor;
}

void PRESENTLUMPSUM::setlumpSumPresentValue(double setlumpSum, double setannualInterestRate, double setcompoundingPeriods, double settimeSpan){
  lumpSumPresentValue(setlumpSum, setannualInterestRate, setcompoundingPeriods, settimeSpan);
}

double PRESENTLUMPSUM::getlumpSumPresentValue()
{
  return presentValue;
}
