def compoundInterestReturn(principleInvestment, interestRate, compoundPerYear, annualDuration):
    convertedRate = (1+interestRate/compoundPerYear)
    spanofCompound = (compoundPerYear*annualDuration)
    powerRate = pow(convertedRate, spanofCompound)
    totalReturn = principleInvestment * powerRate

    return(totalReturn)

compoundInterestReturn()
