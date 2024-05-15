def simpleInterestReturn(principleInvestment, interestRate, annualDuration):
    interestPaid = principleInvestment * interestRate
    return(round(principleInvestment + (interestPaid * annualDuration), 2))

simpleInterestReturn()
