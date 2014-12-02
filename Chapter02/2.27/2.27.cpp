#include <iostream>


int main()
{
std::cout << 'A' << " = " << static_cast< int >( 'A' ) << std::endl
      << 'B' << " = " << static_cast< int >( 'B' ) << std:: endl
      << 'C' << " = " << static_cast< int >( 'C' ) << std:: endl
      << 'a' << " = " << static_cast< int >( 'a' ) << std::endl
      << 'b' << " = " << static_cast< int >( 'b' ) << std::endl
      << 'c' << " = " << static_cast< int >( 'c' ) << std:: endl
      << '0' << " = " << static_cast< int >( '0' ) << std::endl
      << '1' << " = " << static_cast< int >( '1' ) << std::endl
      << '2' << " = " << static_cast< int >( '2' ) << std::endl
      << '$' << " = " << static_cast< int >( '$' ) << std:: endl
      << '*' << " = " << static_cast< int >( '*' ) << std::endl
      << '+' << " = " << static_cast< int >( '+' ) << std:: endl
      << '/' << " = " << static_cast< int >( '/' ) << std:: endl
      << ' ' << " = " << static_cast< int >( ' ' ) << std::endl;

   return 0;
}
