#include "display.h"
#include "room.h"
#include "Hotel.h"
#include <iostream>
#include <algorithm>
#include <Windows.h>
#include <string>
#include <vector>
#include <errors.h>
using namespace std;

display::display(vector<Hotel>  hotels_arrlist)
{
	this->hotels_arr = hotels_arrlist;
}

void display::home_page()
{
	system("color F0");
	cout << "\n\t\t\t\t\t|->) Welcon To Trivago System (<-|\n\n\n";
	cout << "\t\t\tpress (1) to go to admin page\n" << endl;
	cout << "\t\t\tpress (2) to go to user page\n" << endl;
	cout << "\t\t\tpress (3) to Exit From Trivago\n" << endl;
	int choice;
	while (true)
	{
		cout << "\t\t\t-:";
		cin >> choice;
		if (choice == 1) {
			system("cls");
			int j;
			cout << "\n\n\n\n";
			while (true)
			{

				cout << "\n\t\t\ttype the password or press (1) to Exit :- ";
				cin >> j;
				if (j == 12345) {
					system("cls");
					this->admin_page();
					break;
				}
				else if (j == 1) {
					system("cls");
					this->home_page();
					break;
				}
				else
				{
					cout<<"\t\t\tinvalid input, Please try again" << endl; 
				}
			}
			break;
		}
		else if (choice == 2) {
			system("cls");
			this->user_page();
			break;
		}
		else if (choice == 3) {
			system("cls");
			break;
		}
		else {
			cout << "\t\t\tinvalid input, try again\n";
		}
		
	}
}

void display::user_page()
{
	system("color F3");
	cout << "\n\t\t\tpress (1) to display all hotels\n" << endl;
	cout << "\t\t\tpress (2) to search hotels by name (with more data)\n" << endl;
	cout << "\t\t\tpress (3) to filter the hotels\n" << endl;
	cout << "\t\t\tpress (4) to Exit\n" << endl;
	int y;
	while (true) {

		cout << "\t\t\t-:";
		cin >> y;
		if (y == 1) {
			system("cls");
			this->hotels_info();
			break;
		}
		else if (y == 2) {
			system("cls");
			this -> hotel_info();
			break;
		}
		else if (y == 3) {
			system("cls");
			this->filter_page();
			break;
		}
		else if (y == 4) {
			system("cls");
			this->home_page();
			break;
		}
		else {
			cout<<"\t\t\tinvalid input, please try again\n";
		}
	}

}

void display::admin_page()
{
	system("color FC");
	cout << "\n\t\t\tpress (1) to display all hotels\n" << endl;
	cout << "\t\t\tpress (2) to add a new hotel or a room to  anhotel\n" << endl;
	cout << "\t\t\tpress (3) to update an hotel or a room from hotel\n" << endl;
	cout << "\t\t\tpress (4) to delete an hotel or a room from hotel\n" << endl;
	cout << "\t\t\tpress (5) to Exit\n" << endl;
	int y;
	while (true) {

		cout << "\t\t\t-:";
		cin >> y;
		if (y == 1) {
			system("cls");
			this->hotels_info();
			break;
		}
		else if (y == 2) {
			system("cls");
			this->add_page();
			break;
		}
		else if (y == 3) {
			system("cls");
			this->update_page();
			break;
		}
		else if (y == 4) {
			system("cls");
			this->delete_page();
			break;
		}
		else if (y == 5) {
			system("cls");
			this->home_page();
			break;
		}
		else {
			cout<<"\t\t\tinvalid input, please try again\n";
		}
	}
}


void display::filter_page()
{
	int y;
	cout << "\n\t\t\tpress (1) to filter by specific time\n" << endl;
	cout << "\t\t\tpress (2) to filter by stars\n" << endl;
	cout << "\t\t\tpress (3) to filter by Gym\n" << endl;
	cout << "\t\t\tpress (4) to filter by Pool\n" << endl;
	cout << "\t\t\tpress (5) to filter by Wifi\n" << endl;
	cout << "\t\t\tpress (6) to filter by Tv\n" << endl;
	cout << "\t\t\tpress (7) to cancel filter\n" << endl;

	while (true) {

		cout << "\t\t\t-:";
		cin >> y;
		if (y == 1) {
			system("cls");
			this->filter_time();
			break;
		}
		else if (y == 2) {
			system("cls");
			this->filter_stars();
			break;
		}
		else if (y == 3) {
			system("cls");
			this->filter_gym();
			break;
		}
		else if (y == 4) {
			system("cls");
			this->filter_pool();
			break;
		}
		else if (y == 5) {
			system("cls");
			this->filter_wifi();
			break;
		}
		else if (y == 6) {
			system("cls");
			this->filter_tv();
			break;
		}
		else if (y == 7) {
			system("cls");
			this->hotels_info();
			break;
		}
		else {
			cout<<"\t\t\tinvalid input, Please try again\n";
		}
	}
}

