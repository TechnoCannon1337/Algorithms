#include <iostream>
#include <string>
#include <cmath>
#include "financialFunctions.h"
using namespace std;


double PRESENTLUMPSUM::lumpSumPresentValue(double lumpSum, double annualInterestRate, double compoundingPeriods, double timeSpan)
{
  double futureValue = lumpSum;
  double earnedInterestRate = annualInterestRate/compoundingPeriods;
  double presentValueInterestFactor = pow(1/(1 + earnedInterestRate), timeSpan);
  double presentValue = futureValue * presentValueInterestFactor;
  return presentValue;

}

string PRESENTLUMPSUM::vocabulary(){
  string lumpSumPresentValueDefined = "A lump sum's present value is the amount of money it's worth today. The idea is that money received today is worth more than the same amount of money received in the future because time is money.";
  return lumpSumPresentValueDefined;

}
