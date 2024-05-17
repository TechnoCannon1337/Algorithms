#include <iostream>
#include "financialFunctions.h"

using namespace std;

int main(){

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
cout << "The Simple Interest Return of a Principle Investment of $42,000 at a 7% Interest Rate over 14 Years is $" << simpleInterestReturn(42000, .07, 14) <<endl;
cout << "The Compound Interest Return of a Principle Investment of $42,000 at a 7% Interest Rate compounded Quarterly over 14 Years is $" << compoundInterestReturn(42000, .07, 4, 14) <<endl;
cout << "The Present Value of a Lump Sum Payment of $42,000 at a 7% Interest Rate compounded Quarterly over 14 Years is $" << lumpSumPresentValue(42000, .07, 4, 14) <<endl;
cout <<  "The Future Value of a Lump Sum Payment of $42,000 at a 7% Interest Rate compounded Quarterly over 14 Years is $"<< lumpSumFutureValue(42000, .07, 4, 14) <<endl;
cout << "The Annuity Present Value of Cash Flow Payments of $42,000 at a 14% Interest Rate over 7 Years is $" << annuityPresentValue(42000, .14, 7) <<endl;


return 0;
}
