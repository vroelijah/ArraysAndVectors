#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

class WishItem
{
private:
	double price;
	string item;
public:
	WishItem() {
		price = 0.0;
		item = "";
	};
	WishItem(double price, string item) {
		this->price = price;
		this->item = item;
	};
	double getPrice() {
		return price;
	};
	string getItem() {
		return item;
	};
	void setPrice(double price) {
		this->price = price;
	};
	void setItem(string item) {
		this->item = item;
	};
	void print() {
		cout << setw(40) << left << getItem() << setw(40) << left << getPrice() << endl;
		/*cout << item << "      ";
		cout <<"$"<< price << endl;*/
	};
};