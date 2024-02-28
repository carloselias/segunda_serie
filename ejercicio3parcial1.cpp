#include <iostream>
#include <stdbool.h>
bool esPrimo(int n)
{
	if (n<=1) 
    return false;
	for (int i=2;i<=n/2;++i)
	{
    	if (n%i==0)
    	return false;
    	else 
    	return true;
  	}
}
int main()
{
	int n=0;
	bool a;
    std::cout<<"ingrese el numero > ";
    std::cin>>n;
    esPrimo(n);
    a=esPrimo(n);
    if (a==true)
	std::cout<<"> si es primo ("<<n<<")";
	else
	std::cout<<"> no es primo ("<<n<<")";
}