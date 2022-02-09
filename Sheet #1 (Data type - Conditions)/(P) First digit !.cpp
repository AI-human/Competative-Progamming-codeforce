#include <iostream>
 
using namespace std;
 
int
main ()
{
  int X;
  cin >> X;
  X = X / 1000;
  if (X % 2 == 0)
    {
      cout << "EVEN\n";
    }
  else
    {
      cout << "ODD\n";
    }
  return 0;
}