void display::update_page()
{
	int x = this->search_name();
	vector<int> z = this->search_location();
	int c = -1;
	for (int i = 0; i < z.size(); i++) {
		if (z.at(i) == x)
			c = x;
	}
	if (c != -1) {
		system("cls");
		this->hotels_arr.at(c).display_hotel_with_rooms();
		cout << "\n\t\t\tpress (1) to back\n" << endl;
		cout << "\t\t\tpress (2) to update\n" << endl;
		cout << "\t\t\tpress (3) to research\n" << endl;

		int y;
		while (true) {

			cout << "\t\t\t-:";
			cin >> y;
			if (y == 1) {
				system("cls");
				this->admin_page();
				break;
			}
			else if (y == 2) {
				system("cls");
				this->update_hotel(c);
				break;
			}
			else if (y == 3) {
				system("cls");
				this->update_page();
				break;
			}
			else {
				cout<<"\t\t\tinvalid input, please try again\n";
			}
		}
	}
	else {
		cout << "\n\t\t\tsorry, there is no hotel with this name\n" << endl;
		cout << "\t\t\tpress (1) to back\n" << endl;
		cout << "\t\t\tpress (2) to research\n" << endl;
		int y;
		while (true) {

			cout << "\t\t\t-:";
			cin >> y;
			if (y == 1) {
				system("cls");
				this->admin_page();
				break;
			}
			else if (y == 2) {
				system("cls");
				this->update_page();
				break;
			}
			else {
				cout<<"\t\t\tinvalid input, please try again\n";
			}
		}
	}

}

void display::update_hotel(int updated_hotel_indix)
{
	this->hotels_arr.at(updated_hotel_indix).display_hotel_without_rooms();
	cout << "\n\t\t\tpress (1) to back\n" << endl;
	cout << "\t\t\tpress (2) to update name\n" << endl;
	cout << "\t\t\tpress (3) to update address\n" << endl;
	cout << "\t\t\tpress (4) to update stars\n" << endl;
	cout << "\t\t\tpress (5) to update hotel extras\n" << endl;
	cout << "\t\t\tpress (6) to update free meals\n" << endl;
	cout << "\t\t\tpress (7) to update visitors comments\n" << endl;
	cout << "\t\t\tpress (8) to update rooms\n" << endl;
	int y;
	while (true) {

		cout << "\t\t\t-:";
		cin >> y;
		if (y == 1) {
			system("cls");
			this->admin_page();
			break;
		}
		if (y == 2) {
			system("cls");
			this->update_hotel_name(updated_hotel_indix);
			break;
		}
		if (y == 3) {
			system("cls");
			this->update_hotel_address(updated_hotel_indix);
			break;
		}
		if (y == 4) {
			system("cls");
			this->update_hotel_stars(updated_hotel_indix);
			break;
		}
		if (y == 5) {
			system("cls");
			this->update_hotel_extras(updated_hotel_indix);
			break;
		}
		if (y == 6) {
			system("cls");
			this->update_hotel_free_meals(updated_hotel_indix);
			break;
		}
		if (y == 7) {
			system("cls");
			this->update_hotel_vistors_comments(updated_hotel_indix);
			break;
		}
		if (y == 8) {
			system("cls");
			this->update_hotel_room(updated_hotel_indix);
			break;
		}
		else {
			cout<<"\t\t\tinvalid input, please try again\n";
		}
	}
}

void display::update_hotel_name(int updated_hotel_indix)
{
	cout << "\n\t\t\tenter new name :- ";
	string s;
	getline(cin >> ws, s);
	this->hotels_arr.at(updated_hotel_indix).name = s;
	cout << "\n\n\t\t\tname had been updated :)\n\n";
	this->update_hotel(updated_hotel_indix);
}

void display::update_hotel_address(int updated_hotel_indix)
{
	cout << "\n\t\t\tenter country :- ";
	string s1;
	getline(cin >> ws, s1);
	cout << "\n\t\t\tenter city :- ";
	string s2;
	getline(cin >> ws, s2);
	this->hotels_arr.at(updated_hotel_indix).country = s1;
	this->hotels_arr.at(updated_hotel_indix).location = s2;
	cout << "\n\n\t\t\taddress had been updated :)\n\n" << endl;
	this->update_hotel(updated_hotel_indix);
}

