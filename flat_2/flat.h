#include"room.h"
class flat
{
	room *r;
	int cost;
	int rooms;
	int sum;
public:
	flat();
	flat(int r, int cost);
	flat(const flat &obj);
	int sumOfVolume();
	void setFlat();
	bool isNumRoomsSame(const flat&obj);
	bool isVolumeSame(const flat&obj);
	bool isCostSame(const flat&obj);
	void copy(const flat &obj);
	void info();
	~flat();
};
