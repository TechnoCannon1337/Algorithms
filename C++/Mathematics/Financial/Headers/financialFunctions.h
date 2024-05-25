#ifndef FINANCIALFUNCTIONS_H
#define FINANCIALFUNCTIONS_H
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class SIMPLEINTEREST {
  private:
    double totalReturn;
    void simpleInterestReturn(double principleInvestment, double interestRate, double annualDuration);
  public:
    void setsimpleInterestReturn(double setprincipleInvestment, double setinterestRate, double setannualDuration);
    double getsimpleInterestReturn();
};

class COMPOUNDINTEREST {
  private:
    double totalReturn;
    void compoundInterestReturn(double principleInvestment, double interestRate, double compoundPerYear, double annualDuration);
  public:
    void setcompoundInterestReturn(double setprincipleInvestment, double setinterestRate, double setcompoundPerYear, double setannualDuration);
    double getcompoundInterestReturn();
};

class PRESENTLUMPSUM {
  private:
    double presentValue;
    void lumpSumPresentValue(double lumpSum, double annualInterestRate, double compoundingPeriods, double timeSpan);
  public:
    void setlumpSumPresentValue(double setlumpSum, double setannualInterestRate, double setcompoundingPeriods, double settimeSpan);
    double getlumpSumPresentValue();
};

class FUTURELUMPSUM {
  private:
    double futureValue;
    void lumpSumFutureValue(double lumpSum, double annualInterestRate, double compoundingPeriods, double timeSpan);
  public:
    void setlumpSumFutureValue(double setlumpSum, double setannualInterestRate, double setcompoundingPeriods, double settimeSpan);
    double getlumpSumFutureValue();
};

class PRESENTANNUITY {
  private:
    double PresentValueAnnuity;
    void annuityPresentValue(double Payment, double rate, double timeSpan);
  public:
    void setannuityPresentValue(double setPayment, double setrate, double settimeSpan);
    double getannuityPresentValue();
};

class GLOSSARY {
  private:
    static string simpleInterestDefined;
    static string compoundInterestDefined;
    static string lumpSumPresentValueDefined;
    static string lumpSumFutureValueDefined;
    static string PresentValueAnnuityDefined;
  public:
    string definesimpleInterestReturn();
    string definecompoundInterestReturn();
    string definelumpSumPresentValue();
    string definelumpSumFutureValue();
    string defineannuityPresentValue();
};

#endif