void display::update_hotel_stars(int updated_hotel_indix)
{
	cout << "\n\t\t\tenter number of stars from (1) to (5) :- ";
	int s1;
	while (true)
	{
		cin >> s1;
		if (s1 >= 1 && s1 <= 5) {
			this->hotels_arr.at(updated_hotel_indix).stars = s1;
			cout << "\n\n\t\t\tnumber of stars had been updated :)\n\n" << endl;
			this->update_hotel(updated_hotel_indix);
			break;
		}
		else
			cout<<"\t\t\tinvalid input, please try again\n";
	}

}

void display::update_hotel_extras(int updated_hotel_indix)
{
	cout << "\n\t\t\tpress (1) if hotel have a pool\n" << endl;
	cout << "\t\t\tpress (2) if hotel don't have a pool\n" << endl;
	while (true) {
		int x;
		cout << "\t\t\t-:";
		cin >> x;
		if (x == 1) {
			this->hotels_arr.at(updated_hotel_indix).pool = true;
			break;
		}
		else if (x == 2) {
			this->hotels_arr.at(updated_hotel_indix).pool = false;
			break;
		}
		else
			cout<<"\t\t\tinvalid input, please try again\n";

	}
	cout << "\n\t\t\tpress (1) if hotel have a Gym\n" << endl;
	cout << "\t\t\tpress (2) if hotel don't have a Gym\n" << endl;
	while (true) {
		int x;
		cout << "\t\t\t-:";
		cin >> x;
		if (x == 1) {
			this->hotels_arr.at(updated_hotel_indix).gym = true;
			break;
		}
		else if (x == 2) {
			this->hotels_arr.at(updated_hotel_indix).gym = false;
			break;
		}
		else
			cout<<"\t\t\tinvalid input, please try again\n";

	}
	cout << "\n\n\t\t\tExtras had been updated :)\n\n" << endl;
	this->update_hotel(updated_hotel_indix);
}

void display::update_hotel_free_meals(int updated_hotel_indix)
{
	this->hotels_arr.at(updated_hotel_indix).display_hotel_free_meals();
	cout << "\n\t\t\tPress (1) to add a new free meal\n" << endl;
	cout << "\t\t\tPress (2) to delete a free meal\n" << endl;
	cout << "\t\t\tPress (3) to Exit\n" << endl;
	int k;
	while (true) {
		cout << "\t\t\t-:";
		cin >> k;
		if (k == 1) {
			system("cls");
			string s;
			cout << "\n\t\t\tenter the free meal :- ";
			getline(cin >> ws, s);
			this->hotels_arr.at(updated_hotel_indix).free_meals.push_back(s);
			cout << "\n\n\t\t\tfree meal had been added :)\n\n" << endl;
			this->update_hotel_free_meals(updated_hotel_indix);
			break;
		}
		else if (k == 2) {
			system("cls");
			int s;
			cout << "\n\t\t\tenter the free meal index :- ";
			cin >> s;
			this->hotels_arr.at(updated_hotel_indix).free_meals.erase(this->hotels_arr.at(updated_hotel_indix).free_meals.begin() + s);
			cout << "\n\n\t\t\tfree meal had been deleted :)\n\n" << endl;
			this->update_hotel_free_meals(updated_hotel_indix);
			break;
		}
		else if (k == 3) {
			system("cls");
			this->update_hotel(updated_hotel_indix);
			break;
		}
		else
			cout<<"\t\t\tinvalid input, please try again\n";
	}
}

void display::update_hotel_vistors_comments(int updated_hotel_indix)
{
	this->hotels_arr.at(updated_hotel_indix).display_hotel__visitors_comments();
	cout << "\n\t\t\tPress (1) to add a new visitor comment\n" << endl;
	cout << "\t\t\tPress (2) to delete a visitor comment\n" << endl;
	cout << "\t\t\tPress (3) to Exit\n" << endl;
	int k;
	while (true) {
		cout << "\t\t\t-:";
		cin >> k;
		if (k == 1) {
			system("cls");
			string s;
			cout << "\n\t\t\tenter the comment :- ";
			getline(cin >> ws, s);
			this->hotels_arr.at(updated_hotel_indix).v_comments.push_back(s);
			cout << "\n\n\t\t\tcomment had been added :)\n\n" << endl;
			this->update_hotel_vistors_comments(updated_hotel_indix);
			break;
		}
		else if (k == 2) {
			system("cls");
			int s;
			cout << "\n\t\t\tenter the comment index :- ";
			cin >> s;
			this->hotels_arr.at(updated_hotel_indix).v_comments.erase(this->hotels_arr.at(updated_hotel_indix).v_comments.begin() + s);
			cout << "\n\n\t\t\tcomment had been deleted :)\n\n" << endl;
			this->update_hotel_vistors_comments(updated_hotel_indix);
			break;
		}
		else if (k == 3) {
			system("cls");
			this->update_hotel(updated_hotel_indix);
			break;
		}
		else
			cout<<"\t\t\tinvalid input, please try again\n";
	}
}

