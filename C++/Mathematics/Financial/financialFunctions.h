#pragma once

double simpleInterestReturn(double principleInvestment, double interestRate, double annualDuration);
double annuityPresentValue(double Payment, double rate, double timeSpan);
double compoundInterestReturn(double principleInvestment, double interestRate, double compoundPerYear, double annualDuration);
double lumpSumFutureValue(double lumpSum, double annualInterestRate, double compoundingPeriods, double timeSpan);
double lumpSumPresentValue(double lumpSum, double annualInterestRate, double compoundingPeriods, double timeSpan);
