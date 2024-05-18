#include <iostream>
#include <cmath>
#include <string>
#include "financialFunctions.h"
using namespace std;


double SIMPLEINTEREST::simpleInterestReturn(double principleInvestment, double interestRate, double annualDuration)
{
  double interestPaid = principleInvestment * interestRate;
  double totalReturn = principleInvestment + (interestPaid * annualDuration);
  return totalReturn;
}

string SIMPLEINTEREST::vocabulary(){
  string simpleInterestDefined = "Simple interest is an interest charge that borrowers pay lenders for a loan. It is calculated using the principal only and does not include compounding interest. Simple interest relates not just to certain loans. It's also the type of interest that banks pay customers on their savings accounts.";

return simpleInterestDefined;

}
