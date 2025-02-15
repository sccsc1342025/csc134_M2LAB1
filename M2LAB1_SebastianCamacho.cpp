// CSC 134
// M2LAB1
// Sebastian Camacho
// 02/15/2025

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // This program is used to calculate the volume, cost, customer charge, and profit of a crate of any size

    // Constants for cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    // Variables
    double length,width,height,volume,cost,charge,profit;

    // Set the desired output formatting for numbers
    cout << setprecision(2) << fixed << showpoint;

    // Prompt the user for the crate's length, width, and height
    cout << "Enter the dimensions of the crate (in feet)" << endl;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Calculate the crate's volume, the cost to produce it, the charge to the customer, and the profit
    volume = length * width * height;
    cost= volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Display calculations
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet" << endl;
    cout << "Cost to build: $" << cost << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}