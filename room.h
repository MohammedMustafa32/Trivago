#pragma once
struct date
{
	int day,
		month,
		year;
};

struct res_duration
{
	date start_date;
	date end_date;
};

class room
{
public:
	int room_num;
	bool single,
		tv,
		wifi;
	res_duration res_dur;
	room();
	void set_dataa(int room_number, bool is_single, bool have_tv, bool have_wifi);
	void set_reservation_duration(res_duration reservation_duration);
	room get_data();
	void display_room();
	~room();
};

