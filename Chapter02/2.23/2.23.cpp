#include <iostream>


int main ()
{
int a, b, c, d, e;


std::cout << "enter the five numbers!" << std::endl;
std::cin >> a >> b >> c >> d >> e;


int min = a;
int max = a;

if ( b < a )
min = b;
if ( c < b )
min = c;
if ( d < c )
min = d;
if ( e < d )
min = e;

if ( b > a )
max = b;
if ( c > b )
max = c;
if ( d > c )
max = d;
if ( e > d )
max = e;

std::cout << "max = "<< max << std::endl;
std::cout<< "min = "<< min << std::endl;

return 0;
}
