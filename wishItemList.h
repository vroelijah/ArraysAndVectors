
#include <C:\Users\jumpy\source\repos\PraacticeLabs\wishItem.h>
#include <string>
#include <vector>
#include <iomanip>
#include<algorithm>
int slot=0;
class WishItemList {
private:
	WishItem wishItem[15];
	vector<WishItem>wishItem2;
public:
	WishItemList() {
		for (int i = 0; i < 3; i++) {
			wishItem[i] = WishItem();
			//wishItem2.push_back(WishItem());
		}

	};
	void printAll() {
		double total = 0.0;
		int count = 0;
		for (int i = 0; i < sizeof(wishItem)/sizeof(wishItem[0]); i++) {
			if (wishItem[i].getItem() == "") {
				continue;
			}
			else {
				count++;
				cout << setw(10) << left << count;
				wishItem[i].print(); 
				total += wishItem[i].getPrice();
			}
		}
		cout << "the total amount of list is" << "$" << total << endl;
	};
	void printAll2() {
		double total=0.0;
		int count = 0;
		for (int i = 0; i < wishItem2.size(); i++) {
			cout << setw(10) << left << i+1;
			wishItem2[i].print();
			total += wishItem[i].getPrice();
		}
		cout << "the total amount of list is" << "$" << total << endl;
	};
	void addItem(string item, double price) {
		WishItem add = WishItem( price, item);
		if (slot > 2) {
			cout << "The list is now full" << endl;
		}
		else {
			wishItem[slot] = add;
			slot++;
		}
	};
	void addItem2(string item, double price) {
		WishItem add = WishItem(price, item);
		if (wishItem2.size()>2) {
			cout << "List is full" << endl;
		}
		else {
			wishItem2.push_back(add);
		}
	};// for vector
	void deleteItem(string item) {
		WishItem dele = WishItem();
		for (int i = 0; i < 3; i++) {
			if (wishItem[i].getItem() == item) {
				if (i == 2) {
					wishItem[i] = dele;
					slot--;
				}
				else {
					wishItem[i] = wishItem[i + 1];

				}
			}
			
		}

	};
	void deleteItem2(string item) {
		for (int i = 0; i < wishItem2.size(); i++) {
			if (wishItem2[i].getItem() == item) {
				wishItem2.erase(wishItem2.begin() + i);
			}
		}
	};
	void breakSecret() {
		cout << endl;
		int newNumber = 0;
		
		for (int i = 1; i <= 10; i++) {
			char secretItemArray[] = "mpmafzohklzvmnylf";
			int size = sizeof(secretItemArray) / sizeof(char);
			for (int j = 0; j < size; j++) {
				char ch = secretItemArray[j];
				if ((ch-i) >= 'a' && (ch-i) <= 'z') {
					secretItemArray[j] = ch - i;
				}
				else if((ch-i)<'a') {
					newNumber = 'a'-(ch - i);
					secretItemArray[j] = 'z' - newNumber;

				}
			}


			string secretItem = convertToString(secretItemArray, size);
			cout << "Shift left by " << i << ":" << secretItem << endl; 
		}
	};
	string convertToString(char* alphabet, int size) {
		int i;
		string secretItem = "";
		for (i = 0; i < size - 1; i++) {
			secretItem = secretItem + alphabet[i];
		}
		return secretItem;
	}
	void rainTrap() {
		vector<int>height = { 0,1,0,2,1,0,1,3,2,1,2,1 };

	};

	void loadAll();
	void pointerPractice();
	bool comparePrice(WishItem &s1, WishItem &s2) {
		return (s1.getPrice() < s2.getPrice());
	};
	void sortByPrice() {
		//sort(wishItem2.begin(), wishItem2.end(),comparePrice);
	};
	void sortByAlphabet();
	void searchByItem(string Item) {
		int l = 0;
		int r = wishItem2.size()-1;
		while (l <= r) {
			int mid = l + (r - l) / 2;
			if (wishItem2[mid].getItem() == Item) {
				cout << "The Item has been found" << endl;
				break;
			}
			else if (wishItem2[mid].getItem() > Item) {
				l = mid + 1;
			}
			else {
				r = mid - 1;
			}
		}
		cout << "Item Does not exist" << endl;

	};
	vector<vector<int>> SpiralMatrix(vector<vector<int>>) {

	};
};