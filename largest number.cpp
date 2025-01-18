#include<iostream>

int main()
{
	double num1,num2,num3;
	
	std::cout<<"Enter the three numbers:" ;
	std::cin>> num1>> num2>> num3 ;
	
	if(num1>=num2 && num1>=num3)
	{
		std::cout<<"The largest number is:"<<num1 ;
	}
	else if(num2>=num1 && num2>=num3)
	{
		std::cout<<"The largest number is:"<<num2 ;
	}
	else
	{
		std::cout<<"The largest number is:"<<num3 ;
	}
	return 0;
}
