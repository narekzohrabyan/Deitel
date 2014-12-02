#include <iostream>

int main ()
{
int tiv ,a,b,c,d,e;
std::cout<< "Enter five-digit number " ;
std::cin >> tiv;

if(tiv > 99999 || tiv < 10000)

	std::cout << "Try again ";

a = tiv/10000;
b = (tiv/1000)%10;
c = (tiv/100)%10;
d = (tiv/10)%10;
e = tiv%10;

std::cout << a;
std::cout << " " << b;
std::cout << " " << c;
std::cout << " " << d;
std::cout << " " << e;

   return 0;
}