void display::update_hotel_room(int updated_hotel_indix)
{
	while (true) {
		int k = this->search_hotel_room(this->hotels_arr.at(updated_hotel_indix));
		if (k != -1) {
			system("cls");
			this->hotels_arr.at(updated_hotel_indix).room_arr.at(k).display_room();
			cout << "\n\t\t\tPress (1) to update extras\n" << endl;
			cout << "\t\t\tPress (2) to update reservation duration\n" << endl;
			cout << "\t\t\tPress (3) to back\n" << endl;

			int y;
			while (true) {

				cout << "\t\t\t-:";
				cin >> y;
				if (y == 3) {
					system("cls");
					this->update_hotel(updated_hotel_indix);
					break;
				}
				else if (y == 1) {
					system("cls");
					this->update_hotel_room_extras(k, updated_hotel_indix);
					break;
				}
				else if (y == 2) {
					system("cls");
					this->update_hotel_room_reservation_duration(k, updated_hotel_indix);
					break;
				}
				else {
					cout << "\t\t\tinvalid input, please try again\n";
				}
			}
			break;
		}
		else {

			cout << "\t\t\tinvalid input, please try again\n";
		}
	}
}

void display::update_hotel_room_extras(int updated_hotel_room_indix, int updated_hotel_indix)
{
	cout << "\n\t\t\tPress (1) if the room is for single\n" << endl;
	cout << "\t\t\tPress (2) if the room is for double\n" << endl;
	while (true) {
		int x;
		cout << "\t\t\t-:";
		cin >> x;
		if (x == 1) {
			this->hotels_arr.at(updated_hotel_indix).room_arr.at(updated_hotel_room_indix).single = true;
			break;
		}
		else if (x == 2) {
			this->hotels_arr.at(updated_hotel_indix).room_arr.at(updated_hotel_room_indix).single = false;
			break;
		}
		else
			cout<<"\t\t\tinvalid input, please try again\n";

	}
	cout << "\n\t\t\tPress (1) if room have Tv\n" << endl;
	cout << "\t\t\tPress (2) if room don't have Tv\n" << endl;
	while (true) {
		int x;
		cout << "\t\t\t-:";
		cin >> x;
		if (x == 1) {
			this->hotels_arr.at(updated_hotel_indix).room_arr.at(updated_hotel_room_indix).tv = true;
			break;
		}
		else if (x == 2) {
			this->hotels_arr.at(updated_hotel_indix).room_arr.at(updated_hotel_room_indix).tv = false;
			break;
		}
		else
			cout<<"\t\t\tinvalid input, please try again\n";

	}
	cout << "\n\t\t\tPress (1) if room have Wifi\n" << endl;
	cout << "\t\t\tPress (2) if room don't have Wifi\n" << endl;
	while (true) {
		int x;
		cout << "\t\t\t-:";
		cin >> x;
		if (x == 1) {
			this->hotels_arr.at(updated_hotel_indix).room_arr.at(updated_hotel_room_indix).wifi = true;
			break;
		}
		else if (x == 2) {
			this->hotels_arr.at(updated_hotel_indix).room_arr.at(updated_hotel_room_indix).wifi = false;
			break;
		}
		else
			cout<<"\t\t\tinvalid input, please try again\n";
	}
	cout << "\n\n\t\t\tRoom Extras had been updated :)\n\n" << endl;
	this->update_hotel_room(updated_hotel_indix);
}

