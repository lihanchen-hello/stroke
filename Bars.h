#ifndef BARS_H
#define BARS_H
#include "BasicDataStruct.h"
#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

class Bars
{
	vector<Bar> bars;

public:
	Bars();
	~Bars();
	Bars(vector<int>& year,vector<int>&month,vector<int>&day,vector<int>&hour,vector<int>&minute,vector<int>&second,vector<float>&open,vector<float>&high,vector<float>&low,vector<float>&close,vector<float>&volume,vector<float>&spread);
	Bars(Bars &srcBars);
	bool operator = (Bars &srcBars);
	bool getBars(vector<Bar> &);
	int size();
	Bar at(int i);
	bool addOneBar(Bar& bar);
}


#endif
