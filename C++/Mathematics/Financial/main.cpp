#include <iostream>
#include <locale>
#include <iomanip>
#include <string>
#include "financialFunctions.h"

using namespace std;

int main(){


SIMPLEINTEREST testSIMPLEINTEREST;
COMPOUNDINTEREST testCOMPOUNDINTEREST;
PRESENTLUMPSUM testPRESENTLUMPSUM;
FUTURELUMPSUM testFUTURELUMPSUM;
PRESENTANNUITY testPRESENTANNUITY;


cout.imbue(locale("en_US.UTF-8"));
cout << showbase << "\nThe Simple Interest Return of a Principle Investment of $42,000 at a 7% Interest Rate over 14 Years is " << put_money(testSIMPLEINTEREST.simpleInterestReturn(42000, .07, 14)*100) <<"."<<endl;
cout <<"Definition: " << testSIMPLEINTEREST.vocabulary()<< "\n"<< endl;

cout << "The Compound Interest Return of a Principle Investment of $42,000 at a 7% Interest Rate compounded Quarterly over 14 Years is " << put_money(testCOMPOUNDINTEREST.compoundInterestReturn(42000, .07, 4, 14)*100) <<"."<<endl;
cout <<"Definition: " << testCOMPOUNDINTEREST.vocabulary()<< "\n"<< endl;

cout << "The Present Value of a Lump Sum Payment of $42,000 at a 7% Interest Rate compounded Quarterly over 14 Years is " << put_money(testPRESENTLUMPSUM.lumpSumPresentValue(42000, .07, 4, 14)*100) <<"."<<endl;
cout <<"Definition: " << testPRESENTLUMPSUM.vocabulary()<< "\n"<< endl;

cout <<  "The Future Value of a Lump Sum Payment of $42,000 at a 7% Interest Rate compounded Quarterly over 14 Years is "<< put_money(testFUTURELUMPSUM.lumpSumFutureValue(42000, .07, 4, 14)*100) <<"."<<endl;
cout <<"Definition: " << testFUTURELUMPSUM.vocabulary()<< "\n"<< endl;

cout << "The Annuity Present Value of Cash Flow Payments of $42,000 at a 14% Interest Rate over 7 Years is " << put_money(testPRESENTANNUITY.annuityPresentValue(42000, .14, 7)*100) <<"."<<endl;
cout <<"Definition: " << testPRESENTANNUITY.vocabulary()<< endl;

cout << "\n\n" <<"PRESS ENTER TO EXIT THIS PROGRAM." << endl;

cin.get();
return 0;
}