void display::update_hotel_room_reservation_duration(int updated_hotel_room_indix, int updated_hotel_indix)
{
	res_duration new_res_dur;
	cout << "\n\t\t\tEnter Start date\n\n" << endl;
	while (true)
	{
		int y;
		cout << "\t\t\tDay :- ";
		cin >> y;
		if ((y >= 1) && (y <= 31)) {
			new_res_dur.start_date.day = y;
			break;
		}
		else {
			cout<<"\t\t\tinvalid input, please try again\n";
		}
	}
	while (true)
	{
		int y;
		cout << "\t\t\tMonth :- ";
		cin >> y;
		if ((y >= 1) && (y <= 12)) {
			new_res_dur.start_date.month = y;
			break;
		}
		else {
			cout<<"\t\t\tinvalid input, please try again\n";
		}
	}
	while (true)
	{
		int y;
		cout << "\t\t\tYear :- ";
		cin >> y;
		if ((y >= 2000) && (y <= 3000)) {
			new_res_dur.start_date.year=y;
			break;
		}
		else {
			cout<<"\t\t\tinvalid input, please try again\n";
		}
	}
	cout << "\t\t\tEnter End date" << endl;
	while (true)
	{
		int y;
		cout << "\t\t\tDay :- ";
		cin >> y;
		if ((y >= 1) && (y <= 31)) {
			new_res_dur.end_date.day = y;
			break;
		}
		else {
			cout<<"\t\t\tinvalid input, please try again\n";
		}
	}
	while (true)
	{
		int y;
		cout << "\t\t\tMonth :- ";
		cin >> y;
		if ((y >= 1) && (y<= 12)) {
			new_res_dur.end_date.month=y;
			break;
		}
		else {
			cout<<"\t\t\tinvalid input, please try again\n";
		}
	}
	while (true)
	{
		int y;
		cout << "\t\t\tYear :- ";
		cin >> y;
		if ((y >= 2000) && (y <= 3000)) {
			new_res_dur.end_date.year=y;
			break;
		}
		else {
			cout<<"\t\t\tinvalid input, please try again\n";
		}
	}
	this->hotels_arr.at(updated_hotel_indix).room_arr.at(updated_hotel_room_indix).res_dur = new_res_dur;
	cout << "\n\n\t\t\troom reservation duration had been updated :)\n\n" << endl;
	this->update_hotel_room(updated_hotel_indix);
}

void display::delete_page_keys()
{
	cout << "\n\t\t\tsorry, there is nothing in this name\n" << endl;
	cout << "\t\t\tPress (1) to cancel\n" << endl;
	cout << "\t\t\tPress (2) to research\n" << endl;
	int y;
	while (true) {

		cout << "\t\t\t-:";
		cin >> y;
		if (y == 1) {
			system("cls");
			this->home_page();
			break;
		}
		else if (y == 2) {
			system("cls");
			this->delete_page();
			break;
		}
		else {
			cout<<"\t\t\tinvalid input, please try again\n";
		}
	}
}

void display::delete_page()
{
	int x = this->search_name();
	vector<int> z = this->search_location();
	int c = -1;
	for (int i = 0; i < z.size(); i++) {
		if (z.at(i) == x)
			c = x;
	}
	if (c != -1) {
		this->hotels_arr.at(c).display_hotel_with_rooms();
		this->delete_hotel(c);
	}
	else {
		system("cls");
		this->delete_page_keys();
	}
}

void display::delete_hotel(int delete_hotel_indix)
{
	cout << "\n\t\t\tPress (1) to cancel\n" << endl;
	cout << "\t\t\tPress (2) to delete the hotel\n" << endl;
	cout << "\t\t\tPress (3) to research\n" << endl;
	cout << "\t\t\tPress (4) to delete a room\n" << endl;

	int y;
	while (true) {

		cout << "\t\t\t-:";
		cin >> y;
		if (y == 1) {
			system("cls");
			this->admin_page();
			break;
		}
		else if (y == 2) {
			system("cls");
			this->hotels_arr.erase(this->hotels_arr.begin() + delete_hotel_indix);
			cout << " hotel had been deleted" << endl;
			this->admin_page();
			break;
		}
		else if (y == 3) {
			system("cls");
			this->delete_page();
			break;
		}
		else if (y == 4) {
			system("cls");
			this->delete_room_page(delete_hotel_indix);
			break;
		}
		else {
			cout << "\t\t\tinvalid input, please try again\n";
		}
	}

}

void display::delete_room_page(int hotel_index_to_delet_room_from)
{
	int k = search_hotel_room(this->hotels_arr.at(hotel_index_to_delet_room_from));
	if (k != -1) {
		system("cls");
		this->hotels_arr.at(hotel_index_to_delet_room_from).room_arr.at(k).display_room();
		cout << "\n\t\t\tPress (1) to cancel\n" << endl;
		cout << "\t\t\tPress (2) to delete\n" << endl;
		cout << "\t\t\tPress (3) to research\n" << endl;
		int y;
		while (true) {

			cout << "\t\t\t-:";
			cin >> y;
			if (y == 1) {
				system("cls");
				this->delete_hotel(hotel_index_to_delet_room_from);
				break;
			}
			else if (y == 2) {
				system("cls");
				this->hotels_arr.at(hotel_index_to_delet_room_from).room_arr.erase(this->hotels_arr.at(hotel_index_to_delet_room_from).room_arr.begin() + k);
				cout << "\t\t\troom had been deleted :)" << endl;
				this->admin_page();
				break;
			}
			else if (y == 3) {
				system("cls");
				this->delete_room_page(hotel_index_to_delet_room_from);
				break;
			}
			else {
				cout << "\t\t\tinvalid input, please try again\n";
			}
		}
	}
	else {
		cout << "\t\t\tinvalid input, please try again\n";
	}
}

