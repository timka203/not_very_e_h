#include "flat.h"
#include"room.h"


flat::flat()
{
	this->r = nullptr;
	this->cost = 0;
	this->rooms = 0;
	this->sum = 0;
}

flat::flat(int r, int cost)
{
	this->r = new room[r];
	for (int i = 0; i < r; i++)
	{
		this->r[i].setName();
		this->r[i].setName();
	}
	this->cost = cost;
	this->rooms = r;
	this->sum = sumOfVolume();
}

flat::flat(const flat & obj)
{
	this->r = new room[obj.rooms];
	this->rooms = obj.rooms;
	for (int i = 0; i < rooms; i++)
	{
		this->r[i] = obj.r[i];
	}
	this->cost = obj.cost;
	this->sum = obj.sum;
}

int flat::sumOfVolume()
{
	this-> sum = 0;
	for (int i = 0; i < rooms; i++)
	{
		sum += r[i].getVolume();
	}
	return sum;
}

void flat::setFlat()
{
	cout << "How much rooms?" << endl;
	int r;
	cin >> r;
	this->r = new room[r]; 

	for (int i = 0; i < r; i++)
	{
		this->r[i].setName();
		this->r[i].setVolume();
	}
	int cost;
	cout << "How much it will cost?" << endl;
	cin >> cost;
	this->cost = cost;
	this->rooms = r;
	this->sum = sumOfVolume();
}

bool flat::isNumRoomsSame(const flat & obj)
{
	if (this->rooms == obj.rooms)
		return true;
	return false;
}

bool flat::isVolumeSame(const flat & obj)
{
	if (this->sum == obj.sum)
	{
		return true;
	}
	return false;
}

bool flat::isCostSame(const flat & obj)
{
	if (this->cost == obj.cost)
		return true;
	return false;
}

void flat::copy(const flat & obj)
{
	this->r = new room[obj.rooms];
	this->rooms = obj.rooms;
	for (int i = 0; i < rooms; i++)
	{
		this->r[i] = obj.r[i];
	}
	this->cost = obj.cost;
	this->sum = obj.sum;
}
void flat::info()
{
	cout << "cost is" << " " << cost << endl << "nuber of room:" << rooms <<"volume is"<<" "<<sum<< endl;
	for (size_t i = 0; i < rooms; i++)
	{
		r[i].info();
	}
}
flat::~flat()
{
	delete[]r;
	cost = 0;
	rooms = 0;
}
