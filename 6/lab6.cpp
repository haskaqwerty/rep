// lab6.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class book
{
private:
		string name; 
		int year; 
public:
void set_name(const char * new_name);
string getname();
void set_year(const int new_year);
void get_info();
};
class reader
{
	private:
		string fio; 
		int age; 
		book* bookname;

public:
void setfio(const char * new_fio);
void setage(const int new_age);
void get_info();

	
				void setbook(book* newbook)
					{
						bookname=newbook;
						return;
					}
				book* current_book()
				{		
					return bookname;
				}
				
};


void book::set_name(const char * new_name)
{
name=new_name;
return;
}
void book::set_year(const int new_year)
{
year=new_year;
return;
}
void book::get_info()
{
cout << this->name << "(" << this->year <<") \n";
return;
}
				
					void reader::setfio(const char * new_fio)
					{
						fio=new_fio;
						return;
					}
					void reader::setage(const int new_age)
					{
						age=new_age;
						return;
					}
					void reader::get_info()
					{
						cout << this->fio << " " << this->age <<"лет \n";
						cout<<"Сейчас читает - "<<this->current_book()<<"\n";
					return;
					}


int _tmain(int argc, _TCHAR* argv[])
{
	
	
	setlocale(LC_ALL, "rus"); // установка локали
		
	class book a,s,d; 	class reader q,w,e;
	a.set_name("Война и мир");    
	s.set_name("Властелин колец");
	d.set_name("Гарри Поттер");   	
	 a.set_year(1865);
	 s.set_year(1955);
	 d.set_year(1995);
	q.setfio("Ваня");   
	w.setfio("Коля");   
	e.setfio("Наташа"); 
	q.setbook(&a);
	w.setbook(&s);
	e.setbook(&d);
	q.setage(20);
	 w.setage(30);
	 e.setage(14);
	
	
	a.get_info();
	s.get_info();
	d.get_info();
	q.get_info();
	w.get_info();
	e.get_info();

	 system("pause");
	return 0;
}

