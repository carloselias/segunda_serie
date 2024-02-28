#include <iostream>
int main()
{	
int n1,n2;
std::cout<<"ingrese un numero entero positivo > ";
std::cin>>n1;
for(int i=1;i<=n1;i++)
	{
		n2+=i;
		if (i==1)
		std::cout<<"suma de numeros enteros desde 1 hasta "<<n1<<"> "<<i;
		else
		std::cout<<"+"<<i;
	}
	std::cout<<"="<<n2;
}