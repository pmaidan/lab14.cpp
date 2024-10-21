// Polina Maidanova
// Programming Fundamentals
// CS 1436
// 005
// Due Date: 10/23/2024
// Date Completed: 10/17/2024
// Date Submitted: 10/17/2024


// This program creates a bar chart for the popultaion of 10 Texas Cities.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int iCitySize, iCityThousands;

    ofstream outfile;
    outfile.open("city_population_maidanova.txt");

    outfile << "\t" << "POPULATION BAR CHART" << endl;
    for (int iCityNum = 0; iCityNum <= 9; iCityNum++)
    {
        cout << "Enter the population of Texas city ";
        cout << iCityNum + 1 << ": ";
        cin >> iCitySize;

        while (iCitySize < 0)
        {
            cout << "Invalid input. Enter a non-negative population size: ";
            cin >> iCitySize;
        }

        iCityThousands = iCitySize / 1000;
        outfile << "CITY " << iCityNum + 1 << ": ";

        for (int iThousandsCount = 0; iThousandsCount <= iCityThousands - 1; iThousandsCount++)
        {
            outfile << "*";
        }

        outfile << endl;
    }

    outfile.close();
    return 0;
}
