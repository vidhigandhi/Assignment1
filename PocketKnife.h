/*
 * File: PocketFile.h
 * Author: Vidhi <vg15e@my.fsu.edu>
 *
 * Created on October 8, 2017, 4:17 PM
 */

#include <string>
#include "Weapon.h"
#include <cstlib>
#include <time.h>

#ifndef POCKETKNIFE_H
#define POCKETKNIFE_H

/* Defines the behavior of a pocket knife where the hitpoints are calculated as:
  	armor = random number between 1 and 50 
	if armor > 30 then use a sharp knife from the lot and hitpoints = armor
	if armor <= 29 then hitpoints = 15 % of random number between 0 and 29
*/

class PocketKnife : public Weapon 
{
	public:
		PocketKnife() : Weapon ("Pocket Knife", hitPoint()) {}
		virtual ~PocketKnife() {};
		virtual double hit (double armor);
	private:
		double hitPoint();
};


#endif
