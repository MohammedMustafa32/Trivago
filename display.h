#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "room.h"
#include "Hotel.h"
#include <iostream>
#include <algorithm>
#include <Windows.h>
#include <conio.h>
using namespace std;

class display
{

public:
	vector<Hotel> hotels_arr;
	display(vector<Hotel> hotels_arrlist);
	void home_page();
	void user_page();
	void admin_page();
	void filter_page();
	void update_page();
	void update_hotel(int updated_hotel_indix);
	void update_hotel_name(int updated_hotel_indix);
	void update_hotel_address(int updated_hotel_indix);
	void update_hotel_stars(int updated_hotel_indix);
	void update_hotel_extras(int updated_hotel_indix);
	void update_hotel_free_meals(int updated_hotel_indix);
	void update_hotel_vistors_comments(int updated_hotel_indix);
	void update_hotel_room(int updated_hotel_indix);
	void update_hotel_room_extras(int updated_hotel_room_indix, int updated_hotel_indix);
	void update_hotel_room_reservation_duration(int updated_hotel_room_indix, int updated_hotel_indix);
	void delete_page();
	void delete_hotel(int delete_hotel_indix);
	void delete_page_keys();
	void delete_room_page(int hotel_index_to_delete_room_from);
	void add_page();
	void add_hotel();
	void hotels_info();
	void hotel_info();
	void hotel_info_keys();
	int search_name();
	int search_hotel_room(Hotel hotel_to_search_in);
	vector<int> search_location();
	void filter_time();
	void filter_stars();
	void filter_gym();
	void filter_pool();
	void filter_wifi();
	void filter_tv();
	~display();
};

