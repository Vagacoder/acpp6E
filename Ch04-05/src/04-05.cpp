//Determines which of two pizza sizes is the best buy.
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

void getData(int& smallDiameter, double& priceSmall, 
             int& largeDiameter, double& priceLarge);

void giveResults(int smallDiameter, double priceSmall, 
             int largeDiameter, double priceLarge);

double unitPrice(int diameter, double price);
//Returns the price per square inch of a pizza.
//Precondition: The diameter parameter is the diameter of the pizza 
//in inches. The price parameter is the price of the pizza.


int main( )
{
    int diameterSmall, diameterLarge;
    double priceSmall, priceLarge;

    getData(diameterSmall, priceSmall, diameterLarge, priceLarge);
    giveResults(diameterSmall, priceSmall, diameterLarge, priceLarge);

    return 0;
}

void getData(int& smallDiameter, double& priceSmall, 
             int& largeDiameter, double& priceLarge)
{
    cout << "Welcome to the Pizza Consumers Union.\n";
    cout << "Enter diameter of a small pizza (in inches): ";
    cin >> smallDiameter;
    cout << "Enter the price of a small pizza: $";
    cin >> priceSmall;
    cout << "Enter diameter of a large pizza (in inches): ";
    cin >> largeDiameter;
    cout << "Enter the price of a large pizza: $";
    cin >> priceLarge;
}

void giveResults(int smallDiameter, double priceSmall, 
                 int largeDiameter, double priceLarge)
{
    double unitPriceSmall, unitPriceLarge;

    unitPriceSmall = unitPrice(smallDiameter, priceSmall);
    unitPriceLarge = unitPrice(largeDiameter, priceLarge);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Small pizza:\n"
         << "Diameter = " << smallDiameter << " inches\n"
         << "Price = $" << priceSmall
         << " Per square inch = $" << unitPriceSmall << endl
         << "Large pizza:\n"
         << "Diameter = " << largeDiameter << " inches\n"
         << "Price = $" << priceLarge
         << " Per square inch = $" << unitPriceLarge << endl;
    if (unitPriceLarge < unitPriceSmall)
        cout << "The large one is the better buy.\n";
    else
        cout << "The small one is the better buy.\n";
    cout << "Buon Appetito!\n";
}

double unitPrice(int diameter, double price)
{
    const double PI = 3.14159;
    double radius, area;

    radius = diameter/static_cast<double>(2); 
    area = PI * radius * radius;
    return (price/area);
}

