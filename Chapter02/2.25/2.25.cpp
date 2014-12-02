#include<iostream>


int main()
{
int a, b;
std::cout<<"Enter 2 numbers "<<std::endl;
std::cin>>a >> b;
if (b % a==0)
	std::cout<<a<<" multiple "<<b ;
else
	std::cout<<a<<" not multiple "<<b;
return 0;
}
