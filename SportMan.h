#pragma once
#include "Person.h"
#include<string>
#include<vector>
class SportMan :
	public Person
{
public:
	
	SportMan(const string&name = "noname person sport", size_t age = 18, const string& viewSports = "noname sports");
	void setViewSports(string viewSports);
	string getViewSports()const;
	void print();

	
	vector<string>achivement;
	

private:
	string viewSports;

};

