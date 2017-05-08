#ifndef NC_BARS_H
#define NC_BARS_H
#include "BasicDataStruct.h"
#include <iostream>

using namespace std;

class NCBars
{
	NCBar ncbars;
public:
	NCBars();
	~NCBars();
	NCBars(vector<int>& year,vector<int>&month,vector<int>&day,vector<int>&hour,vector<int>&minute,vector<int>&second,vector<float>&high,vector<float>&low);
	NCBars(NCBars& srcNCBars);
	bool operator = (NCBars &srcNCBars);
	bool getNCBars(vector<NCBar> &);
	int size();
	NCBar at(int i);
	bool addOneNCBar(NCBar& ncbar);
}


#endif
