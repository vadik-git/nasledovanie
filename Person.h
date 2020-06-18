#pragma once
#include<iostream>
using namespace std;

class Person
{
public:

	Person(const string&name = "Noname", size_t age = 18);
	static const size_t MAX_AGE = 90;
	void setName(const string&name);
	void setAge(size_t age);
	const string &getname()const;
	size_t getAge()const;
	void print();
private:
	string name;
protected:
	size_t age;
};

