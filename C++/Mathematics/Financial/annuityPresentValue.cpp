#include <iostream>
#include <cmath>
#include "financialFunctions.h"
using namespace std;

double annuityPresentValue(double Payment, double rate, double timeSpan)
{
  double presentValueInterestFactor;
  presentValueInterestFactor = 0;

  for (double i = 1; i <= timeSpan; i++)
  {
    presentValueInterestFactor += pow(1/(1 + rate), i);
  }

  double PresentValueAnnuity = Payment * presentValueInterestFactor;
  return PresentValueAnnuity;

}
