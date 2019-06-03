// lab9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Time
{
public:
	Time operator+ (const Time t);
	Time operator- (const Time t);
	Time operator* (const int x);
	void print();
private:
	long hours;
	int minutes;
	public:


	void setHours(long newHours) // get set hours
    {
		hours   = newHours; 
		return;        
    }
	long getHours() 
    {
        return hours;
    }
	void setMinutes(int newMinutes) // get set minutes
    {
		minutes   = newMinutes; 
		return;        
    }
	int getMinutes()     {
        return minutes;
    }
	
	
	

};

void Time:: print() // вывод времени
	{
		cout<< hours  << " h " << minutes << " m "  << endl;
	}

Time Time::operator+ (const Time t) //реализация перегрузки оператора +
{
	Time result;
	result.hours=this->hours+t.hours;
	result.minutes=this->minutes+t.minutes;
	while (result.minutes>=60)  // коррекция времени

	 {
		 result.minutes-=60;
		 result.hours++;
	 } 

	
	return result;

}
Time Time::operator- (const Time t) //реализация перегрузки оператора -
{
	Time result;
	result.hours=this->hours-t.hours;
	result.minutes=this->minutes-t.minutes;
	
	while (result.minutes<0 && result.hours>0)
	 // коррекция времени	 
	 {
		 result.minutes+=60;
		 result.hours--;
	 } 

	
	 return result;
}
Time Time::operator* (const int x) //реализация перегрузки оператора *
{
	Time result;
	result.hours=this->hours*x;
	result.minutes=this->minutes*x;
	while (result.minutes>=60)  // коррекция времени
	
	 {
		 result.minutes-=60;
		 result.hours++;
	 } 
	
	 
	return result;

}





int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus"); // установка локали
	Time a,b,c,d,e;
	int f;
	a.setHours(5); 
	a.setMinutes(20);
	b.setHours(15); 
	b.setMinutes(30);
	f=3;
	c=a+b;
	d=a-b;
	e=a*f;
	a.print();
	b.print();
	c.print();
	d.print();
	e.print();

	system("pause");



	return 0;
}

