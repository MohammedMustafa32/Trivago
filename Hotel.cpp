#include "Hotel.h"
#include "room.h"
#include <vector>
#include <iostream>
#include<string>
using namespace std;



Hotel::Hotel() 
{
	this->name = "";
	this->country = "";
	this->location = "";
	this->rate = " Undifined";
	this->stars = 0;
	this->pool = false;
	this->gym = false;
}

void Hotel::set_data(string name, string country, string location, int stars, bool pool, bool gym)
{
	this->name = name;
	this->country = country;
	this->location = location;
	this->stars = stars;
	this->pool = pool;
	this->gym = gym;
}

void Hotel::update_data(Hotel updated_Hotel)
{
	this->name = updated_Hotel.name;
	this->country = updated_Hotel.country;
	this->location = updated_Hotel.location;
	this->stars = updated_Hotel.stars;
	this->pool = updated_Hotel.pool;
	this->gym = updated_Hotel.gym;

}

Hotel Hotel::get_data() {
	Hotel* h = new Hotel();
	h->name = this->name;
	h->country = this->country;
	h->location = this->location;
	h->rate = this->rate;
	h->stars = this->stars;
	h->pool = this->pool;
	h->gym = this->gym;
	h->free_meals = this->free_meals;
	h->v_comments = this->v_comments;
	h->room_arr = this->room_arr;
	return *h;
}

string Hotel::rate_stars(int stars)
{
	switch (stars)
	{
	case 1:
		this->rate = " Very Bad <*>";
		return this->rate;
		break;
	case 2:
		this->rate = " Bad <**>";
		return this->rate;
		break;
	case 3:
		this->rate = " Good <***>";
		return this->rate;
		break;
	case 4:
		this->rate = " Very Good <****>";
		return this->rate;
		break;
	case 5:
		this->rate = " Excellent <*****>";
		return this->rate;
		break;
	default:
		this->rate = " Undifined";
		break;
	}
}

void Hotel::display_hotel_with_rooms() {

	this->display_hotel_without_rooms();
	cout << "------------------------------------------------------------------------------------" << endl;
	cout << "\n\t\t\t\tFree Meals \n" << endl;
	int f_m_s = this->free_meals.size();
	for (int i = 0; i < f_m_s; i++)
	{
		cout << " :- " << this->free_meals.at(i) << endl;
	}
	cout << "------------------------------------------------------------------------------------" << endl;
	cout << "\n\t\t\t\tVisitors Comments  \n" << endl;
	int v_c_s = this->v_comments.size();
	for (int i = 0; i < v_c_s; i++)
	{
		cout << " :- " << this->v_comments.at(i) << endl;
	}
	cout << "_____________________________________________________________________________________" << endl;
}

void Hotel::display_hotel__visitors_comments()
{
	cout << "_____________________________________________________________________________________" << endl;
	cout << "\n\t\t\t\tVisitors Comments  \n" << endl;
	int v_c_s = this->v_comments.size();
	for (int i = 0; i < v_c_s; i++)
	{
		cout << " :- " << this->v_comments.at(i) << endl;
	}
	cout << "_____________________________________________________________________________________" << endl;
}

void Hotel::display_hotel_rooms()
{
	cout << "_____________________________________________________________________________________" << endl;
	cout << "\n\t\t\t\tRooms  \n" << endl;
	int r_a_l = this->room_arr.size();
	for (int i = 0; i < r_a_l; i++)
	{
		if (this->room_arr[i].room_num != NULL)
			this->room_arr.at(i).display_room();
	}
	cout << "_____________________________________________________________________________________" << endl;
}

void Hotel::display_hotel_free_meals()
{
	cout << "_____________________________________________________________________________________" << endl;
	cout << "\n\t\t\t\tFree Meals \n" << endl;
	int f_m_s = this->free_meals.size();
	for (int i = 0; i < f_m_s; i++)
	{
		cout << " :- " << this->free_meals.at(i) << endl;
	}
	cout << "_____________________________________________________________________________________" << endl;
}

void Hotel::display_hotel_without_rooms()
{
	cout << "------------------------------------------------------------------------------------" << endl;
	cout << "\n\t\t\t\t->) " << this->name << " Hotel (<-" << endl;
	cout << " Address :- " << this->country << "," << this->location << "\t\t";
	cout << this->stars << " Stars (" << this->rate_stars(this->stars) << ")" << endl;
	cout << " Hotel Extras :- ";
	if (this->pool)
		cout << "have Pool" << "\t\t";
	else
		cout << "No Pool" << "\t\t";
	if (this->gym)
		cout << "have Gym" << "\t\t" << endl;
	else
		cout << "No Gym" << "\t\t" << endl;
	cout << "_____________________________________________________________________________________" << endl;
	
}

Hotel::~Hotel() {

}

