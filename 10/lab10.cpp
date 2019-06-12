// lab10.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;


class Time
{
public:
	Time operator+ (const Time t);
	Time operator- (const Time t);
	Time operator* (const int x);
											bool operator> (const Time t);
											bool operator< (const Time t);
	void print();
private:
	long hours;
	int minutes;
	bool bl;
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

							bool Time::operator>(const Time t) //реализация перегрузки оператора >
							{
								
								if (
									(this->hours>=t.hours) && (this->minutes>t.minutes)
									)
								{
									return true;
								} else return false;
								
							}
							bool Time::operator<(const Time t) //реализация перегрузки оператора <
							{
								
								if (
									(this->hours<=t.hours) && (this->minutes<t.minutes)
									)
								{
									return true;
								}		
								else return false;									
								 
							}





int _tmain()
{
	//Создать массив из 10 элементов типа «Время», и задать случайные значения. Отсортировать массив методом «пузырек» 
	setlocale(LC_ALL, "rus"); // установка локали
	Time temp;
	Time a[10];
	srand(time(NULL));
	for (int i=0; i<10;i++) //заполнение массива
		
	{
	a[i].setHours(rand()%10); 
	a[i].setMinutes(rand()%60);
	}

	for (int i=0;i<10;i++) //вывод изначального массива
	{
	a[i].print();
	}
a[9].print();
										//Сортировка пузырьком
													for(int i = 1; i < 10; i++)
												{
													for(int j = 0; j <10-i; j++)
													{
														if(a[j].getHours()< a[j+1].getHours())
														{
															// Обмен местами
															temp.setHours(a[j].getHours());
															temp.setMinutes(a[j].getMinutes());
															a[j].setHours (a[j+1].getHours());
															a[j].setMinutes (a[j+1].getMinutes());
															a[j+1].setHours(temp.getHours());
															a[j+1].setMinutes(temp.getMinutes());
														}
														if ((a[j].getHours()== a[j+1].getHours())&&(a[j].getMinutes()<a[j+1].getMinutes()))
														{
															temp.setHours(a[j].getHours());
															temp.setMinutes(a[j].getMinutes());
															a[j].setHours (a[j+1].getHours());
															a[j].setMinutes (a[j+1].getMinutes());
															a[j+1].setHours(temp.getHours());
															a[j+1].setMinutes(temp.getMinutes());
														}
													}
												}
	cout<< "\n";
	for (int i=0;i<10;i++) //вывод отсортированного массива
				{
				a[i].print();
				}
	

	system("pause");
	
	return 0;
}