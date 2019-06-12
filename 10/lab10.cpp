// lab10.cpp: ���������� ����� ����� ��� ����������� ����������.
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

void Time:: print() // ����� �������
	{
		cout<< hours  << " h " << minutes << " m "  << endl;
	}

Time Time::operator+ (const Time t) //���������� ���������� ��������� +
{
	Time result;
	result.hours=this->hours+t.hours;
	result.minutes=this->minutes+t.minutes;
	while (result.minutes>=60)  // ��������� �������

	 {
		 result.minutes-=60;
		 result.hours++;
	 } 

	
	return result;
}

Time Time::operator- (const Time t) //���������� ���������� ��������� -
{
	Time result;
	result.hours=this->hours-t.hours;
	result.minutes=this->minutes-t.minutes;
	
	while (result.minutes<0 && result.hours>0)
	 // ��������� �������	 
	 {
		 result.minutes+=60;
		 result.hours--;
	 } 	
	 return result;
}
Time Time::operator* (const int x) //���������� ���������� ��������� *
{
	Time result;
	result.hours=this->hours*x;
	result.minutes=this->minutes*x;
	while (result.minutes>=60)  // ��������� �������
	
	 {
		 result.minutes-=60;
		 result.hours++;
	 } 	 
	return result;
}

							bool Time::operator>(const Time t) //���������� ���������� ��������� >
							{
								
								if (
									(this->hours>=t.hours) && (this->minutes>t.minutes)
									)
								{
									return true;
								} else return false;
								
							}
							bool Time::operator<(const Time t) //���������� ���������� ��������� <
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
	//������� ������ �� 10 ��������� ���� �������, � ������ ��������� ��������. ������������� ������ ������� �������� 
	setlocale(LC_ALL, "rus"); // ��������� ������
	Time temp;
	Time a[10];
	srand(time(NULL));
	for (int i=0; i<10;i++) //���������� �������
		
	{
	a[i].setHours(rand()%10); 
	a[i].setMinutes(rand()%60);
	}

	for (int i=0;i<10;i++) //����� ������������ �������
	{
	a[i].print();
	}
a[9].print();
										//���������� ���������
													for(int i = 1; i < 10; i++)
												{
													for(int j = 0; j <10-i; j++)
													{
														if(a[j].getHours()< a[j+1].getHours())
														{
															// ����� �������
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
	for (int i=0;i<10;i++) //����� ���������������� �������
				{
				a[i].print();
				}
	

	system("pause");
	
	return 0;
}