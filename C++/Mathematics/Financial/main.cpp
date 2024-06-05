#include <locale>
#include <iomanip>
#include "./HeaderFiles/github_hirsch_index_metric_calculator.h"

using namespace std;

int main(){

SIMPLEINTEREST testSIMPLEINTEREST;
COMPOUNDINTEREST testCOMPOUNDINTEREST;
PRESENTLUMPSUM testPRESENTLUMPSUM;
FUTURELUMPSUM testFUTURELUMPSUM;
PRESENTANNUITY testPRESENTANNUITY;
GLOSSARY testGLOSSARY;

testSIMPLEINTEREST.setsimpleInterestReturn(42000, .07, 14);
testCOMPOUNDINTEREST.setcompoundInterestReturn(42000, .07, 4, 14);
testPRESENTLUMPSUM.setlumpSumPresentValue(42000, .07, 4, 14);
testFUTURELUMPSUM.setlumpSumFutureValue(42000, .07, 4, 14);
testPRESENTANNUITY.setannuityPresentValue(42000, .14, 7);

cout.imbue(locale("en_US.UTF-8"));
cout << showbase << "\nThe Simple Interest Return of a Principle Investment of $42,000 at a 7% Interest Rate over 14 Years is " << put_money(testSIMPLEINTEREST.getsimpleInterestReturn()*100) <<"."<<endl;
cout <<"Definition: " << testGLOSSARY.definesimpleInterestReturn()<< "\n"<< endl;

cout << "The Compound Interest Return of a Principle Investment of $42,000 at a 7% Interest Rate compounded Quarterly over 14 Years is " << put_money(testCOMPOUNDINTEREST.getcompoundInterestReturn()*100) <<"."<<endl;
cout <<"Definition: " << testGLOSSARY.definecompoundInterestReturn()<< "\n"<< endl;

cout << "The Present Value of a Lump Sum Payment of $42,000 at a 7% Interest Rate compounded Quarterly over 14 Years is " << put_money(testPRESENTLUMPSUM.getlumpSumPresentValue()*100) <<"."<<endl;
cout <<"Definition: " << testGLOSSARY.definelumpSumPresentValue()<< "\n"<< endl;

cout <<  "The Future Value of a Lump Sum Payment of $42,000 at a 7% Interest Rate compounded Quarterly over 14 Years is "<< put_money(testFUTURELUMPSUM.getlumpSumFutureValue()*100) <<"."<<endl;
cout <<"Definition: " << testGLOSSARY.definelumpSumFutureValue()<< "\n"<< endl;

cout << "The Annuity Present Value of Cash Flow Payments of $42,000 at a 14% Interest Rate over 7 Years is " << put_money(testPRESENTANNUITY.getannuityPresentValue()*100) <<"."<<endl;
cout <<"Definition: " << testGLOSSARY.defineannuityPresentValue()<< endl;

cout << "\n\n" <<"PRESS ENTER TO EXIT THIS PROGRAM." << endl;

cin.get();
return 0;
}
