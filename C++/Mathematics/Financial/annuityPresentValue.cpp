#include <iostream>
#include <cmath>
#include "financialFunctions.h"
using namespace std;

float annuityPresentValue(float Payment, float rate, float timeSpan)
{
  float presentValueInterestFactor;
  presentValueInterestFactor = 0;

  for (float i = 1; i <= timeSpan; i++)
  {
    presentValueInterestFactor += pow(1/(1 + rate), i);
  }

  float PresentValueAnnuity = Payment * presentValueInterestFactor;
  return PresentValueAnnuity;

}
