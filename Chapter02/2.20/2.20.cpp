#include <iostream>


int main()
{
   double pi = 3.14159;
   int R;

 std:: cout << "Enter radius . ";
 std:: cin >> R;

std::cout << "Diameter " << 2 * R << "\n";
std::cout << "Circle " << 2 * pi * R << "\n";
std::cout << "Area " << pi * R * R << "\n";

   return 0;
}
