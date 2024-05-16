#include <iostream>
#include <cmath>
using namespace std;

float lumpSumFutureValue(float lumpSum, float annualInterestRate, float compoundingPeriods, float timeSpan)
{
  float presentValue = lumpSum;
  float earnedInterestRate = annualInterestRate/compoundingPeriods;
  float futureValueInterestFactor = pow((1 + earnedInterestRate), timeSpan);
  float futureValue = presentValue * futureValueInterestFactor;
  return futureValue;

}
int main()
{
  lumpSumFutureValue();
}
