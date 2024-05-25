#include "financialFunctions.h"

void PRESENTANNUITY::annuityPresentValue(double Payment, double rate, double timeSpan)
{
  double presentValueInterestFactor;
  presentValueInterestFactor = 0;

  for (double i = 1; i <= timeSpan; i++)
  {
    presentValueInterestFactor += pow(1/(1 + rate), i);
  }

  PresentValueAnnuity = Payment * presentValueInterestFactor;
}

void PRESENTANNUITY::setannuityPresentValue(double setPayment, double setrate, double settimeSpan){
  annuityPresentValue(setPayment, setrate, settimeSpan);
}

double PRESENTANNUITY::getannuityPresentValue()
{
  return PresentValueAnnuity;
}
