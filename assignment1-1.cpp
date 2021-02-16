#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const double rateA = 15.00;
  const double rateB = 12.00;
  const double rateC = 9.00;

  int seatA, seatB, seatC;

  cout << "What a busy day, lets check the sales. \n";

  cout << "How many seats did we sell of A? \n";
  cin >> seatA;
  cout << "How many of B? \n";
  cin >> seatB;
  cout << "How many of C? \n";
  cin >> seatC;

  double totalSales = (seatA * rateA) + (seatB * rateB) + (seatC * rateC);
  
  cout << fixed;
  cout << "In total, we made $";
  cout.precision(2);
  cout << totalSales;

  return 0;
}