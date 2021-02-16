#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double Celcius;

  cout << "Time to convert temperatures from Celsius to Fahrenheit! \n" << "What is the temperature, in Celsius, you'd like to convert?\n";

  cin >> Celcius;

  double Fahrenheit = (9/5.0 * Celcius) + 32;

  cout << "Celsius" << Celcius << " degrees is " << Fahrenheit << " degrees Fahrenheit\n";

  return 0;
}
