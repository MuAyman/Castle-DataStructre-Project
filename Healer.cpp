
#include "Healer.h"


Healer::Healer(int id, int arr, double h, double p, double rel, double spd)
    : Enemy(id, 0, arr, h, p, rel, spd)
{
};



void Healer::Move()
{
	for (int i = 0; i = Speed - 1; i++)
	{
		DecrementDist();
	}
}

void Healer::Act()
{
}


void Healer::Heal()
{

}
void Healer::ifHealing()
{
	//  if ((!(Frosted || Killed))&& Distance <=2) { Heal(); }
}
