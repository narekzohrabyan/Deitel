#include <iostream>

int main()
{
  int x, y, z;
   int sum, average, product;

std::  cout << "Enter numbers ";
std::  cin  >> x >> y >> z;

  sum = x + y + z;
  average = (x + y + z)/3;
  product = x * y * z;

std::cout << "Sum " << sum << "\n";
std::cout << "Average " << average << "\n";
std::cout << "Product " << product << "\n";

   if ((x<y)&&(x<z))
std::cout << "smallest " << x << "\n";
   if ((y<x)&&(y<z))
std::cout << "smallest " << y << "\n";
   if ((z<x)&&(z<y))
std::cout << "smallest " << z << "\n";
   if ((x>y)&&(x>z))
std::cout << "biggest " << x << "\n";
   if ((x<y)&&(z<y))
 std::cout << "biggest " << y << "\n";
   if ((z>y)&&(z>x))
std::cout << "biggest " << z << "\n";

   return 0;
}
