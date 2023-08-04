
#include <iostream>

constexpr double cm_per_inch = 2.54;            //constexpr can be used for a value that is known before compile time.
double length = 1;                                                //const is used better for expression known AFTER compilation such as a user input

char unit = 0;
int main()
{
    std::cout << "Please enter a length followed by a unit (c or i): ";
    while (std::cin >> length >> unit)
    {
        if (unit == 'i') {
            std::cout << length << "\nin ==" << cm_per_inch * length << "cm\n";
        }
        else if(unit == 'c')
        {
            std::cout << length << "\ncm ==" << length / cm_per_inch << "in\n";
        }
        else
        {
            std::cout << "That is not a valid unit.";
        }
    }
    system("pause");
}