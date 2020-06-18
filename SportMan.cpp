#include "SportMan.h"
#include<string>

SportMan::SportMan(const string & name, size_t age,const string& viewSports )
	:Person(name, age)
{
	setViewSports(viewSports);
	vector<string>achivement;


}

void SportMan::setViewSports(string viewSports)
{
	this->viewSports = viewSports;
}

string SportMan::getViewSports() const
{
	return viewSports;
}

void SportMan::print()
{
	Person::print();
	cout << "View Sport >>" << viewSports << endl;
	int size = achivement.size();
	for (int i = 0; i < size; i++) {
		cout << "dosyagnennya >> " << achivement[i] << endl;
	}
}


