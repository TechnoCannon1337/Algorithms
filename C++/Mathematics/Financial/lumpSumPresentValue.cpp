#include <iostream>
#include <cmath>
using namespace std;

float lumpSumPresentValue(float lumpSum, float annualInterestRate, float compoundingPeriods, float timeSpan)
{
  float futureValue = lumpSum;
  float earnedInterestRate = annualInterestRate/compoundingPeriods;
  float presentValueInterestFactor = pow(1/(1 + earnedInterestRate), timeSpan);
  float presnetValue = futureValue * presentValueInterestFactor;
  return presnetValue;

}
int main()
{
  lumpSumPresentValue();
}
