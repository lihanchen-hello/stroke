#include "Bars.h"
#include <vector>



Bars::Bars(Bars &srcBars)
{
	srcBars.getBars(this->bars);
}

Bars::Bars(vector<int>& year,vector<int>&month,vector<int>&day,vector<int>&hour,vector<int>&minute,vector<int>&second,vector<float>&open,vector<float>&high,vector<float>&low,vector<float>&close,vector<float>&volume,vector<float>&spread)
{
	int vectorSize[12]={year.size(),month.size(),day.size(),hour.size(),minute.size(),second.size(),open.size(),high.size(),low.size(),close.size(),volume.size(),spread.size()};
	bool errorSize=false;
	for(int i=0;i<12;i++)
	{
		if(vectorSize[0]!=vectorSize[i])
			errorSize=true;
	}
	if(errorSize==true)
	{
		cout<<"The size of all vectors are not equal"<<endl;
		return ;
	}



	for(int i=0;i<year.size();i++)
	{
		Bar tmp;
		tmp.time.year=year[i];
		tmp.time.month=month[i];
		tmp.time.day=day[i];
		tmp.time.hour=hour[i];
		tmp.time.minute=minute[i];
		tmp.time.second=second[i];
		tmp.open=open[i];
		tmp.high=high[i];
		tmp.low=low[i];
		tmp.close=close[i];
		tmp.volume=volume[i];
		tmp.spread=spread[i];
		bars.push_back(tmp);
	}


}

bool Bars::operator = (Bars& srcBars)   //具体的运算符重载可能是有问题的，后期运行时再看看
{
	srcBars.getBars(this->bars);
	return this;
}

bool Bars::getBars(vector<Bar> &outBars)
{
	outBars=bars;
}

int Bars::size()
{
	return bars.size();
}

Bar  Bars::at(int i)
{
	return bars[i];
}


bool Bars::addOneBar(Bar& bar)
{
	bars.push_back(bar);
	return true;
}
