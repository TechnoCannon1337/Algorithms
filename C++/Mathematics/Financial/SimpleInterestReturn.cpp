#include <iostream>
#include <cmath>
using namespace std;

float simpleInterestReturn(float principleInvestment, float interestRate, float annualDuration)
{
  float interestPaid = principleInvestment * interestRate;
  float totalReturn = principleInvestment + (interestPaid * annualDuration);
  return totalReturn;
}
int main()
{
  simpleInterestReturn();
}
