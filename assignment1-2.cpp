#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double Celsius;

  cout << "Time to convert temperatures from Celsius to Fahrenheit! \n" << "What is the temperature, in Celsius, you'd like to convert?\n";

  cin >> Celsius;

  double Fahrenheit = (9/5.0 * Celsius) + 32;

  cout << "Celsius" << Celsius << " degrees is " << Fahrenheit << " degrees Fahrenheit\n";

  return 0;
}
