#pragma once

float simpleInterestReturn(float principleInvestment, float interestRate, float annualDuration);
float annuityPresentValue(float Payment, float rate, float timeSpan);
float compoundInterestReturn(float principleInvestment, float interestRate, float compoundPerYear, float annualDuration);
float lumpSumFutureValue(float lumpSum, float annualInterestRate, float compoundingPeriods, float timeSpan);
float lumpSumPresentValue(float lumpSum, float annualInterestRate, float compoundingPeriods, float timeSpan);
