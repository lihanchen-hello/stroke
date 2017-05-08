#ifndef BASIC_DATA_STRUCT
#define BASIC_DATA_STRUCT
struct Time
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
}

struct Bar
{
	Time time;
	float open ;
	float high;
	float low;
	float close;
	float volume;
	float spread;
}

struct NCBar
{
	Time time;
	float high;
	float low;

}

struct StrokeNode
{
	Time time;
	float position;

}

#endif