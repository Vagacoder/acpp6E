//Program to demonstrate the CDAccount structure type.
#include <iostream>
using namespace std;

struct Date
{
    int month;
    int day;
    int year;
};

//Improved structure for a bank certificate of deposit:
struct CDAccount
{
    double initialBalance;
    double interestRate;
    int term;//months until maturity
    Date maturity; //date when CD matures
    double balanceAtMaturity;
};

void getCDData(CDAccount& theAccount);
//Postcondition: theAccount.initialBalance, theAccount.interestRate, 
//theAccount.term, and theAccount.maturity have been given values.
//that the user entered at the keyboard.

void getDate(Date& theDate);
//Postcondition: theDate.month, theDate.day, and theDate.year 
//have been given values that the user entered at the keyboard.

int main( )
{
    CDAccount account;
    cout << "Enter account data on the day account was opened:\n";
    getCDData(account);

    double rateFraction, interest;
    rateFraction = account.interestRate/100.0;
    interest = account.initialBalance*(rateFraction*(account.term/12.0));
    account.balanceAtMaturity = account.initialBalance + interest;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "When the CD matured on " 
         << account.maturity.month << "-" << account.maturity.day
         << "-" << account.maturity.year << endl
         << "it had a balance of $" 
         << account.balanceAtMaturity << endl;
    return 0;
}

//uses iostream:
void getCDData(CDAccount& theAccount)
{
    cout << "Enter account initial balance: $";
    cin >> theAccount.initialBalance;
    cout << "Enter account interest rate: ";
    cin >> theAccount.interestRate;
    cout << "Enter the number of months until maturity: ";
    cin >> theAccount.term;
    cout << "Enter the maturity date:\n";
    getDate(theAccount.maturity);
}

//uses iostream:
void getDate(Date& theDate)
{
    cout << "Enter month: ";
    cin >> theDate.month;
    cout << "Enter day: ";
    cin >> theDate.day;
    cout << "Enter year: ";
    cin >> theDate.year;
}
