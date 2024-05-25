#include "financialFunctions.h"

void FUTURELUMPSUM::lumpSumFutureValue(double lumpSum, double annualInterestRate, double compoundingPeriods, double timeSpan)
{
  double presentValue = lumpSum;
  double earnedInterestRate = annualInterestRate/compoundingPeriods;
  double futureValueInterestFactor = pow((1 + earnedInterestRate), timeSpan);
  futureValue = presentValue * futureValueInterestFactor;
}

void FUTURELUMPSUM::setlumpSumFutureValue(double setlumpSum, double setannualInterestRate, double setcompoundingPeriods, double settimeSpan){
  lumpSumFutureValue(setlumpSum, setannualInterestRate, setcompoundingPeriods, settimeSpan);
}

double FUTURELUMPSUM::getlumpSumFutureValue()
{
  return futureValue;
}
