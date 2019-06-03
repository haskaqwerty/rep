#include "stdafx.h"
#include <iostream>


class book
{
private:

std::string name; 
int year; 
void set_name(const char * new_name);
void set_year(const int new_year);
void get_info();
};
void book::set_name(const char * new_name)
{
this->name=new_name;
return;
}
void book::set_year(const int new_year)
{
this->year=new_year;
return;
}
void book::get_info()
{
std::cout << this->name << "(" << this->year <<")";
return
;
}