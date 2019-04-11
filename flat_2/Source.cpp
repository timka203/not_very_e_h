#include <iostream>
using namespace std;
#include "room.h"
#include"flat.h"
void main()
{
	room r;
	flat f;
	f.setFlat();
	flat f2;
	f2.setFlat();
	cout<<f.isNumRoomsSame(f2)<<endl;
	f.info();
	f2.copy(f);
	f2.info();
	system("pause");
}