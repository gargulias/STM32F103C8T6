#include <iostream.h>

void main(void)
{
	int a = 1001;
	int& a_alias = a;

	float price = 39.95;
	float& price_alias = price;

	cout << " source a -" << a << "alternative -" << a_alias;
	cout << "\nPrice -" << price << "alternative -" << price_alias;
	a_alias++;
	cout << " source a -" << a << "alternative -" << a_alias;
}
