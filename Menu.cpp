// Name: Daniel Prater
// Date: 09/13/2026
// Course Section: CSC 221
// Description: Homework 2 - Menu temperature converter

#include <iostream>
using namespace std;

int main()
{
    int choice{0};
    double tempIn{0.0}, tempOut{0.0};

    //Display Menu
    cout << "Press (1) to convert from Celsius to Fahrenheit" << endl;
    cout << "Press (2) to convert from Fahrenheit to Celsius" << endl;
    cout << "Press (3) to convert from Kelvin to Fahrenheit" << endl;
    cout << "Press (4) to convert from Fahrenheit to Kelvin" << endl;
    cout << "\nEnter menu choice number and hit [ENTER]> ";
    cin >> choice;

    //Process Choice
    switch (choice)
    {
        case 1:
        cout << "Enter the temperature in Celsius> ";
        cin >> tempIn;
        tempOut = (9.0 / 5.0) * tempIn + 32.0;
        cout << "The temperature is " << tempOut << " degrees Fahrenheit." << endl;
        break;

        case 2:
        cout << "Enter the temperature in Fahrenheit> ";
        cin >> tempIn;
        tempOut = (tempIn - 32.0) * (5.0 / 9.0);
        cout << "The temperature is " << tempOut << "degrees Celsius." << endl;
        break;

        case 3:
        cout << "Enter the temperature in Kelvin> ";
        cin >> tempIn;
        tempOut = ((9.0 / 5.0) * tempIn) - 459.67;
        cout << "The temperature is " << tempOut << " degrees Fahrenheit." << endl;
        break;

        case 4:
        cout << "Enter the temperature in Fahrenheit> ";
        cin >> tempIn;
        tempOut = (tempIn + 459.67) * (5.0 / 9.0);
        cout << "The temperature is " << tempOut << " Kelvin." << endl;
        break;

        default:
        cout << "Invalid menu choice." << endl;
        break;
    }
    return 0;
}