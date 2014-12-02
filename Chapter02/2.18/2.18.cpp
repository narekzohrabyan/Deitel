#include <iostream>

int main()
{
   int i, j;

   std :: cout << "Enter numbers   ";
 std ::  cin >> i >> j;

   if(i > j)
	   std::cout << "Big  " << i;
   else if(i == j)
	   std::cout << "equal  ";
   else
	   std::cout << " Big " << j;

   return 0;
}