void display::add_page()
{
	cout << "\n\t\t\tPress (1) to add hotel\n" << endl;
	cout << "\t\t\tPress (2) to back\n" << endl;
	int y;
	while (true) {

		cout << "\t\t\t-:";
		cin >> y;
		if (y == 1) {
			system("cls");
			this->add_hotel();
			break;
		}
		else if (y == 2) {
			system("cls");
			this->admin_page();
			break;
		}
		else {
			cout << "\t\t\tinvalid input, please try again\n";
		}
	}


}

void display::add_hotel()
{
	Hotel new_hotel;
	cout << "\n\t\t\tEnter hotel name :- ";
	getline(cin >> ws, new_hotel.name);
	cout << "\t\t\tRnter hotel country :- ";
	getline(cin >> ws, new_hotel.country);
	cout << "\t\t\tEnter hotel city :- ";
	getline(cin >> ws, new_hotel.location);
	cout << "\t\t\tEnter hotel stars from (1) to (5) " << endl;
	int x;
	while (true) {
		cout << "\t\t\t-:";
		cin >> x;
		if ((x >= 1) && (x <= 5)) {
			new_hotel.stars = x;
			break;
		}
		else
			cout << "\t\t\tinvalid input, please try again\n";

	}
	cout << "\n\t\t\tPress (1) if hotel have a pool\n " << endl;
	cout << "\t\t\tPress (2) if hotel don't have a pool \n" << endl;
	while (true) {
		int x;
		cout << "\t\t\t-:";
		cin >> x;
		if (x == 1) {
			new_hotel.pool = true;
			break;
		}
		else if (x == 2) {
			new_hotel.pool = false;
			break;
		}
		else
			cout << "\t\t\tinvalid input, please try again\n";

	}
	cout << "\n\t\t\tPress (1) if hotel have a Gym\n " << endl;
	cout << "\t\t\tPress (2) if hotel don't have a Gym\n " << endl;
	while (true) {
		int x;
		cout << "\t\t\t-:";
		cin >> x;
		if (x == 1) {
			new_hotel.gym = true;
			break;
		}
		else if (x == 2) {
			new_hotel.gym = false;
			break;
		}
		else
			cout << "\t\t\tinvalid input, please try again\n";

	}
	cout << "\n\t\t\tPress (1) to add\n" << endl;
	cout << "\t\t\tPress (2) to cancel\n" << endl;
	while (true) {
		int y;
		cout << "\t\t\t-:";
		cin >> y;
		if (y == 1) {
			system("cls");
			this->hotels_arr.push_back(new_hotel);
			cout << "\n\n\t\t\thotel had been added :)\n\n" << endl;
			this->add_page();
			break;
		}
		else if (y == 2) {
			system("cls");
			this->add_page();
			break;
		}
		else {
			cout << "\t\t\tinvalid input, please try again\n";
		}
	}
}


void display::hotels_info()
{
	int x = this->hotels_arr.size();
	for (int i = 0; i < x; i++)
	{
		this->hotels_arr.at(i).display_hotel_without_rooms();
	}
	cout << "\n\t\t\tPress (1) to filter the hotels\n" << endl;
	cout << "\t\t\tPress (2) to search hotels by name (with more data)\n" << endl;
	cout << "\t\t\tPress (3) to Exit\n" << endl;
	int y;
	while (true) {

		cout << "\t\t\t-:";
		cin >> y;
		if (y == 3) {
			system("cls");
			this->home_page();
			break;
		}
		else if (y == 1) {
			system("cls");
			this->filter_page();
			break;
		}
		else if (y == 2) {
			system("cls");
			this->hotel_info();
			break;
		}
		else {
			cout<<"\t\t\tinvalid input, please try again\n";
		}
	}
}

void display::hotel_info()
{
	int x = this->search_name();
	if (x!=-1) {
		this->hotels_arr.at(x).display_hotel_with_rooms();
		this->hotel_info_keys();
	}
	else {
		system("cls");
		cout << "\n\t\t\tsorry, there is no hotel with this name\n" << endl;
		this->hotel_info_keys();
	}
}

