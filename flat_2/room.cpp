#include "room.h"



room::room()
{
	volume = 0;
	name = nullptr;
}

room::room(const char * name, int volume)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->volume = volume;
}

room::room(const room & obj)
{
	this->name = new char[strlen(obj.name) + 1];
	strcpy_s(this->name, strlen(obj.name), obj.name);
	this->volume = obj.volume;
}

void room::setName()
{
	char tmp[100];
	cout << "which type of room?"<<endl;
	cin >> tmp;

	this->name = new char[strlen(tmp) + 1];
	strcpy_s(this->name, strlen(tmp) + 1, tmp);
}

void room::setVolume()
{
	cout << "Which volume?" << endl;
	int a;
	cin >> a;
	volume = a;
}

const char * room::getName()
{
	return name;
}

int room::getVolume()
{
	return volume;
}


void room::info()
{
	cout << name << " " << volume << endl;
}

room::~room()
{
	delete[] name;
}
