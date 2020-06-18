#include "Person.h"
#include<iostream>
#include<string>
using namespace std;
Person::Person(const string & name, size_t age)
{
	setName(name);
	setAge(age);
	
}

void Person::setName(const string & name)
{
	if (name.size() > 0)
		this->name = name;
}

void Person::setAge(size_t age)
{
	if (age <= MAX_AGE) {
		this->age = age;
	}
}

const string & Person::getname() const
{
	return name;
}

size_t Person::getAge() const
{
	return age;
}

void Person::print()
{

	cout << "name person >>" << name << endl;
	cout << "age person >> " << age << endl;

}
