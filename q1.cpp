#include <iostream>

using namespace std;

int main()
{
    float C, F;
    cout << "Enter the temperature of the city in Fahrenheit: ";
    cin>>F;

    C = (F - 32) * 5/9;
    cout << "\nTemperature in Centigrade: " << C <<endl;

    return 0;
}
