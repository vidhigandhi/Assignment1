/*
 * File: CrazyRandomSword.cpp 
 * Author: Vidhi <vg15e@my.fsu.edu>
 *
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit (double armor)
{
	double damage = hitPoints - std::rand() % ((int)armor / 2);

	if (damage < 0)
 		damage = 0 ;

	return damage;
}

double CrazyRandomSword::hitPoint()
{
	std::srand(time(0));
	return rand() % 100 + 10;
}
