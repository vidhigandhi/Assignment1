/*
 * File: CrazyRandomSword.h
 * Author: Vidhi <vg15e@my.fsu.edu>
 *
 * Created on October 8, 2017, 3:37 PM
 */

#include <string>
#include <cstdlib> 	/* rand() */
#include "Weapon.h"
#include <time.h>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/* Defines the behavior of a crazy random sword where the class generates a random number 
   between 10 and 100.
	Hitpoints = random number between 10 and 100; ignores int armor points ranging from 
	0 to half of the armor the weapon hit
*/

class CrazyRandomSword : public Weapon 
{
	public:
 		CrazyRandomSword() : Weapon ("Crazy Random Sword", hitPoint()) {}
		virtual ~CrazyRandomSword() {};
		virtual double hit (double armor);
	private:
		double hitPoint();
};

#endif
