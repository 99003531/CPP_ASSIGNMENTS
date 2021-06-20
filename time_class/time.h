#ifndef _TIME_H_
#define _TIME_H_

#include <string>

class time{
   
private: 
	int hour, minute;
public:
	time();
	time (int , int);
	time operator++();
   time operator++(int);
	void display();
};
