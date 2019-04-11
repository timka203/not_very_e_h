#pragma once
#include <iostream>
using namespace std;
class room
{
	int volume;
	char*name;
public:
	room();
	room(const char *name, int volume);
	room(const room&obj);
	void setName();
	void setVolume();
	const char* getName();
	int getVolume();
	void info();

	~room();
};

