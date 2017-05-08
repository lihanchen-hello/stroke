#include"NCBars"

NCBars::NCBars(vector<int> &time,vector<float> &high, vector<float> &low)
{
int tn=time.size();
int hn=high.size();
int ln=low.size();

if(tn!=hn||tn!=ln)
{
cout<<"numbers error"<endl;
return;
}

else 
{
for(int i=0;i<tn;i++)
{
NCBars tmp;
tmp.time=time[i];
tmp.high=high[i];
tmp.low=low[i];
ncbars.push_back(tmp);
}

}
}


NCBars::NCBars(NCBars orgNCBars)
{
orgNCBars.getAllNCBars(this–>ncbars);

}

void NCBars::operator =(NCBars orgNCBars)
{
orgNCBars.getAllNCBars(this–>ncbars);
}

int size()
{
return ncbars.size();
}

bool NCBars::getAllNCBars(vector<NCBar> &outNCBar)
{
outNCBar=this–>ncbars;
return true;
}

NCBar NCBar::at(int p)
{
return ncbars[p];
}
