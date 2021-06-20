
#include <string>
#include <iostream>
#include "Time.h"


    time::time()
{
	hour = 0;
	minute = 0;
}
time::time(int h, int m)
{
	hour = h;
	minute = m;
}
 time time :: operator++()
{
	 time t;
	 t.minute = ++minute;
	 t.hour = hour;
	 if (t.minute > 59)
		 {
			 t.hour = ++hour;
			 t.minute = 0;
		 }
		 return t;
	 
}
time time :: operator++(int)
{
	time t1;
	t1.minute = minute++;
	t1.hour = hour;
	if (t1.minute > 59)
	{
		t1.hour = ++hour;
		t1.minute = 0;
	}
	return t1;
}
void time::display()
{
	if (minute >= 0 && minute <= 60 && hour>=1 && hour <=12 )
	{
		cout << "\n \n Hours : " << hour;
		cout << "\n minutes : " << minute;
	}
	else
		cout << "\n \n minute can't be greater than 60 ";
}
     