void display::hotel_info_keys()
{
	cout << "\n\t\t\tPress (1) to go to Home page\n" << endl;
	cout << "\t\t\tPress (2) to filter the hotels\n" << endl;
	cout << "\t\t\tPress (3) to display all hotels\n" << endl;
	cout << "\t\t\tPress (4) to research\n" << endl;
	int y;
	while (true) {

		cout << "\t\t\t-:";
		cin >> y;
		if (y == 1) {
			system("cls");
			this->home_page();
			break;
		}
		else if (y == 2) {
			system("cls");
			this->filter_page();
			break;
		}
		else if (y == 3) {
			system("cls");
			this->hotels_info();
			break;
		}
		else if (y == 4) {
			system("cls");
			this->hotel_info();
			break;
		}
		else {
			cout<<"\t\t\tinvalid input, please try again\n";
		}
	}
}

int display::search_name()
{
	int x;
	string c;
	cout << "\n\n\t\t\tEnter Hotel name :- ";
	getline(cin >> ws, c);
	for_each(c.begin(), c.end(), [](char& f) {
		f = ::toupper(f);
		});
	for (int i = 0; i < hotels_arr.size(); i++)
	{
		string d = this->hotels_arr.at(i).name;
		for_each(d.begin(), d.end(), [](char& f) {
			f = ::toupper(f);
			});
		if (d == c) {
			x=i;
		}
	}
	return x;
}

int display::search_hotel_room(Hotel hotel_to_search_in)
{
	int k, s=-1;
	bool t;
	cout << "\n\t\t\tenter room number :- ";
	cin >>k;
	for (int i = 0; i < hotel_to_search_in.room_arr.size(); i++) {
		if (k == hotel_to_search_in.room_arr.at(i).room_num) {
			s = i;
		}
	}
	return s;
}

vector<int> display::search_location()
{
	vector<int>  x;
	string c, l;
	cout << "\n\n\t\t\tEnter Country :- ";
	getline(cin >> ws, c);
	for_each(c.begin(), c.end(), [](char& f) {
		f = ::toupper(f);
		});
	cout << "\n\t\t\tEnter City :- ";
	getline(cin >> ws, l);
	for_each(l.begin(), l.end(), [](char& f) {
		f = ::toupper(f);
		});
	int a = this->hotels_arr.size();
	for (int i = 0; i < a; i++)
	{
		string d = this->hotels_arr.at(i).country;
		string g = this->hotels_arr.at(i).location;
		for_each(d.begin(), d.end(), [](char& f) {
			f = ::toupper(f);
			});
		for_each(g.begin(), g.end(), [](char& f) {
			f = ::toupper(f);
			});
		if ((d == c) && (g == l)) {
			x.push_back(i);

		}
	}
	return x;
}

void display::filter_time()
{
	int day1, month1, year1, day2, month2, year2;
	cout << "\n-----------------------------------------------------the start date-----------------------------------------------------\n" << endl;
	cout << "\t\t\tenter the day: ";
	cin >> day1;
	
	if (day1 <= 0 || day1 >= 32) {
		for (int i = 1; i > 0; i++) {
			cout << "\t\t\tplease enter valid data" << endl;
			cout << "\t\t\tenter the day: ";
			cin >> day1;
			if (day1 > 0 && day1 < 32){
				break;
				}
		}

	}
	cout << "\t\t\tenter the month: ";
	cin >> month1;
	if (month1 <= 0 || month1>=13) {
		for (int i = 1; i > 0; i++) {
			cout << "\t\t\tplease enter valid data" << endl;
			cout << "\t\t\tenter the month: ";
			cin >> month1;
			if (month1 > 0 && month1 < 32) {
				break;
			}
		}

	}
	cout << "\t\t\tenter the year: ";
	cin >> year1;
	if (year1 != 2021) {
		for (int i = 1; i > 0; i++) {
			cout << "\t\t\tplease enter valid data" << endl;
			cout << "\t\t\tenter the year: ";
			cin >> year1;
			if (year1==2021) {
				break;
			}
		}

	}
	cout << "\n-----------------------------------------------------the end date-----------------------------------------------------\n" << endl;
	cout << "\t\t\tenter the day: ";
	cin >> day2;
	if (day2 <= 0 || day2 >= 32) {
		for (int i = 1; i > 0; i++) {
			cout << "\t\t\tplease enter valid data" << endl;
			cout << "\t\t\tenter the day: ";
			cin >> day2;
			if (day2 > 0 && day2 < 32) {
				break;
			}
		}

	}
	cout << "\t\t\tenter the month: ";
	cin >> month2;
	if (month2 <= 0 || month2 >= 13) {
		for (int i = 1; i > 0; i++) {
			cout << "\t\t\tplease enter valid data" << endl;
			cout << "\t\t\tenter the month: ";
			cin >> month2;
			if (month2 > 0 && month2 < 32) {
				break;
			}
		}

	}
	cout << "\t\t\tenter the year: ";
	cin >> year2;
	if (year2 != 2021) {
		for (int i = 1; i > 0; i++) {
			cout << "\t\t\tplease enter valid data" << endl;
			cout << "\t\t\tenter the year: ";
			cin >> year2;
			if (year2 == 2021 ) {
				break;
			}
		}

	}
	int counter = 0;
	for (int i = 0; i < hotels_arr.size(); i++) {
		for (int j = 0; j <= i; j++) {
			if (month1== hotels_arr.at(i).room_arr.at(j).res_dur.start_date.month&&
				month2 == hotels_arr.at(i).room_arr.at(j).res_dur.end_date.month)
				counter++;
		}
		if(counter>0)
		hotels_arr[i].display_hotel_with_rooms();
		counter = 0;
	}
	int y;
	cout << "\n\t\t\tpress (1) to return to Home page\n" << endl;
	cout << "\n\t\t\tpress (2) to filter the hotels again\n" << endl;
	cout << "\n\t\t\tpress (3) to exit\n" << endl;
	
	do {
		cout << "\t\t\t-:";
		cin >>y;
		if (y == 1) {
			system("cls");
			this->home_page();
			break;
		}
		else if (y == 2) {
			system("cls");
			this->filter_page();
			break;
		}
		else if(y == 3) {
			cout << "\n\t\t\tthanx, have a nice time :)\n";
			exit;
			break;
		}

		else {
			cout << "\t\t\tplease enter valid data" << endl;
			
		}
	} 	while (y != 1 || y != 2 || y != 3);
}

