#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Eshop {
public:
	string product_name[5] = { "rezystor", "trazystor", "dioda", "kondensator", "cewka" };
	double product_price[5] = { 5, 8, 3, 5, 17 };
	int product_quantity[5] = { 0, 0, 0, 0, 0 };
	
	Eshop() {
		cout << "WITAJ W SKLEPIE ELEKTRONICZNYM" << endl;
	}
	void showProduct() {
		for (int i = 0; i < sizeof(product_name)/sizeof(string); i++) {
			cout << (i+1) <<". nazwa: " << product_name[i] << " - " << product_price[i] << " (zamowiono: " << product_quantity[i] << " )" << endl;
		}
	}
	void orderProduct(int i, int quantity) {
		product_quantity[i] = quantity;
	}
	void showBasket() {
		double sum = 0;
		cout << "KOSZYK ZAKUPOW" << endl;
		for (int i = 0; i < sizeof(product_name) / sizeof(string); i++) {
			if (product_quantity[i] > 0) {
				cout << (i + 1) << ". nazwa: " << product_name[i] << " - " << product_price[i] << " (zamowiono: " << product_quantity[i] << " )" << endl;
				sum = sum + (product_price[i] * product_quantity[i]);
			}
		}
		cout << "RAZEM: " << sum << endl;
	}
};

int main()
{
	// metoda główna //
	Eshop eshop;
	eshop.showProduct();
	eshop.orderProduct(0, 10);
	eshop.showBasket();
	eshop.showProduct();
	eshop.orderProduct(3, 5);
	eshop.showBasket();


}