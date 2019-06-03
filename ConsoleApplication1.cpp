// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class chocolate
{
public:

string name; 
int weight; 
bool with_nuts;

};
/*



*/

int _tmain(int argc, _TCHAR* argv[])
{
	
	
		
	class chocolate a[3];
	a[0].name="Mars"; a[0].weight=40;a[0].with_nuts=0;	
	a[1].name="Twix"; a[1].weight=55;a[1].with_nuts=0;
	a[2].name="Snickers"; a[2].weight=55;a[2].with_nuts=1;	

	for (int i=0;i<=2;i++)
	{		
	cout<<i+1<<" "<<a[i].name<<" "<<a[i].weight;

	if (a[i].with_nuts=1) cout<<"with nuts"<< '\n';
	else cout<<"without nuts"<<'\n';

	}
	 system("pause");

	//chocolate mars={"Mars", 40,0 };
	///chocolate twix={"Twix", 55,0 };
	//chocolate snickers={"Snickers", 55,1};
	//cout<<twix.name<<" "<<twix.weight<<"g \n";
	//cout<<mars.name<<" "<<mars.weight<<"g \n";
	//cout<<snickers.name<<" "<<snickers.weight<<"g \n";
	
	return 0;
}

