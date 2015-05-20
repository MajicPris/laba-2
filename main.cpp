#include<iostream>
//#include<string>
#include<vector>
using namespace std;

	struct kino
	{
		char *cinema;
		char *film;
		int timeH;
		int timeM;
		int coast;
	};

	int main()
	{
		vector<kino> items;
		kino item;
		/*item.(*cinema) = "Indigo";
		item.film = "Star Wars";
		item.timeH = 9;
		item.timeM = 30;
		item.coast = 300;*/
		items.push_back(item);
		char y;
		do{

			cout << "cinema: ";
			cin >> item.cinema;
			cout << "film: ";
			cin >> item.film;
			cout << "hours: ";
			cin >> item.timeH;
			cout << "minutes: ";
			cin >> item.timeM;
			cout << "coast: ";
			cin >> item.coast;
			cout << "Add new item? (y/n)" << endl;
			items.push_back(item);
			cin >> y;
		} while (y == 'y');
		

		cout << "See all items ? (y / n)" << endl;
		cin >> y;
		if (y == 'y')
		{
			for (int i = 0; i < items.size(); i++)
			{
				cout << "seans " << i + 1 << endl;
				cout << "cinema: " << items[i].cinema << endl;
				cout << "film: " << items[i].film << endl;
				cout << "time: " << items[i].timeH << ":" << items[i].timeM << endl;
				cout << "coast: " << items[i].coast << endl;
			}
		}
		items.clear();
		system("pause");
	return 0;
	}
