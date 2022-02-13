#pragma once
#include "room.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;



class Hotel/*: public room*/
{

public:
	string name,
		country,
		location,
		rate;
	int stars;

	bool pool,
		gym;
	vector<string> free_meals;
	vector<string> v_comments;
	vector<room> room_arr;
	Hotel();
	void set_data(string name, string country, string location, int stars, bool pool, bool gym);
	void update_data(Hotel updated_Hotel);
	Hotel get_data();
	string rate_stars(int stars);
	void display_hotel_with_rooms();
	void display_hotel__visitors_comments();
	void display_hotel_rooms();
	void display_hotel_free_meals();
	void display_hotel_without_rooms();
	~Hotel(void);
};

