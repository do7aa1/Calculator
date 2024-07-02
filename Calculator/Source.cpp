#include<iostream>
#include"operations.h"
using namespace std;
int main()
{
	operations o;
	int ans;
	do
	{
		cout << "1 - For adding \n";
		cout << "2 - For subtracting \n";
		cout << "3 - For multiplying \n";
		cout << "4 - For division \n";
		cin >> ans;
	} while (ans != 1&& ans != 2 && ans != 3 && ans !=4 );
	switch (ans)
	{
	case 1:
	{
		double a, b;
		cout << "Enter the two numbers : \n";
		cin >> a >> b;
		cout << "The result = " << o.add(a, b);
		break;
	}
	case 2:
	{
		double a, b;
		cout << "Enter the two numbers : \n";
		cin >> a >> b;
		cout << "The result = " << o.sub(a, b);
		break;
	}
	case 3:
	{
		double a, b;
		cout << "Enter the two numbers : \n";
		cin >> a >> b;
		cout << "The result = " << o.multiply(a, b);
		break;
	}
	case 4:
	{
		double a, b;
		cout << "Enter the two numbers : \n";
		cin >> a >> b;
		while (b==0)
		{
			cout << "You can not divide by zero, please enter another number : ";
			cin >> b;
		}
		cout << "The result = " << o.divide(a, b);
		break;
	}
	default:
		break;
	}
}