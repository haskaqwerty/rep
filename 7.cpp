// 7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
 
using namespace std;

class spell
{
public:

	string name;
	int dhp;
	int dmp;
	void init(const int &dhp, const int &dmp,const string &name);
      
};
class mage
{

private:
	int hp;
	int mp;
	string name;
	
public:
	void init(const int &hp, const int &mp);
	string getname();
	void say(string text) ;
	int cast(spell &dhp,mage &dmp)     ;
		void hit(spell &damage,mage &player)   ;
	mage()
	{		
		name="unitialized";
	}
};

void spell::init(const int &dhp, const int &dmp,const string &name)
	  {
                this->dhp = dhp;
                this->dmp = dmp;
				this->name = name;
        }
void mage:: init(const int &hp, const int &mp)
        {
                this->hp = hp;
                this->mp = mp;
        }
string mage:: getname() 
    {		
		return name;        
    }
	
							void mage::say(string text) 
							{ 
								
								cout<<text<< endl;
							}
							int mage:: cast(spell &dhp,mage &dmp)     
							{
								return mp;
							}
							void mage::hit(spell &damage,mage &player)     
							{		
								player.hp-=damage.dhp;
								player.mp-=damage.dmp;

							}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus"); // установка локали
	mage boris,vanya;	
	vanya.init(30,20); //hp,mp
	boris.init(30,20);
	spell bolt,drain;
	bolt.init(30,20,"bolt"); //dhp,dmp,name
	drain.init(30,20,"drain");





	system("pause");

	return 0;
}

