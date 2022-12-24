#include <C:\Users\jumpy\source\repos\PraacticeLabs\wishItemList.h>

#include <iostream>
#include <string>
using namespace std;


int main()
{
	WishItemList List;
	char options;
	string item;
	double price;

	do
	{
		cout <<
			"\n(p)- print all items on the list." <<
			"\n(a)- add an item to the list." <<
			"\n(d)- delete an item from the list"
			"\n(b)- decrypt the scret string 'mpmafzohklzvmnylf'" <<
			"\n(r)- do the rain question" <<
			"\n(q)- quit the program"
			"\n Please Select an option";
		cin >> options;
		switch (options)
		{
		case 'p':
			List.printAll2();
			break;
		case 'a':
			cin >> item;
			cin >> price;
			List.addItem2( item,  price);
			break;
		case 'd':
			cin >> item;
			List.deleteItem2( item);
				break;
		case 'b':
			List.breakSecret();
				break;
		case 'r':
			List.rainTrap();
			break;
		}
	} while (options != 'q');
}