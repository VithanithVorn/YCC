#include <iostream>
using namespace std;
int main()
{
	float Milk_stock = 20, liters,unit, Total1,Total2,Total3, clients, Bread = 90, jam = 25, cookies = 100;
	float Discount;
	char options;
	do
	{
		
		cout << "		My shop\n";
		cout << "\noption\tproduct\tunit\tPrice\tStock\n";
		cout << "=======================================\n";
		cout << "1.\tmilk\tliter\t2.00\t" << Milk_stock;
		cout << "\n2.\tBread\tunit\t5.00\t" << Bread;
		cout << "\n3.\tJam\tpack\t5.00\t" << jam;
		cout << "\n4.\tcookies\tpacks\t4.00\t" << cookies;
		cout << "\n======================================\n";
		cout << "5. Finish shopping\n";
		cout << "\noptions=> ";
		cin >> options;
		cout << "\n";
		//The loops
		switch (options)
		{
			case ('1'):
			{
				cout << "How many liters of milk: ";
				cin >> liters;
				Total1 = liters * 2;
				Milk_stock = Milk_stock - liters;
				cout << "Total cost: " << Total1 << "\n";
				cout << "Is there more clients (1-Yes, 0-No)\n";
				cin >> clients;
				if (clients == 1)
				{
					cout << "Total: " << Total1;
					cout << "Discount: ";
					cin >> Discount;
					cout << Total1 * Discount / 100;
				
				}
				if (clients == 0)
				{
					cout << "Total: " << Total1 + Total2;
					cout << "Discount: ";
					cin >> Discount;
					cout << Total1 + Total2 * Discount / 100;
					options = 5;
				}
			}break;
			case ('2'):
			{
				cout << "How many unit of bread: ";
				cin >> unit;
				Total2 = unit * 5;
				Bread = Bread - unit;
				cout << "Total cost: " << Total2 << "\n";
				cout << "Is there more clients (1-Yes, 0-No)\n";
				cin >> clients;
				if (clients == 1)
				{
					cout << "Total: " << Total2;
					cout << "Discount: ";
					cin >> Discount;
					cout << Total2 * Discount / 100;
					
				}
				if (clients == 0)
				{
					cout <<"Total: " << Total1 + Total2;
					cout << "Discount: ";
					cin >> Discount;
					cout << Total1+Total2/ 100 * Discount;
					options = 5;
					
				}
			}break;
			
		
		
		}
	} while (options != 5);
	
	
	return 0;

}