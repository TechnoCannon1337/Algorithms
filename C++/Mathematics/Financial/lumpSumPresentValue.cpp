#include <iostream>
#include <cmath>
using namespace std;

float lumpSumPresentValue(float lumpSum, float annualInterestRate, float compoundingPeriods, float timeSpan)
{
  float futureValue = lumpSum;
  float earnedInterestRate = annualInterestRate/compoundingPeriods;
  float presentValueInterestFactor = pow(1/(1 + earnedInterestRate), timeSpan);
  float presentValue = futureValue * presentValueInterestFactor;
  return presentValue;

}
int main()
{
  lumpSumPresentValue();
}
