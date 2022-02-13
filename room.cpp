#include "room.h"
#include <iostream>
using namespace std;

room::room()
{
	room_num = 0;
	res_dur.start_date.day = 0;
	res_dur.end_date.day = 0;
	res_dur.start_date.month = 0;
	res_dur.end_date.month = 0;
	res_dur.start_date.year = 0;
	res_dur.end_date.year = 0;
	single = false;
	tv = false;
	wifi = false;

}

void room::set_dataa(int room_number, bool is_single, bool have_tv, bool have_wifi)
{
	this->room_num = room_number;
	this->single = is_single;
	this->tv = have_tv;
	this->wifi = have_wifi;
}

void room::set_reservation_duration(res_duration reservation_duration)
{
	this->res_dur.start_date.day = reservation_duration.start_date.day;
	this->res_dur.end_date.day = reservation_duration.end_date.day;
	this->res_dur.start_date.month = reservation_duration.start_date.month;
	this->res_dur.end_date.month = reservation_duration.end_date.month;
	this->res_dur.start_date.year = reservation_duration.start_date.year;
	this->res_dur.end_date.year = reservation_duration.end_date.year;
}

room room::get_data()
{
	room* r = new room();
	r->room_num = this->room_num;
	r->res_dur = this->res_dur;
	r->single = this->single;
	r->tv = this->tv;
	r->wifi = this->wifi;

	return *r;
}


void room::display_room()
{
	cout << "\n\t\t\t-> Room (" << this->room_num << ") Data <-" << endl;
	cout << " Reservation duration :- ";
	cout << "From: " << this->res_dur.start_date.day << "-" << this->res_dur.start_date.month << "-" << this->res_dur.start_date.year;
	cout << " --> To: " << this->res_dur.end_date.day << "-" << this->res_dur.end_date.month << "-" << this->res_dur.end_date.year << endl;
	cout << " Room Extras :- ";
	if (single)
		cout << "Single" << "\t\t";
	else
		cout << "Double" << "\t\t";
	if (tv)
		cout << "have TV" << "\t\t";
	else
		cout << "No TV" << "\t\t";
	if (wifi)
		cout << "have Wifi" << "\t\t" << endl;
	else
		cout << "No Wifi" << "\t\t" << endl;

}


room::~room() {

}
