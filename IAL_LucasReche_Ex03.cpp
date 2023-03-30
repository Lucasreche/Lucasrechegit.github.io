#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main() {
  float fahrenheit;
  float celsius;

  fahrenheit = 50;

  for (celsius = 0; fahrenheit < 151;) {
    celsius = ((fahrenheit - 32) * 5) / 9;
    cout << celsius << " °C | " << fahrenheit << " °F " << endl;
    fahrenheit = fahrenheit + 1;
  }

  return 0;
}
