
//Driver program for the function unitPrice.
#include <iostream>
using namespace std;

double unitPrice(int diameter, double price);
//Returns the price per square inch of a pizza.
//Precondition: The diameter parameter is the diameter of the pizza
//in inches. The price parameter is the price of the pizza.

int main( )
{
    double diameter, price;
    char ans;

    do
    {
        cout << "Enter diameter and price:\n";
        cin >> diameter >> price;

        cout << "unit Price is $"
             << unitPrice(diameter, price) << endl;

        cout << "Test again? (y/n)";
        cin >> ans;
        cout << endl;
    } while (ans == 'y' || ans == 'Y');

    return 0;
}

double unitPrice(int diameter, double price)
{
    const double PI = 3.14159;
    double radius, area;

    radius = diameter/static_cast<double>(2);
    area = PI * radius * radius;
    return (price/area);
}