void display::filter_stars()
{
	cout << "\t\t\tenter number of stars : " ;
	int stars;   cin >> stars;
	for (int i = 0; i < hotels_arr.size(); i++) {
		if (stars == hotels_arr[i].stars)
			hotels_arr[i].display_hotel_without_rooms();
	}
	this->filter_page();
}

void display::filter_gym()
{
	cout << "\t\t\tpress (1) if hotel have a Gym " << endl;
	cout << "\t\t\tpress (2) if hotel don't have a Gym " << endl;
	int gym;  cout << "-:";  cin >> gym;
	for (int i = 0; i < hotels_arr.size(); i++) {

		if (gym == 1 && hotels_arr[i].gym) {
			hotels_arr[i].display_hotel_without_rooms();
		}
		else if (gym == 2 && !hotels_arr[i].gym) {
			hotels_arr[i].display_hotel_without_rooms();
		}


	}
	this->filter_page();
}

void display::filter_pool()
{
	cout << "\t\t\tpress (1) if hotel have a Pool " << endl;
	cout << "\t\t\tpress (2) if hotel don't have a Pool " << endl;
	int pool;  cout << "-:";  cin >> pool;
	for (int i = 0; i < hotels_arr.size(); i++) {

		if (pool == 1 && hotels_arr[i].pool) {
			hotels_arr[i].display_hotel_without_rooms();
		}
		else if (pool == 2 && !hotels_arr[i].pool) {
			hotels_arr[i].display_hotel_without_rooms();
		}


	}
	this->filter_page();
}

void display::filter_wifi()
{
	cout << "\t\t\tpress (1) if hotel have a Wifi " << endl;
	cout << "\t\t\tpress (2) if hotel don't have a Wifi " << endl;
	int wifi;  cout << "-:";  cin >> wifi;

	for (int i = 0; i < hotels_arr.size(); i++) {
		for (int j = 0; j < hotels_arr[i].room_arr.size(); i++) {
			if (wifi == 1 && hotels_arr[i].room_arr[j].wifi) {
				hotels_arr[i].display_hotel_with_rooms();
			}
			else if (wifi == 2 && !hotels_arr[i].room_arr[i].wifi) {
				hotels_arr[i].display_hotel_with_rooms();
			}
		}



	}
	this->filter_page();
}

void display::filter_tv()
{
	cout << "\t\t\tpress (1) if hotel have a Tv " << endl;
	cout << "\t\t\tpress (2) if hotel don't have a Tv " << endl;
	int tv;  cout << "-:";  cin >> tv;

	for (int i = 0; i < hotels_arr.size(); i++) {
		for (int j = 0; j < hotels_arr[i].room_arr.size(); i++) {
			if (tv == 1 && hotels_arr[i].room_arr[j].tv) {
				hotels_arr[i].display_hotel_with_rooms();
			}
			else if (tv == 2 && !hotels_arr[i].room_arr[i].tv) {
				hotels_arr[i].display_hotel_with_rooms();
			}
		}



	}
	this->filter_page();
}

display::~display()
{

}
