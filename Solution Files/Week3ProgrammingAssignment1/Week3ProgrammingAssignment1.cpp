//This program calculates the compound interest earned on a savings account,
//assuming no additional deposits were made after the principal amount.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double principal;		//Principal amount deposited into the account
	int t;					//Number of times the interest is compounded per year
	double rateInput;		//The interest rate on the account, input by the user as a percentage
	double rateModified;	//The interest rate input by the user, modified and expressed as a decimal
	double interestEarned;	//The amount of money earned in compounded interest on the principal in the first year
	double newBalance;		//The total balance in the savings account at the end of the first year

	//Prompt the user for all needed information
	cout << "This program will calculate the compound interest earned on your savings account after one year," << endl;
	cout << "assuming you do not make any additional deposits after the principal amount." << endl << endl;
	cout << "Input the principal amount deposited, in dollars: $";
	cin >> principal;
	cout << "Now, input the interest rate on the account, expressed as an annual percentage: ";
	cin >> rateInput;
	cout << "Finally, tell me how many times per year your interest is compounded ";
	cout << "(input 12 if compounded monthly, 4 if compounded quarterly, etc): ";
	cin >> t;
	
	//Carry out math to calculate compounded interest earned, and the new balance on the account.

	//First, convert the interest rate input by the user to a decimal format to be used in calculations.
	rateModified = rateInput / 100;

	//Calculate the new balance on the account.
	newBalance = principal * pow((1 + (rateModified / t)), t);

	//Calculate the amount of interest earned, less the principal amount deposited.
	interestEarned = newBalance - principal;

	//Display all the information the user needs to know about the account.
	cout << endl << "------------------------------------------------------------" << endl << endl;
	cout << "Interest Rate: " << fixed << setprecision(2) << rateInput << "%" << endl;
	cout << "Times Compounded: " << t << endl;
	cout << "Principal: $ " << principal << endl;
	cout << "Interest: $ " << interestEarned << endl;
	cout << "Amount in Savings: $ " << newBalance << endl << endl;

	system("PAUSE");
	return 0;
}