//smallobj.cpp
//demonstrate a small, simple object
/*#include <iostream>
using namespace std;
class smallobj
{
private:
	int somedata;
public:
	void setdata(int d)
	{
		somedata = d;
	}
	void showdata()
	{
		cout << "Data is " << somedata << endl;
	}
};
int main()
{
	smallobj s1, s2;
	s1.setdata(1066);
	s2.setdata(1776);
	s1.showdata();
	s2.showdata();
	return 0;
}*/
//smallobj.cpp
//demonstrate a small, simple object
#include <iostream>
using namespace std;
class part
{
   private:
	   int mode1number;
	   int partnumber;
	   float cost;
   public:
	   void setpart(int mn, int pn, float c)
	   {
		  mode1number=mn;
		  partnumber=pn;
		  cost=c;
	   }
	   void showpart()
	   {
		  cout<<"Mode1 "      <<mode1number;
		  cout<<", part "     <<partnumber;
		  cout<<", costs$"<<cost<<endl;
	   }
};
int main()
{

	part part1;
	part1.setpart(6244, 373, 217.55F );
	part1.showpart();
	return 0;
}