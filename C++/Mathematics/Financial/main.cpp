#include <iostream>
#include <locale>
#include <iomanip>
#include "financialFunctions.h"

using namespace std;

int main(){

cout.imbue(locale("en_US.UTF-8"));

cout << showbase << "The Simple Interest Return of a Principle Investment of $42,000 at a 7% Interest Rate over 14 Years is " << put_money(simpleInterestReturn(42000, .07, 14)*100) <<endl;
cout << "The Compound Interest Return of a Principle Investment of $42,000 at a 7% Interest Rate compounded Quarterly over 14 Years is " << put_money(compoundInterestReturn(42000, .07, 4, 14)*100) <<endl;
cout << "The Present Value of a Lump Sum Payment of $42,000 at a 7% Interest Rate compounded Quarterly over 14 Years is " << put_money(lumpSumPresentValue(42000, .07, 4, 14)*100) <<endl;
cout <<  "The Future Value of a Lump Sum Payment of $42,000 at a 7% Interest Rate compounded Quarterly over 14 Years is "<< put_money(lumpSumFutureValue(42000, .07, 4, 14)*100) <<endl;
cout << "The Annuity Present Value of Cash Flow Payments of $42,000 at a 14% Interest Rate over 7 Years is " << put_money(annuityPresentValue(42000, .14, 7)*100) <<endl;
cout << "\n\n" <<"PRESS ENTER TO EXIT THIS PROGRAM." << endl;
char exit[0];
cin.get(exit, 0);
return 0;
}
