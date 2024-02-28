#include <iostream>
int main()
{
	int a,b;
	std::cout<<"ingresar datos, primer numero > ";
	std::cin>>a;
	std::cout<<"segundo numero > ";
	std::cin>>b;
	std::cout<<"suma "<<a<<"+"<<b<<"="<<a+b<<std::endl;
	std::cout<<"resta "<<a<<"-"<<b<<"="<<a-b<<std::endl;
	std::cout<<"multiplicacion "<<a<<"*"<<b<<"="<<a*b<<std::endl;
	std::cout<<"division "<<a<<"/"<<b<<"="<<a/b;
}