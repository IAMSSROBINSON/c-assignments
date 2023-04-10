// Write a program to implement some basic error handling to identify the range of values that can be entered.
// For the gross salary the minimum amount should be 1k and the maximum should be 10k.

// define grossSalary as global variable available to all functions in this file only(static)
// define incomeTax as global variable available to all functions in this file only(static)

#include <stdio.h>

static int grossSalaryValue;
static int incomeTaxPercentage;
static int professionalTaxPercentage;
static int providentFundPercentage;


// getGrossSalary
int grossSalaryFn () {
	printf("Please enter your gross salary as an integer: \n");
	scanf("%d", &grossSalaryValue);
	return grossSalaryValue;
}

// getIncomeTaxPercentage
int incomeTaxFn () {
	printf("Please enter income tax as percentage integer: \n");
	scanf("%d", &incomeTaxPercentage);
	return incomeTaxPercentage;
}

// getProfessionalTaxPercentage
int professionalTaxFn () {
	printf("Please enter professional tax as percentage integer: \n");
	scanf("%d", &professionalTaxPercentage);
	return professionalTaxPercentage;
}

// getProvidentFundPercentage
int providentFundFn () {
	printf("Please enter provident fund amount percentage as percentage integer: \n");
	scanf("%d", &providentFundPercentage);
	return providentFundPercentage;
}


// MAIN FUNCTION
int main (int argc, char *argv[]) {

	// declare and initialize minimum and maximum values from grossSalary
	int minimum = 1000;
	int maximum = 10000;

	// run grossSalary conditions:
	grossSalaryFn();
	for(int counter = 1; counter < 1000000; counter++ ){
		if(grossSalaryValue < minimum || grossSalaryValue > maximum){
			printf("Please enter value between 1000 and 10000: \n");
			grossSalaryFn();
		} else {
			break;
		}
	}


	// run incomeTax conditions:
	incomeTaxPercentage = incomeTaxFn();	
	for(int counter = 1; counter < 1000000; counter++ ){
		if(incomeTaxPercentage < 1 || incomeTaxPercentage > 100){
			incomeTaxFn();	
		} else {
				break;
		}
	}
		
	// run professionalTax conditions:
	professionalTaxPercentage = professionalTaxFn();	
	for(int counter = 1; counter < 1000000; counter++ ){
		if(professionalTaxPercentage < 1 || professionalTaxPercentage > 100){
			professionalTaxFn();	
		} else {
				break;
		}
	}

	// run providentFund conditions
	providentFundPercentage = providentFundFn();	
	for(int counter = 1; counter < 1000000; counter++ ){
		if(providentFundPercentage < 1 || providentFundPercentage > 100){
			providentFundFn();	
		} else {
				break;
		}
	}

	int incomeTaxAmount = (grossSalaryValue * incomeTaxPercentage)/100;
	int professionalTaxAmount = (grossSalaryValue * professionalTaxPercentage)/100;
	int providentFundAmount = (grossSalaryValue * providentFundPercentage)/100;
	float netSalary = (((grossSalaryValue - incomeTaxAmount) - professionalTaxAmount) - providentFundAmount);

	// print netSalary and breakdown:
	printf("\nADDITIONAL (incoming)");
	printf("\nGross salary:\t\t $ %d\n\n", grossSalaryValue);

	printf("DEDUCTIBLES (outgoing from gross)\n");
	printf("Income tax:\t\t %% %d ($ %d)\n", incomeTaxPercentage, incomeTaxAmount);
	printf("Professional tax:\t %% %d ($ %d)\n", professionalTaxPercentage, professionalTaxAmount);
	printf("Provident fund:\t\t %% %d ($ %d)\n", providentFundPercentage, providentFundAmount);

	printf("\nNET (total receivables)");
	printf("\nNet salary is: \t\t $ %.0f\n", netSalary);


	return 0;
}
