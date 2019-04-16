// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Employee;

class Department
{
private:
	 string name;
	 Employee* head;	 
	 
public:
	void setName(string newName) 
    {
		name   = newName; 
		return;        
    }
	string getName() 
    {
        return name;
    }
	void setHead( Employee* newHead)
	{
		head= newHead;
		return;
	}
	Employee* getHead()
	{		
		return head;
	}

	void print();
};

class idCard
{
private:
	 int number;
	  string dateExpire;
public:
	void setNumber(int newNumber) 
    {
		number   = newNumber; 
		return;        
    }
	int getNumber() 
    {
        return number;
    }	
	public:
	void setDateExpire(string newDateExpire) 
    {
		dateExpire   = newDateExpire; 
		return;        
    }
	string getDateExpire() 
    {
        return dateExpire;
    }
	void print()
	{
		cout << number  << "/ " << dateExpire << endl;
	}
};
class Employee
{
private:
	 string name;
	 string position;
	 idCard* card;
	 int room;
	 Department* department;
public:
	void setName(string newName) 
    {
		name   = newName; 
		return;        
    }
	string getName() 
    {
        return name;
    }
	void setPosition(string newPosition) 
    {
		position   = newPosition; 
		return;        
    }
	string getPosition() 
    {
        return position;
    }
	void setIdCard( idCard* newIdCard)
	{
		card= newIdCard;
		return;
	}
	idCard* getIdCard()
	{		
		return card;
	}
	void setRoom(int newRoom) 
    {
		room  = newRoom; 
		return;        
    }
	int getRoom() 
    {
        return room;
    }
	void setDepartment(Department* newDepartment)
	{
		department =newDepartment;
		return;
	}
	Department* getDepartment()
	{		
		return department;
	}
	void print()
	{
		cout<< name  << "/ " << position << "/ " << card->getNumber() << "/ " << room <<"/ "<<  department->getName() << endl;
	}
};

void Department::print()
	{
		cout << name <<"/ "<< head->getName() << endl;
	}


int _tmain(int argc, _TCHAR* argv[])
{
	 setlocale(LC_ALL, "rus"); // установка локали

	 Employee Ivanov,Petrov,Sidorov,Mihailov,Aleksandrova,Evgeneva; // Работники
	 Department dDevel, dAUP; // Департаменты
	 dDevel.setName("Разработки");
	 Ivanov.setDepartment(&dDevel);
	 Petrov.setDepartment(&dDevel);
	 Sidorov.setDepartment(&dDevel);
	 //head
	 dDevel.setHead(&Ivanov);
	 
		 
	 dAUP.setName("Администрация");
	 Mihailov.setDepartment(&dAUP);
	 Evgeneva.setDepartment(&dAUP);
	 Aleksandrova.setDepartment(&dAUP);
	 //head
	 dAUP.setHead(&Mihailov); 

	 idCard id101,id5016,id5018,id201,id5019,id5022; // ID
	 id101.setNumber(101);
	 id101.setDateExpire("DateExpire");
	 id5016.setNumber(5016);
	 id5016.setDateExpire("DateExpire");
	 id201.setNumber(201);
	 id201.setDateExpire("DateExpire");
	 id5019.setNumber(5019);
	 id5019.setDateExpire("DateExpire");
	 id5022.setNumber(5022);
	 id5022.setDateExpire("DateExpire");
	 id5018.setNumber(5018);
	 id5018.setDateExpire("DateExpire");



	
	 Ivanov.setName("Иванов Иван Иванович");
	 Ivanov.setPosition("Глава департамента");
	 Ivanov.setRoom(101);
	 Ivanov.setIdCard(&id101);

	 Petrov.setName("Петров Петр Петрович");
	 Petrov.setPosition("Главный разработчик");
	 Petrov.setRoom(102);
	  Petrov.setIdCard(&id5016);

	 Sidorov.setName("Сидоров Сидор Сидорович");
	 Sidorov.setPosition("Разработчик");
	  Sidorov.setRoom(102);
	   Sidorov.setIdCard(&id5018);

	 Mihailov.setName("Михайлов Михаил Михайлович");
	 Mihailov.setPosition("Директор ");
	  Mihailov.setRoom(201);
	   Mihailov.setIdCard(&id201);

	 Aleksandrova.setName("Александрова Александра Александровна");
	 Aleksandrova.setPosition("Заместитель директора");
	  Aleksandrova.setRoom(5022);
	   Aleksandrova.setIdCard(&id5022);

	 Evgeneva.setName("Евгеньева Евгения Евгеньевна");
	 Evgeneva.setPosition("Главный бухгалтер");
	  Evgeneva.setRoom(202);
	   Evgeneva.setIdCard(&id5019);

	  dAUP.print(); // vivod depart
	  dDevel.print();
	  cout << endl;

	  //vivod empl
	  Ivanov.print(); 
	  Petrov.print();
	  Sidorov.print();
	  Mihailov.print();
	  Aleksandrova.print();
	  Evgeneva.print();


	 








	 system("pause");
	return 0;
}

