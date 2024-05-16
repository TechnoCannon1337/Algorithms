#include <iostream>
#include <cmath>
using namespace std;

float compoundInterestReturn(float principleInvestment, float interestRate, float compoundPerYear, float annualDuration)
{
    float convertedRate = (1+interestRate/compoundPerYear);
    float spanofCompound = (compoundPerYear*annualDuration);
    float powerRate = pow(convertedRate, spanofCompound);
    float totalReturn = principleInvestment * powerRate;

    return totalReturn;
}
int main()
{
  compoundInterestReturn();
}
