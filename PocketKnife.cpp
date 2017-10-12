/*
 * File: PocketKnife.cpp
 * Author: Vidhi <vg15e@my.fsu.edu>
 *
 */

#include "PocketKnife.h"

double PocketKnife::hit (double armor)
{
	double damage;
	if ((int)armor > 29)
		damage = hitpoints;
	else if ((int)armor <=29 )
		damage = 0.15 * armor;

	//return value
	if (damage < 0) 
		return 0;

	return damage; 
}

double PocketKnife::hitPoint()
{
	std::srand(time(0));
	return std::rand() % 100 + 1;
}
