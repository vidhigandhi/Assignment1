/*
 * File: SimpleAxe.cpp
 * Author: Vidhi <vg15e@my.fsu.edu>
 *
 */

#include "SimpleAxe.h"

double SimpleAxe::hit (double armor)
{
	double hit;
	if(armor > 0 && armor < 20)
		hit = hitPoints;
	else 	
		hit = hitPoints - armor;
		
	//return check 
	if (hit < 0)
		return 0.0;
	return hit;

}

