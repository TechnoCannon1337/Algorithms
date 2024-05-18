#include <iostream>
#include <cmath>
#include <string>
#include "financialFunctions.h"
using namespace std;


double FUTURELUMPSUM::lumpSumFutureValue(double lumpSum, double annualInterestRate, double compoundingPeriods, double timeSpan)
{
  double presentValue = lumpSum;
  double earnedInterestRate = annualInterestRate/compoundingPeriods;
  double futureValueInterestFactor = pow((1 + earnedInterestRate), timeSpan);
  double futureValue = presentValue * futureValueInterestFactor;
  return futureValue;

}

string FUTURELUMPSUM::vocabulary(){
  string lumpSumFutureValueDefined = "The future value of a lump sum is the estimated value of a single investment at a future point in time, considering the interest rate and inflation.";
  return lumpSumFutureValueDefined;


}
