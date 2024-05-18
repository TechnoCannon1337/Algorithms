#ifndef FINANCIALFUNCTIONS_H
#define FINANCIALFUNCTIONS_H
#include <string>
using namespace std;

class SIMPLEINTEREST {
  public:
    double simpleInterestReturn(double principleInvestment, double interestRate, double annualDuration);
    string vocabulary();
};

class COMPOUNDINTEREST {
  public:
    double compoundInterestReturn(double principleInvestment, double interestRate, double compoundPerYear, double annualDuration);
    string vocabulary();
};

class PRESENTLUMPSUM {
  public:
    double lumpSumPresentValue(double lumpSum, double annualInterestRate, double compoundingPeriods, double timeSpan);
    string vocabulary();
};

class FUTURELUMPSUM {
  public:
    double lumpSumFutureValue(double lumpSum, double annualInterestRate, double compoundingPeriods, double timeSpan);
    string vocabulary();
};

class PRESENTANNUITY {
  public:
    double annuityPresentValue(double Payment, double rate, double timeSpan);
    string vocabulary();
};

#endif
