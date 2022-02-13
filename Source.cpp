#include "room.h"
#include "Hotel.h"
#include "display.h"
#include <iostream>
#include <assert.h>
#include <string>
using namespace std;
//day1 < hotels_arr.at(i).room_arr.at(j).res_dur.start_date.day&&
//	month1 < hotels_arr.at(i).room_arr.at(j).res_dur.start_date.month&&
//	year1 < hotels_arr.at(i).room_arr.at(j).res_dur.start_date.year&&
//	day2 > hotels_arr.at(i).room_arr.at(j).res_dur.end_date.day&&
//	month2 > hotels_arr.at(i).room_arr.at(j).res_dur.end_date.year&&
//	year2 > hotels_arr.at(i).room_arr.at(j).res_dur.end_date.year
vector<Hotel> Hotel_arrlist;
void initial_data();

int main()
{
	initial_data();
	display* Display = new display(Hotel_arrlist);
	Display->home_page();
	delete Display;
	return 0;

}

void initial_data() 
{
	Hotel hotel[10];

	hotel[0].set_data("Rixos" ,   "egypt", "Sharm El Sheikh", 5, true, true);
	hotel[1].set_data("Sunrise", "egypt", "Sharm El Sheikh", 5, true, true);
	hotel[2].set_data("Four Seasons", "egypt", "cairo", 5, false, true);
	hotel[3].set_data("Fairmont", "egypt", "cairo", 5, true, true);
	hotel[4].set_data("Hilton", "egypt", "cairo", 4, true, false);
	hotel[5].set_data("Golden Beach", "egypt", "Hurghada", 3, false, false);
	hotel[6].set_data("Meraki", "egypt", "Hurghada", 3, false, false);
	hotel[7].set_data("Charbel", "egypt", "El Gouna", 2, false, false);
	hotel[8].set_data("SeaView", "egypt", "El Gouna", 2, true, false);
	hotel[9].set_data("Desert Rose", "egypt", "The nourth coast", 1, true, false);

				//first hotel
	hotel[0].free_meals.push_back("free Breakfast");
	hotel[0].free_meals.push_back("free dinner");

	hotel[0].v_comments.push_back("thanks, the service is too good");
	hotel[0].v_comments.push_back("it's lovely");
	hotel[0].v_comments.push_back("not good for me");
	hotel[0].v_comments.push_back("too clean and too good");
	hotel[0].v_comments.push_back("perfect services");


	room Rooms_1[10];
	room Rooms_2[10];
	room Rooms_3[10];
	room Rooms_4[10];
	room Rooms_5[10]; 
	room Rooms_6[10];
	room Rooms_7[10];
	room Rooms_8[10];
	room Rooms_9[10];
	room Rooms_10[10];


	Rooms_1[0].set_dataa(1, true, true, true);
	Rooms_1[1].set_dataa(2, true, true, false);
	Rooms_1[2].set_dataa(3, true, false, true);
	Rooms_1[3].set_dataa(4, false, true, true);
	Rooms_1[4].set_dataa(5, false, false, false);
	Rooms_1[5].set_dataa(6, false, false, true);
	Rooms_1[6].set_dataa(7, false, true, false);
	Rooms_1[7].set_dataa(8, true, false, false);
	Rooms_1[8].set_dataa(9, true, false, true);
	Rooms_1[9].set_dataa(10, false, true, false);

	Rooms_1[0].res_dur.start_date.day = 15;
	Rooms_1[0].res_dur.start_date.month = 7;
	Rooms_1[0].res_dur.start_date.year = 2021;
	Rooms_1[0].res_dur.end_date.day = 15;
	Rooms_1[0].res_dur.end_date.month = 9;
	Rooms_1[0].res_dur.end_date.year = 2021;

	Rooms_1[1].res_dur.start_date.day = 1;
	Rooms_1[1].res_dur.start_date.month = 1;
	Rooms_1[1].res_dur.start_date.year = 2021;
	Rooms_1[1].res_dur.end_date.day = 1;
	Rooms_1[1].res_dur.end_date.month = 3;
	Rooms_1[1].res_dur.end_date.year = 2020;

	Rooms_1[2].res_dur.start_date.day = 2;
	Rooms_1[2].res_dur.start_date.month =3 ;
	Rooms_1[2].res_dur.start_date.year = 2021;
	Rooms_1[2].res_dur.end_date.day = 2;
	Rooms_1[2].res_dur.end_date.month = 6;
	Rooms_1[2].res_dur.end_date.year = 2021;

	Rooms_1[3].res_dur.start_date.day = 3;
	Rooms_1[3].res_dur.start_date.month = 6;
	Rooms_1[3].res_dur.start_date.year = 2021;
	Rooms_1[3].res_dur.end_date.day = 3;
	Rooms_1[3].res_dur.end_date.month = 9;
	Rooms_1[3].res_dur.end_date.year = 2021;

	Rooms_1[4].res_dur.start_date.day = 4;
	Rooms_1[4].res_dur.start_date.month = 9;
	Rooms_1[4].res_dur.start_date.year = 2021;
	Rooms_1[4].res_dur.end_date.day = 4;
	Rooms_1[4].res_dur.end_date.month = 12;
	Rooms_1[4].res_dur.end_date.year = 2021;

	Rooms_1[5].res_dur.start_date.day = 1;
	Rooms_1[5].res_dur.start_date.month = 2;
	Rooms_1[5].res_dur.start_date.year = 2021;
	Rooms_1[5].res_dur.end_date.day = 1;
	Rooms_1[5].res_dur.end_date.month = 5;
	Rooms_1[5].res_dur.end_date.year = 2021;

	Rooms_1[6].res_dur.start_date.day = 2;
	Rooms_1[6].res_dur.start_date.month = 5;
	Rooms_1[6].res_dur.start_date.year = 2021;
	Rooms_1[6].res_dur.end_date.day = 2;
	Rooms_1[6].res_dur.end_date.month = 8;
	Rooms_1[6].res_dur.end_date.year = 2021;

	Rooms_1[7].res_dur.start_date.day = 3;
	Rooms_1[7].res_dur.start_date.month = 8;
	Rooms_1[7].res_dur.start_date.year = 2021;
	Rooms_1[7].res_dur.end_date.day = 3;
	Rooms_1[7].res_dur.end_date.month = 11;
	Rooms_1[7].res_dur.end_date.year = 2021;

	Rooms_1[8].res_dur.start_date.day = 4;
	Rooms_1[8].res_dur.start_date.month = 11;
	Rooms_1[8].res_dur.start_date.year = 2021;
	Rooms_1[8].res_dur.end_date.day = 4;
	Rooms_1[8].res_dur.end_date.month = 2;
	Rooms_1[8].res_dur.end_date.year = 2022;

	Rooms_1[9].res_dur.start_date.day = 5;
	Rooms_1[9].res_dur.start_date.month = 3;
	Rooms_1[9].res_dur.start_date.year = 2021;
	Rooms_1[9].res_dur.end_date.day = 5;
	Rooms_1[9].res_dur.end_date.month = 6;
	Rooms_1[9].res_dur.end_date.year = 2021;

			
				//2nd Hotel
	hotel[1].free_meals.push_back("free Breakfast");
	hotel[1].free_meals.push_back("free lunch");
	hotel[1].free_meals.push_back("free dinner");

	hotel[1].v_comments.push_back("so amazing");
	hotel[1].v_comments.push_back("The view brings comfort");
	hotel[1].v_comments.push_back("It would be the first choice for me");
	hotel[1].v_comments.push_back("Swimming pool is very cool");
	hotel[1].v_comments.push_back("The gym is equipped with the latest equipment");

	Rooms_2[0].set_dataa(1, true, true, true);
	Rooms_2[1].set_dataa(2, true, false, false);
	Rooms_2[2].set_dataa(3, false, false, true);
	Rooms_2[3].set_dataa(4, true, true, false);
	Rooms_2[4].set_dataa(5, true, false, false);
	Rooms_2[5].set_dataa(6, false, false, false);
	Rooms_2[6].set_dataa(7, false, true, false);
	Rooms_2[7].set_dataa(8, true, false, false);
	Rooms_2[8].set_dataa(9, true, true, true);
	Rooms_2[9].set_dataa(10, false, true, false);

	Rooms_2[0].res_dur.start_date.day = 22;
	Rooms_2[0].res_dur.start_date.month = 7;
	Rooms_2[0].res_dur.start_date.year = 2021;
	Rooms_2[0].res_dur.end_date.day = 22;
	Rooms_2[0].res_dur.end_date.month = 9;
	Rooms_2[0].res_dur.end_date.year = 2021;

	Rooms_2[1].res_dur.start_date.day = 23;
	Rooms_2[1].res_dur.start_date.month = 9;
	Rooms_2[1].res_dur.start_date.year = 2021;
	Rooms_2[1].res_dur.end_date.day = 23;
	Rooms_2[1].res_dur.end_date.month = 12;
	Rooms_2[1].res_dur.end_date.year = 2021;

	Rooms_2[2].res_dur.start_date.day = 24;
	Rooms_2[2].res_dur.start_date.month = 12;
	Rooms_2[2].res_dur.start_date.year = 2021;
	Rooms_2[2].res_dur.end_date.day = 24;
	Rooms_2[2].res_dur.end_date.month = 3;
	Rooms_2[2].res_dur.end_date.year = 2022;

	Rooms_2[3].res_dur.start_date.day = 24;
	Rooms_2[3].res_dur.start_date.month = 3;
	Rooms_2[3].res_dur.start_date.year = 2021;
	Rooms_2[3].res_dur.end_date.day = 24;
	Rooms_2[3].res_dur.end_date.month = 6;
	Rooms_2[3].res_dur.end_date.year = 2021;

	Rooms_2[4].res_dur.start_date.day = 25;
	Rooms_2[4].res_dur.start_date.month = 6;
	Rooms_2[4].res_dur.start_date.year = 2021;
	Rooms_2[4].res_dur.end_date.day = 25;
	Rooms_2[4].res_dur.end_date.month = 9;
	Rooms_2[4].res_dur.end_date.year = 2021;

	Rooms_2[5].res_dur.start_date.day = 16;
	Rooms_2[5].res_dur.start_date.month = 4;
	Rooms_2[5].res_dur.start_date.year = 2021;
	Rooms_2[5].res_dur.end_date.day = 16;
	Rooms_2[5].res_dur.end_date.month = 7;
	Rooms_2[5].res_dur.end_date.year = 2021;

	Rooms_2[6].res_dur.start_date.day = 17;
	Rooms_2[6].res_dur.start_date.month = 7;
	Rooms_2[6].res_dur.start_date.year = 2021;
	Rooms_2[6].res_dur.end_date.day = 17;
	Rooms_2[6].res_dur.end_date.month = 10;
	Rooms_2[6].res_dur.end_date.year = 2021;

	Rooms_2[7].res_dur.start_date.day = 18;
	Rooms_2[7].res_dur.start_date.month = 10;
	Rooms_2[7].res_dur.start_date.year = 2021;
	Rooms_2[7].res_dur.end_date.day = 18;
	Rooms_2[7].res_dur.end_date.month = 1;
	Rooms_2[7].res_dur.end_date.year = 2022;

	Rooms_2[8].res_dur.start_date.day = 19;
	Rooms_2[8].res_dur.start_date.month = 1;
	Rooms_2[8].res_dur.start_date.year = 2021;
	Rooms_2[8].res_dur.end_date.day = 19;
	Rooms_2[8].res_dur.end_date.month = 4;
	Rooms_2[8].res_dur.end_date.year = 2021;

	Rooms_2[9].res_dur.start_date.day = 20;
	Rooms_2[9].res_dur.start_date.month = 9;
	Rooms_2[9].res_dur.start_date.year = 2021;
	Rooms_2[9].res_dur.end_date.day = 20;
	Rooms_2[9].res_dur.end_date.month = 12;
	Rooms_2[9].res_dur.end_date.year = 2021;

			//3rd Hotel
	hotel[2].free_meals.push_back("free Breakfast");
	hotel[2].free_meals.push_back("free lunch");
	hotel[2].v_comments.push_back("i like it");
	hotel[2].v_comments.push_back("the beach is very good");
	hotel[2].v_comments.push_back("It would have been better if there was a pool");
	hotel[2].v_comments.push_back("the meals are tasty");
	hotel[2].v_comments.push_back("The gym has expert trainers");

	Rooms_3[0].set_dataa(1, true, true, true);
	Rooms_3[1].set_dataa(2, true, false, false);
	Rooms_3[2].set_dataa(3, true, false, true);
	Rooms_3[3].set_dataa(4, true, true, false);
	Rooms_3[4].set_dataa(5, true, false, false);
	Rooms_3[5].set_dataa(6, false, false, false);
	Rooms_3[6].set_dataa(7, false, true, false);
	Rooms_3[7].set_dataa(8, true, false, false);
	Rooms_3[8].set_dataa(9, true, true, true);
	Rooms_3[9].set_dataa(10, false, true, false);

	Rooms_3[0].res_dur.start_date.day = 18;
	Rooms_3[0].res_dur.start_date.month = 1;
	Rooms_3[0].res_dur.start_date.year = 2021;
	Rooms_3[0].res_dur.end_date.day = 18;
	Rooms_3[0].res_dur.end_date.month = 7;
	Rooms_3[0].res_dur.end_date.year = 2021;

	Rooms_3[1].res_dur.start_date.day = 19;
	Rooms_3[1].res_dur.start_date.month = 7;
	Rooms_3[1].res_dur.start_date.year = 2021;
	Rooms_3[1].res_dur.end_date.day = 17;
	Rooms_3[1].res_dur.end_date.month = 1;
	Rooms_3[1].res_dur.end_date.year = 2022;

	Rooms_3[2].res_dur.start_date.day = 1;
	Rooms_3[2].res_dur.start_date.month = 1;
	Rooms_3[2].res_dur.start_date.year = 2021;
	Rooms_3[2].res_dur.end_date.day = 1;
	Rooms_3[2].res_dur.end_date.month = 3;
	Rooms_3[2].res_dur.end_date.year = 2021;

	Rooms_3[3].res_dur.start_date.day = 2;
	Rooms_3[3].res_dur.start_date.month = 3;
	Rooms_3[3].res_dur.start_date.year = 2021;
	Rooms_3[3].res_dur.end_date.day = 2;
	Rooms_3[3].res_dur.end_date.month = 6;
	Rooms_3[3].res_dur.end_date.year = 2021;

	Rooms_3[4].res_dur.start_date.day = 3;
	Rooms_3[4].res_dur.start_date.month = 6;
	Rooms_3[4].res_dur.start_date.year = 2021;
	Rooms_3[4].res_dur.end_date.day = 3;
	Rooms_3[4].res_dur.end_date.month = 9;
	Rooms_3[4].res_dur.end_date.year = 2021;

	Rooms_3[5].res_dur.start_date.day = 4;
	Rooms_3[5].res_dur.start_date.month = 9;
	Rooms_3[5].res_dur.start_date.year = 2021;
	Rooms_3[5].res_dur.end_date.day = 4;
	Rooms_3[5].res_dur.end_date.month = 12;
	Rooms_3[5].res_dur.end_date.year = 2021;

	Rooms_3[6].res_dur.start_date.day = 7;
	Rooms_3[6].res_dur.start_date.month = 5;
	Rooms_3[6].res_dur.start_date.year = 2021;
	Rooms_3[6].res_dur.end_date.day = 7;
	Rooms_3[6].res_dur.end_date.month = 10;
	Rooms_3[6].res_dur.end_date.year = 2021;

	Rooms_3[7].res_dur.start_date.day = 8;
	Rooms_3[7].res_dur.start_date.month = 10;
	Rooms_3[7].res_dur.start_date.year = 2021;
	Rooms_3[7].res_dur.end_date.day = 8;
	Rooms_3[7].res_dur.end_date.month = 3;
	Rooms_3[7].res_dur.end_date.year = 2022;

	Rooms_3[8].res_dur.start_date.day = 9;
	Rooms_3[8].res_dur.start_date.month = 3;
	Rooms_3[8].res_dur.start_date.year = 2021;
	Rooms_3[8].res_dur.end_date.day = 9;
	Rooms_3[8].res_dur.end_date.month = 8;
	Rooms_3[8].res_dur.end_date.year = 2021;

	Rooms_3[9].res_dur.start_date.day = 10;
	Rooms_3[9].res_dur.start_date.month = 8;
	Rooms_3[9].res_dur.start_date.year = 2021;
	Rooms_3[9].res_dur.end_date.day = 10;
	Rooms_3[9].res_dur.end_date.month = 1;
	Rooms_3[9].res_dur.end_date.year = 2021;

				//4th Hotel
	hotel[3].free_meals.push_back("free Breakfast");
	hotel[3].free_meals.push_back("free lunch");
	hotel[3].free_meals.push_back("free dinner");
	hotel[3].v_comments.push_back("The place is very quiet and I enjoyed my time in it");
	hotel[3].v_comments.push_back("The water is very clear");
	hotel[3].v_comments.push_back("The stars shine at night like jewels");
	hotel[3].v_comments.push_back("I had the most amazing vacation ever there");

	Rooms_4[0].set_dataa(1, true, true, true);
	Rooms_4[1].set_dataa(2, true, false, false);
	Rooms_4[2].set_dataa(3, true, false, true);
	Rooms_4[3].set_dataa(4, true, true, false);
	Rooms_4[4].set_dataa(5, true, false, false);
	Rooms_4[5].set_dataa(6, false, false, false);
	Rooms_4[6].set_dataa(7, false, true, false);
	Rooms_4[7].set_dataa(8, true, false, false);
	Rooms_4[8].set_dataa(9, true, true, true);
	Rooms_4[9].set_dataa(10, false, true, false);

	Rooms_4[0].res_dur.start_date.day = 18;
	Rooms_4[0].res_dur.start_date.month = 7;
	Rooms_4[0].res_dur.start_date.year = 2021;
	Rooms_4[0].res_dur.end_date.day = 18;
	Rooms_4[0].res_dur.end_date.month = 8;
	Rooms_4[0].res_dur.end_date.year = 2021;

	Rooms_4[1].res_dur.start_date.day = 18;
	Rooms_4[1].res_dur.start_date.month = 7;
	Rooms_4[1].res_dur.start_date.year = 2021;
	Rooms_4[1].res_dur.end_date.day = 18;
	Rooms_4[1].res_dur.end_date.month = 8;
	Rooms_4[1].res_dur.end_date.year = 2021;

	Rooms_4[2].res_dur.start_date.day = 1;
	Rooms_4[2].res_dur.start_date.month = 9;
	Rooms_4[2].res_dur.start_date.year = 2021;
	Rooms_4[2].res_dur.end_date.day = 1;
	Rooms_4[2].res_dur.end_date.month = 10;
	Rooms_4[2].res_dur.end_date.year = 2021;

	Rooms_4[3].res_dur.start_date.day = 1;
	Rooms_4[3].res_dur.start_date.month = 9;
	Rooms_4[3].res_dur.start_date.year = 2021;
	Rooms_4[3].res_dur.end_date.day = 1;
	Rooms_4[3].res_dur.end_date.month = 10;
	Rooms_4[3].res_dur.end_date.year = 2021;

	Rooms_4[4].res_dur.start_date.day = 21;
	Rooms_4[4].res_dur.start_date.month = 2;
	Rooms_4[4].res_dur.start_date.year = 2021;
	Rooms_4[4].res_dur.end_date.day = 21;
	Rooms_4[4].res_dur.end_date.month = 3;
	Rooms_4[4].res_dur.end_date.year = 2021;

	Rooms_4[5].res_dur.start_date.day = 21;
	Rooms_4[5].res_dur.start_date.month = 2;
	Rooms_4[5].res_dur.start_date.year = 2021;
	Rooms_4[5].res_dur.end_date.day = 21;
	Rooms_4[5].res_dur.end_date.month = 3;
	Rooms_4[5].res_dur.end_date.year = 2021;

	Rooms_4[6].res_dur.start_date.day = 28;
	Rooms_4[6].res_dur.start_date.month = 10;
	Rooms_4[6].res_dur.start_date.year = 2021;
	Rooms_4[6].res_dur.end_date.day = 28;
	Rooms_4[6].res_dur.end_date.month = 11;
	Rooms_4[6].res_dur.end_date.year = 2021;

	Rooms_4[7].res_dur.start_date.day = 28;
	Rooms_4[7].res_dur.start_date.month = 10;
	Rooms_4[7].res_dur.start_date.year = 2021;
	Rooms_4[7].res_dur.end_date.day = 28;
	Rooms_4[7].res_dur.end_date.month = 11;
	Rooms_4[7].res_dur.end_date.year = 2021;

	Rooms_4[8].res_dur.start_date.day = 25;
	Rooms_4[8].res_dur.start_date.month = 1;
	Rooms_4[8].res_dur.start_date.year = 2021;
	Rooms_4[8].res_dur.end_date.day = 25;
	Rooms_4[8].res_dur.end_date.month = 2;
	Rooms_4[8].res_dur.end_date.year = 2021;

	Rooms_4[9].res_dur.start_date.day = 25;
	Rooms_4[9].res_dur.start_date.month = 1;
	Rooms_4[9].res_dur.start_date.year = 2021;
	Rooms_4[9].res_dur.end_date.day = 25;
	Rooms_4[9].res_dur.end_date.month = 2;
	Rooms_4[9].res_dur.end_date.year = 2021;

			//5th Hotel
	hotel[4].free_meals.push_back("free Breakfast");
	hotel[4].v_comments.push_back("the rooms are so clean");
	hotel[4].v_comments.push_back("it has fresh air");
	hotel[4].v_comments.push_back("there is no gym but i loved it");

	Rooms_5[0].set_dataa(1, true, true, true);
	Rooms_5[1].set_dataa(2, false, false, false);
	Rooms_5[2].set_dataa(3, false, false, true);
	Rooms_5[3].set_dataa(4, false, true, false);
	Rooms_5[4].set_dataa(5, true, false, false);
	Rooms_5[5].set_dataa(6, true, false, false);
	Rooms_5[6].set_dataa(7, true, true, false);
	Rooms_5[7].set_dataa(8, false, false, false);
	Rooms_5[8].set_dataa(9, false, true, true);
	Rooms_5[9].set_dataa(10, true, true, false);

	Rooms_5[0].res_dur.start_date.day = 23;
	Rooms_5[0].res_dur.start_date.month = 1;
	Rooms_5[0].res_dur.start_date.year = 2021;
	Rooms_5[0].res_dur.end_date.day = 23;
	Rooms_5[0].res_dur.end_date.month = 3;
	Rooms_5[0].res_dur.end_date.year = 2021;

	Rooms_5[1].res_dur.start_date.day = 23;
	Rooms_5[1].res_dur.start_date.month = 1;
	Rooms_5[1].res_dur.start_date.year = 2021;
	Rooms_5[1].res_dur.end_date.day = 23;
	Rooms_5[1].res_dur.end_date.month = 3;
	Rooms_5[1].res_dur.end_date.year = 2021;

	Rooms_5[2].res_dur.start_date.day = 24;
	Rooms_5[2].res_dur.start_date.month = 3;
	Rooms_5[2].res_dur.start_date.year = 2021;
	Rooms_5[2].res_dur.end_date.day = 24;
	Rooms_5[2].res_dur.end_date.month = 5;
	Rooms_5[2].res_dur.end_date.year = 2021;

	Rooms_5[3].res_dur.start_date.day = 24;
	Rooms_5[3].res_dur.start_date.month = 3;
	Rooms_5[3].res_dur.start_date.year = 2021;
	Rooms_5[3].res_dur.end_date.day = 24;
	Rooms_5[3].res_dur.end_date.month = 5;
	Rooms_5[3].res_dur.end_date.year = 2021;

	Rooms_5[4].res_dur.start_date.day = 24;
	Rooms_5[4].res_dur.start_date.month = 3;
	Rooms_5[4].res_dur.start_date.year = 2021;
	Rooms_5[4].res_dur.end_date.day = 24;
	Rooms_5[4].res_dur.end_date.month = 5;
	Rooms_5[4].res_dur.end_date.year = 2021;

	Rooms_5[5].res_dur.start_date.day = 25;
	Rooms_5[5].res_dur.start_date.month = 5;
	Rooms_5[5].res_dur.start_date.year = 2021;
	Rooms_5[5].res_dur.end_date.day = 25;
	Rooms_5[5].res_dur.end_date.month = 7;
	Rooms_5[5].res_dur.end_date.year = 2021;

	Rooms_5[6].res_dur.start_date.day = 25;
	Rooms_5[6].res_dur.start_date.month = 5;
	Rooms_5[6].res_dur.start_date.year = 2021;
	Rooms_5[6].res_dur.end_date.day = 25;
	Rooms_5[6].res_dur.end_date.month = 7;
	Rooms_5[6].res_dur.end_date.year = 2021;

	Rooms_5[7].res_dur.start_date.day = 26;
	Rooms_5[7].res_dur.start_date.month = 7;
	Rooms_5[7].res_dur.start_date.year = 2021;
	Rooms_5[7].res_dur.end_date.day = 26;
	Rooms_5[7].res_dur.end_date.month =12;
	Rooms_5[7].res_dur.end_date.year = 2021;

	Rooms_5[8].res_dur.start_date.day = 26;
	Rooms_5[8].res_dur.start_date.month = 7;
	Rooms_5[8].res_dur.start_date.year = 2021;
	Rooms_5[8].res_dur.end_date.day = 26;
	Rooms_5[8].res_dur.end_date.month = 12;
	Rooms_5[8].res_dur.end_date.year = 2021;

	Rooms_5[9].res_dur.start_date.day = 26;
	Rooms_5[9].res_dur.start_date.month = 7;
	Rooms_5[9].res_dur.start_date.year = 2021;
	Rooms_5[9].res_dur.end_date.day = 26;
	Rooms_5[9].res_dur.end_date.month = 12;
	Rooms_5[9].res_dur.end_date.year = 2021;

			//6th Hotel
	hotel[5].free_meals.push_back("free dinner");
	hotel[5].v_comments.push_back("not bad");
	hotel[5].v_comments.push_back("it's good if you don't like pool or gym");
	hotel[5].v_comments.push_back("i had a good time");

	Rooms_6[0].set_dataa(1, true, false, true);
	Rooms_6[1].set_dataa(2, false, true, false);
	Rooms_6[2].set_dataa(3, false, true, true);
	Rooms_6[3].set_dataa(4, false, false, false);
	Rooms_6[4].set_dataa(5, true, true, false);
	Rooms_6[5].set_dataa(6, true, true, false);
	Rooms_6[6].set_dataa(7, true, false, false);
	Rooms_6[7].set_dataa(8, false, true, false);
	Rooms_6[8].set_dataa(9, false, false, true);
	Rooms_6[9].set_dataa(10, true, false, false);

	Rooms_6[0].res_dur.start_date.day = 5;
	Rooms_6[0].res_dur.start_date.month = 7;
	Rooms_6[0].res_dur.start_date.year = 2021;
	Rooms_6[0].res_dur.end_date.day = 5;
	Rooms_6[0].res_dur.end_date.month = 11;
	Rooms_6[0].res_dur.end_date.year = 2021;

	Rooms_6[1].res_dur.start_date.day = 6;
	Rooms_6[1].res_dur.start_date.month = 11;
	Rooms_6[1].res_dur.start_date.year = 2021;
	Rooms_6[1].res_dur.end_date.day = 6;
	Rooms_6[1].res_dur.end_date.month = 3;
	Rooms_6[1].res_dur.end_date.year = 2022;

	Rooms_6[2].res_dur.start_date.day = 26;
	Rooms_6[2].res_dur.start_date.month = 7;
	Rooms_6[2].res_dur.start_date.year = 2021;
	Rooms_6[2].res_dur.end_date.day = 26;
	Rooms_6[2].res_dur.end_date.month = 12;
	Rooms_6[2].res_dur.end_date.year = 2021;

	Rooms_6[3].res_dur.start_date.day = 5;
	Rooms_6[3].res_dur.start_date.month = 7;
	Rooms_6[3].res_dur.start_date.year = 2021;
	Rooms_6[3].res_dur.end_date.day = 5;
	Rooms_6[3].res_dur.end_date.month = 11;
	Rooms_6[3].res_dur.end_date.year = 2021;

	Rooms_6[4].res_dur.start_date.day = 6;
	Rooms_6[4].res_dur.start_date.month = 11;
	Rooms_6[4].res_dur.start_date.year = 2021;
	Rooms_6[4].res_dur.end_date.day = 6;
	Rooms_6[4].res_dur.end_date.month = 3;
	Rooms_6[4].res_dur.end_date.year = 2021;

	Rooms_6[5].res_dur.start_date.day = 9;
	Rooms_6[5].res_dur.start_date.month = 8;
	Rooms_6[5].res_dur.start_date.year = 2021;
	Rooms_6[5].res_dur.end_date.day = 9;
	Rooms_6[5].res_dur.end_date.month = 12;
	Rooms_6[5].res_dur.end_date.year = 2021;

	Rooms_6[6].res_dur.start_date.day = 9;
	Rooms_6[6].res_dur.start_date.month = 8;
	Rooms_6[6].res_dur.start_date.year = 2021;
	Rooms_6[6].res_dur.end_date.day = 9;
	Rooms_6[6].res_dur.end_date.month = 12;
	Rooms_6[6].res_dur.end_date.year = 2021;

	Rooms_6[7].res_dur.start_date.day = 13;
	Rooms_6[7].res_dur.start_date.month = 3;
	Rooms_6[7].res_dur.start_date.year = 2021;
	Rooms_6[7].res_dur.end_date.day = 13;
	Rooms_6[7].res_dur.end_date.month = 5;
	Rooms_6[7].res_dur.end_date.year = 2021;

	Rooms_6[8].res_dur.start_date.day = 13;
	Rooms_6[8].res_dur.start_date.month = 3;
	Rooms_6[8].res_dur.start_date.year = 2021;
	Rooms_6[8].res_dur.end_date.day = 13;
	Rooms_6[8].res_dur.end_date.month = 5;
	Rooms_6[8].res_dur.end_date.year = 2021;

	Rooms_6[9].res_dur.start_date.day = 1;
	Rooms_6[9].res_dur.start_date.month = 1;
	Rooms_6[9].res_dur.start_date.year = 2021;
	Rooms_6[9].res_dur.end_date.day = 1;
	Rooms_6[9].res_dur.end_date.month = 12;
	Rooms_6[9].res_dur.end_date.year = 2021;

			//7th Hotel
	hotel[6].free_meals.push_back("free dinner");
	hotel[6].v_comments.push_back("not bad");
	hotel[6].v_comments.push_back("it's good if you don't like pool or gym");
	hotel[6].v_comments.push_back("i had a good time");

	Rooms_7[0].set_dataa(1, true, false, false);
	Rooms_7[1].set_dataa(2, false, true, true);
	Rooms_7[2].set_dataa(3, false, true, false);
	Rooms_7[3].set_dataa(4, false, false, true);
	Rooms_7[4].set_dataa(5, true, true, true);
	Rooms_7[5].set_dataa(6, true, true, true);
	Rooms_7[6].set_dataa(7, true, false, true);
	Rooms_7[7].set_dataa(8, false, true, true);
	Rooms_7[8].set_dataa(9, false, false, false);
	Rooms_7[9].set_dataa(10, true, false, true);

	Rooms_7[0].res_dur.start_date.day = 1;
	Rooms_7[0].res_dur.start_date.month = 1;
	Rooms_7[0].res_dur.start_date.year = 2021;
	Rooms_7[0].res_dur.end_date.day = 1;
	Rooms_7[0].res_dur.end_date.month = 12;
	Rooms_7[0].res_dur.end_date.year = 2021;

	Rooms_7[1].res_dur.start_date.day = 6;
	Rooms_7[1].res_dur.start_date.month = 6;
	Rooms_7[1].res_dur.start_date.year = 2021;
	Rooms_7[1].res_dur.end_date.day = 6;
	Rooms_7[1].res_dur.end_date.month = 10;
	Rooms_7[1].res_dur.end_date.year = 2021;

	Rooms_7[2].res_dur.start_date.day = 5;
	Rooms_7[2].res_dur.start_date.month = 7;
	Rooms_7[2].res_dur.start_date.year = 2021;
	Rooms_7[2].res_dur.end_date.day = 5;
	Rooms_7[2].res_dur.end_date.month = 12;
	Rooms_7[2].res_dur.end_date.year = 2021;

	Rooms_7[3].res_dur.start_date.day = 9;
	Rooms_7[3].res_dur.start_date.month = 6;
	Rooms_7[3].res_dur.start_date.year = 2021;
	Rooms_7[3].res_dur.end_date.day = 9;
	Rooms_7[3].res_dur.end_date.month = 11;
	Rooms_7[3].res_dur.end_date.year = 2021;

	Rooms_7[4].res_dur.start_date.day = 15;
	Rooms_7[4].res_dur.start_date.month = 3;
	Rooms_7[4].res_dur.start_date.year = 2021;
	Rooms_7[4].res_dur.end_date.day = 15;
	Rooms_7[4].res_dur.end_date.month = 6;
	Rooms_7[4].res_dur.end_date.year = 2021;

	Rooms_7[5].res_dur.start_date.day = 22;
	Rooms_7[5].res_dur.start_date.month = 4;
	Rooms_7[5].res_dur.start_date.year = 2021;
	Rooms_7[5].res_dur.end_date.day = 22;
	Rooms_7[5].res_dur.end_date.month = 8;
	Rooms_7[5].res_dur.end_date.year = 2021;

	Rooms_7[6].res_dur.start_date.day = 1;
	Rooms_7[6].res_dur.start_date.month = 1;
	Rooms_7[6].res_dur.start_date.year = 2021;
	Rooms_7[6].res_dur.end_date.day = 1;
	Rooms_7[6].res_dur.end_date.month = 12;
	Rooms_7[6].res_dur.end_date.year = 2021;

	Rooms_7[7].res_dur.start_date.day = 26;
	Rooms_7[7].res_dur.start_date.month = 8;
	Rooms_7[7].res_dur.start_date.year = 2021;
	Rooms_7[7].res_dur.end_date.day = 26;
	Rooms_7[7].res_dur.end_date.month = 12;
	Rooms_7[7].res_dur.end_date.year = 2021;

	Rooms_7[8].res_dur.start_date.day = 5;
	Rooms_7[8].res_dur.start_date.month = 6;
	Rooms_7[8].res_dur.start_date.year = 2021;
	Rooms_7[8].res_dur.end_date.day = 5;
	Rooms_7[8].res_dur.end_date.month = 9;
	Rooms_7[8].res_dur.end_date.year = 2021;

	Rooms_7[9].res_dur.start_date.day = 19;
	Rooms_7[9].res_dur.start_date.month = 5;
	Rooms_7[9].res_dur.start_date.year = 2021;
	Rooms_7[9].res_dur.end_date.day = 19;
	Rooms_7[9].res_dur.end_date.month = 8;
	Rooms_7[9].res_dur.end_date.year = 2021;

			//8th Hotel
	hotel[7].free_meals.push_back("free breakfast");
	hotel[7].v_comments.push_back("not the best place to go");
	hotel[7].v_comments.push_back("i loved the view");
	hotel[7].v_comments.push_back("i had a nice time");

	Rooms_8[0].set_dataa(1, false, true, false);
	Rooms_8[1].set_dataa(2, true, false, true);
	Rooms_8[2].set_dataa(3, true, false, false);
	Rooms_8[3].set_dataa(4, true, true, true);
	Rooms_8[4].set_dataa(5, false, false, true);
	Rooms_8[5].set_dataa(6, false, false, true);
	Rooms_8[6].set_dataa(7, false, true, true);
	Rooms_8[7].set_dataa(8, true, false, true);
	Rooms_8[8].set_dataa(9, true, true, false);
	Rooms_8[9].set_dataa(10, false, true, true);

	Rooms_8[0].res_dur.start_date.day = 1;
	Rooms_8[0].res_dur.start_date.month = 1;
	Rooms_8[0].res_dur.start_date.year = 2021;
	Rooms_8[0].res_dur.end_date.day = 1;
	Rooms_8[0].res_dur.end_date.month = 6;
	Rooms_8[0].res_dur.end_date.year = 2021;

	Rooms_8[1].res_dur.start_date.day = 1;
	Rooms_8[1].res_dur.start_date.month = 1;
	Rooms_8[1].res_dur.start_date.year = 2021;
	Rooms_8[1].res_dur.end_date.day = 1;
	Rooms_8[1].res_dur.end_date.month = 6;
	Rooms_8[1].res_dur.end_date.year = 2021;

	Rooms_8[2].res_dur.start_date.day = 1;
	Rooms_8[2].res_dur.start_date.month = 1;
	Rooms_8[2].res_dur.start_date.year = 2021;
	Rooms_8[2].res_dur.end_date.day = 1;
	Rooms_8[2].res_dur.end_date.month = 6;
	Rooms_8[2].res_dur.end_date.year = 2021;

	Rooms_8[3].res_dur.start_date.day = 1;
	Rooms_8[3].res_dur.start_date.month = 1;
	Rooms_8[3].res_dur.start_date.year = 2021;
	Rooms_8[3].res_dur.end_date.day = 1;
	Rooms_8[3].res_dur.end_date.month = 6;
	Rooms_8[3].res_dur.end_date.year = 2021;

	Rooms_8[4].res_dur.start_date.day = 1;
	Rooms_8[4].res_dur.start_date.month = 1;
	Rooms_8[4].res_dur.start_date.year = 2021;
	Rooms_8[4].res_dur.end_date.day = 1;
	Rooms_8[4].res_dur.end_date.month = 6;
	Rooms_8[4].res_dur.end_date.year = 2021;

	Rooms_8[5].res_dur.start_date.day = 2;
	Rooms_8[5].res_dur.start_date.month = 6;
	Rooms_8[5].res_dur.start_date.year = 2021;
	Rooms_8[5].res_dur.end_date.day = 29;
	Rooms_8[5].res_dur.end_date.month = 12;
	Rooms_8[5].res_dur.end_date.year = 2021;

	Rooms_8[6].res_dur.start_date.day = 2;
	Rooms_8[6].res_dur.start_date.month = 6;
	Rooms_8[6].res_dur.start_date.year = 2021;
	Rooms_8[6].res_dur.end_date.day = 29;
	Rooms_8[6].res_dur.end_date.month = 12;
	Rooms_8[6].res_dur.end_date.year = 2021;

	Rooms_8[7].res_dur.start_date.day = 2;
	Rooms_8[7].res_dur.start_date.month = 6;
	Rooms_8[7].res_dur.start_date.year = 2021;
	Rooms_8[7].res_dur.end_date.day = 29;
	Rooms_8[7].res_dur.end_date.month = 12;
	Rooms_8[7].res_dur.end_date.year = 2021;

	Rooms_8[8].res_dur.start_date.day = 2;
	Rooms_8[8].res_dur.start_date.month = 6;
	Rooms_8[8].res_dur.start_date.year = 2021;
	Rooms_8[8].res_dur.end_date.day = 29;
	Rooms_8[8].res_dur.end_date.month = 12;
	Rooms_8[8].res_dur.end_date.year = 2021;

	Rooms_8[9].res_dur.start_date.day = 2;
	Rooms_8[9].res_dur.start_date.month = 6;
	Rooms_8[9].res_dur.start_date.year = 2021;
	Rooms_8[9].res_dur.end_date.day = 29;
	Rooms_8[9].res_dur.end_date.month = 12;
	Rooms_8[9].res_dur.end_date.year = 2021;

			//9th Hotel
	hotel[8].free_meals.push_back("free dinner");
	hotel[8].v_comments.push_back("i didn't like it");
	hotel[8].v_comments.push_back("there is few problems");

	Rooms_9[0].set_dataa(1, false, false, true);
	Rooms_9[1].set_dataa(2, true, true, false);
	Rooms_9[2].set_dataa(3, true, true, true);
	Rooms_9[3].set_dataa(4, true, false, false);
	Rooms_9[4].set_dataa(5, false, true, false);
	Rooms_9[5].set_dataa(6, false, true, false);
	Rooms_9[6].set_dataa(7, false, false, false);
	Rooms_9[7].set_dataa(8, true, true, false);
	Rooms_9[8].set_dataa(9, true, false, true);
	Rooms_9[9].set_dataa(10, false, false, false);

	Rooms_9[0].res_dur.start_date.day = 1;
	Rooms_9[0].res_dur.start_date.month = 1;
	Rooms_9[0].res_dur.start_date.year = 2021;
	Rooms_9[0].res_dur.end_date.day = 1;
	Rooms_9[0].res_dur.end_date.month = 4;
	Rooms_9[0].res_dur.end_date.year = 2021;

	Rooms_9[1].res_dur.start_date.day = 1;
	Rooms_9[1].res_dur.start_date.month = 1;
	Rooms_9[1].res_dur.start_date.year = 2021;
	Rooms_9[1].res_dur.end_date.day = 1;
	Rooms_9[1].res_dur.end_date.month = 4;
	Rooms_9[1].res_dur.end_date.year = 2021;

	Rooms_9[2].res_dur.start_date.day = 1;
	Rooms_9[2].res_dur.start_date.month = 1;
	Rooms_9[2].res_dur.start_date.year = 2021;
	Rooms_9[2].res_dur.end_date.day = 1;
	Rooms_9[2].res_dur.end_date.month = 4;
	Rooms_9[2].res_dur.end_date.year = 2021;

	Rooms_9[3].res_dur.start_date.day = 1;
	Rooms_9[3].res_dur.start_date.month = 1;
	Rooms_9[3].res_dur.start_date.year = 2021;
	Rooms_9[3].res_dur.end_date.day = 1;
	Rooms_9[3].res_dur.end_date.month = 4;
	Rooms_9[3].res_dur.end_date.year = 2021;

	Rooms_9[4].res_dur.start_date.day = 1;
	Rooms_9[4].res_dur.start_date.month = 4;
	Rooms_9[4].res_dur.start_date.year = 2021;
	Rooms_9[4].res_dur.end_date.day = 1;
	Rooms_9[4].res_dur.end_date.month = 8;
	Rooms_9[4].res_dur.end_date.year = 2021;

	Rooms_9[5].res_dur.start_date.day = 1;
	Rooms_9[5].res_dur.start_date.month = 4;
	Rooms_9[5].res_dur.start_date.year = 2021;
	Rooms_9[5].res_dur.end_date.day = 1;
	Rooms_9[5].res_dur.end_date.month = 8;
	Rooms_9[5].res_dur.end_date.year = 2021;

	Rooms_9[6].res_dur.start_date.day = 1;
	Rooms_9[6].res_dur.start_date.month = 4;
	Rooms_9[6].res_dur.start_date.year = 2021;
	Rooms_9[6].res_dur.end_date.day = 1;
	Rooms_9[6].res_dur.end_date.month = 8;
	Rooms_9[6].res_dur.end_date.year = 2021;

	Rooms_9[7].res_dur.start_date.day = 1;
	Rooms_9[7].res_dur.start_date.month = 4;
	Rooms_9[7].res_dur.start_date.year = 2021;
	Rooms_9[7].res_dur.end_date.day = 1;
	Rooms_9[7].res_dur.end_date.month = 8;
	Rooms_9[7].res_dur.end_date.year = 2021;

	Rooms_9[8].res_dur.start_date.day = 1;
	Rooms_9[8].res_dur.start_date.month = 8;
	Rooms_9[8].res_dur.start_date.year = 2021;
	Rooms_9[8].res_dur.end_date.day = 1;
	Rooms_9[8].res_dur.end_date.month = 12;
	Rooms_9[8].res_dur.end_date.year = 2021;

	Rooms_9[9].res_dur.start_date.day = 1;
	Rooms_9[9].res_dur.start_date.month = 8;
	Rooms_9[9].res_dur.start_date.year = 2021;
	Rooms_9[9].res_dur.end_date.day = 1;
	Rooms_9[9].res_dur.end_date.month = 12;
	Rooms_9[9].res_dur.end_date.year = 2021;

			//10th Hotel
	hotel[8].free_meals.push_back("there is no free meals");
	hotel[8].v_comments.push_back("very bad place");
	hotel[8].v_comments.push_back("there is many problems");

	Rooms_9[0].set_dataa(1, true, false, false);
	Rooms_9[1].set_dataa(2, false, true, true);
	Rooms_9[2].set_dataa(3, false, true, false);
	Rooms_9[3].set_dataa(4, false, false, true);
	Rooms_9[4].set_dataa(5, true, true, true);
	Rooms_9[5].set_dataa(6, true, true, true);
	Rooms_9[6].set_dataa(7, true, false, true);
	Rooms_9[7].set_dataa(8, false, true, true);
	Rooms_9[8].set_dataa(9, false, false, false);
	Rooms_9[9].set_dataa(10, true, false, true);

	Rooms_10[0].res_dur.start_date.day = 1;
	Rooms_10[0].res_dur.start_date.month = 1;
	Rooms_10[0].res_dur.start_date.year = 2021;
	Rooms_10[0].res_dur.end_date.day = 1;
	Rooms_10[0].res_dur.end_date.month = 12;
	Rooms_10[0].res_dur.end_date.year = 2021;

	Rooms_10[1].res_dur.start_date.day = 15;
	Rooms_10[1].res_dur.start_date.month = 1;
	Rooms_10[1].res_dur.start_date.year = 2021;
	Rooms_10[1].res_dur.end_date.day = 12;
	Rooms_10[1].res_dur.end_date.month =12;
	Rooms_10[1].res_dur.end_date.year = 2021;

	Rooms_10[2].res_dur.start_date.day = 19;
	Rooms_10[2].res_dur.start_date.month = 1;
	Rooms_10[2].res_dur.start_date.year = 2021;
	Rooms_10[2].res_dur.end_date.day = 19;
	Rooms_10[2].res_dur.end_date.month =12;
	Rooms_10[2].res_dur.end_date.year = 2021;

	Rooms_10[3].res_dur.start_date.day = 6;
	Rooms_10[3].res_dur.start_date.month = 1;
	Rooms_10[3].res_dur.start_date.year = 2021;
	Rooms_10[3].res_dur.end_date.day = 6;
	Rooms_10[3].res_dur.end_date.month = 12;
	Rooms_10[3].res_dur.end_date.year = 2021;

	Rooms_10[4].res_dur.start_date.day = 7;
	Rooms_10[4].res_dur.start_date.month = 1;
	Rooms_10[4].res_dur.start_date.year = 2021;
	Rooms_10[4].res_dur.end_date.day = 1;
	Rooms_10[4].res_dur.end_date.month = 12;
	Rooms_10[4].res_dur.end_date.year = 2021;

	Rooms_10[5].res_dur.start_date.day = 1;
	Rooms_10[5].res_dur.start_date.month = 1;
	Rooms_10[5].res_dur.start_date.year = 2021;
	Rooms_10[5].res_dur.end_date.day = 1;
	Rooms_10[5].res_dur.end_date.month = 12;
	Rooms_10[5].res_dur.end_date.year = 2021;

	Rooms_10[6].res_dur.start_date.day = 14;
	Rooms_10[6].res_dur.start_date.month = 1;
	Rooms_10[6].res_dur.start_date.year = 2021;
	Rooms_10[6].res_dur.end_date.day = 14;
	Rooms_10[6].res_dur.end_date.month = 12;
	Rooms_10[6].res_dur.end_date.year = 2021;

	Rooms_10[7].res_dur.start_date.day = 26;
	Rooms_10[7].res_dur.start_date.month = 1;
	Rooms_10[7].res_dur.start_date.year = 2021;
	Rooms_10[7].res_dur.end_date.day = 26;
	Rooms_10[7].res_dur.end_date.month = 12;
	Rooms_10[7].res_dur.end_date.year = 2021;

	Rooms_10[8].res_dur.start_date.day = 30;
	Rooms_10[8].res_dur.start_date.month = 1;
	Rooms_10[8].res_dur.start_date.year = 2021;
	Rooms_10[8].res_dur.end_date.day = 30;
	Rooms_10[8].res_dur.end_date.month = 12;
	Rooms_10[8].res_dur.end_date.year = 2021;

	Rooms_10[9].res_dur.start_date.day = 1;
	Rooms_10[9].res_dur.start_date.month = 1;
	Rooms_10[9].res_dur.start_date.year = 2021;
	Rooms_10[9].res_dur.end_date.day = 1;
	Rooms_10[9].res_dur.end_date.month = 12;
	Rooms_10[9].res_dur.end_date.year = 2021;

	hotel[0].room_arr.push_back(Rooms_1[0]);
	hotel[0].room_arr.push_back(Rooms_1[1]);
	hotel[0].room_arr.push_back(Rooms_1[2]);
	hotel[0].room_arr.push_back(Rooms_1[3]);
	hotel[0].room_arr.push_back(Rooms_1[4]);
	hotel[0].room_arr.push_back(Rooms_1[5]);
	hotel[0].room_arr.push_back(Rooms_1[6]);
	hotel[0].room_arr.push_back(Rooms_1[7]);
	hotel[0].room_arr.push_back(Rooms_1[8]);
	hotel[0].room_arr.push_back(Rooms_1[9]);

	hotel[1].room_arr.push_back(Rooms_2[0]);
	hotel[1].room_arr.push_back(Rooms_2[1]);
	hotel[1].room_arr.push_back(Rooms_2[2]);
	hotel[1].room_arr.push_back(Rooms_2[3]);
	hotel[1].room_arr.push_back(Rooms_2[4]);
	hotel[1].room_arr.push_back(Rooms_2[5]);
	hotel[1].room_arr.push_back(Rooms_2[6]);
	hotel[1].room_arr.push_back(Rooms_2[7]);
	hotel[1].room_arr.push_back(Rooms_2[8]);
	hotel[1].room_arr.push_back(Rooms_2[9]);

	hotel[2].room_arr.push_back(Rooms_3[0]);
	hotel[2].room_arr.push_back(Rooms_3[1]);
	hotel[2].room_arr.push_back(Rooms_3[2]);
	hotel[2].room_arr.push_back(Rooms_3[3]);
	hotel[2].room_arr.push_back(Rooms_3[4]);
	hotel[2].room_arr.push_back(Rooms_3[5]);
	hotel[2].room_arr.push_back(Rooms_3[6]);
	hotel[2].room_arr.push_back(Rooms_3[7]);
	hotel[2].room_arr.push_back(Rooms_3[8]);
	hotel[2].room_arr.push_back(Rooms_3[9]);

	hotel[3].room_arr.push_back(Rooms_4[0]);
	hotel[3].room_arr.push_back(Rooms_4[1]);
	hotel[3].room_arr.push_back(Rooms_4[2]);
	hotel[3].room_arr.push_back(Rooms_4[3]);
	hotel[3].room_arr.push_back(Rooms_4[4]);
	hotel[3].room_arr.push_back(Rooms_4[5]);
	hotel[3].room_arr.push_back(Rooms_4[6]);
	hotel[3].room_arr.push_back(Rooms_4[7]);
	hotel[3].room_arr.push_back(Rooms_4[8]);
	hotel[3].room_arr.push_back(Rooms_4[9]);

	hotel[4].room_arr.push_back(Rooms_5[0]);
	hotel[4].room_arr.push_back(Rooms_5[1]);
	hotel[4].room_arr.push_back(Rooms_5[2]);
	hotel[4].room_arr.push_back(Rooms_5[3]);
	hotel[4].room_arr.push_back(Rooms_5[4]);
	hotel[4].room_arr.push_back(Rooms_5[5]);
	hotel[4].room_arr.push_back(Rooms_5[6]);
	hotel[4].room_arr.push_back(Rooms_5[7]);
	hotel[4].room_arr.push_back(Rooms_5[8]);
	hotel[4].room_arr.push_back(Rooms_5[9]);

	hotel[5].room_arr.push_back(Rooms_6[0]);
	hotel[5].room_arr.push_back(Rooms_6[1]);
	hotel[5].room_arr.push_back(Rooms_6[2]);
	hotel[5].room_arr.push_back(Rooms_6[3]);
	hotel[5].room_arr.push_back(Rooms_6[4]);
	hotel[5].room_arr.push_back(Rooms_6[5]);
	hotel[5].room_arr.push_back(Rooms_6[6]);
	hotel[5].room_arr.push_back(Rooms_6[7]);
	hotel[5].room_arr.push_back(Rooms_6[8]);
	hotel[5].room_arr.push_back(Rooms_6[9]);

	hotel[6].room_arr.push_back(Rooms_7[0]);
	hotel[6].room_arr.push_back(Rooms_7[1]);
	hotel[6].room_arr.push_back(Rooms_7[2]);
	hotel[6].room_arr.push_back(Rooms_7[3]);
	hotel[6].room_arr.push_back(Rooms_7[4]);
	hotel[6].room_arr.push_back(Rooms_7[5]);
	hotel[6].room_arr.push_back(Rooms_7[6]);
	hotel[6].room_arr.push_back(Rooms_7[7]);
	hotel[6].room_arr.push_back(Rooms_7[8]);
	hotel[6].room_arr.push_back(Rooms_7[9]);

	hotel[7].room_arr.push_back(Rooms_8[0]);
	hotel[7].room_arr.push_back(Rooms_8[1]);
	hotel[7].room_arr.push_back(Rooms_8[2]);
	hotel[7].room_arr.push_back(Rooms_8[3]);
	hotel[7].room_arr.push_back(Rooms_8[4]);
	hotel[7].room_arr.push_back(Rooms_8[5]);
	hotel[7].room_arr.push_back(Rooms_8[6]);
	hotel[7].room_arr.push_back(Rooms_8[7]);
	hotel[7].room_arr.push_back(Rooms_8[8]);
	hotel[7].room_arr.push_back(Rooms_8[9]);

	hotel[8].room_arr.push_back(Rooms_9[0]);
	hotel[8].room_arr.push_back(Rooms_9[1]);
	hotel[8].room_arr.push_back(Rooms_9[2]);
	hotel[8].room_arr.push_back(Rooms_9[3]);
	hotel[8].room_arr.push_back(Rooms_9[4]);
	hotel[8].room_arr.push_back(Rooms_9[5]);
	hotel[8].room_arr.push_back(Rooms_9[6]);
	hotel[8].room_arr.push_back(Rooms_9[7]);
	hotel[8].room_arr.push_back(Rooms_9[8]);
	hotel[8].room_arr.push_back(Rooms_9[9]);

	hotel[9].room_arr.push_back(Rooms_10[0]);
	hotel[9].room_arr.push_back(Rooms_10[1]);
	hotel[9].room_arr.push_back(Rooms_10[2]);
	hotel[9].room_arr.push_back(Rooms_10[3]);
	hotel[9].room_arr.push_back(Rooms_10[4]);
	hotel[9].room_arr.push_back(Rooms_10[5]);
	hotel[9].room_arr.push_back(Rooms_10[6]);
	hotel[9].room_arr.push_back(Rooms_10[7]);
	hotel[9].room_arr.push_back(Rooms_10[8]);
	hotel[9].room_arr.push_back(Rooms_10[9]);

	Hotel_arrlist.push_back(hotel[0]);
	Hotel_arrlist.push_back(hotel[1]);
	Hotel_arrlist.push_back(hotel[2]);
	Hotel_arrlist.push_back(hotel[3]);
	Hotel_arrlist.push_back(hotel[4]);
	Hotel_arrlist.push_back(hotel[5]);
	Hotel_arrlist.push_back(hotel[6]);
	Hotel_arrlist.push_back(hotel[7]);
	Hotel_arrlist.push_back(hotel[8]);
	Hotel_arrlist.push_back(hotel[9]);

}
