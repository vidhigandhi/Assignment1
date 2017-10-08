/*
 * File: SimpleAex.h
 * Author: Vidhi <vg15e@my.fsu.edu>
 *
 * Created on October 8, 2017, 3:11 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAE_H
#define SIMPLEAXE_H

/* Defines the specification of a simple axe where:
 *	 0 <= armor < 20 -- ignore all armor points 
 * 	 Total possible hitpoints = 60 
 */

class SimpleAxe : public Weapon {

	public: 
		SimpleAxe() : Weapon ("Simple Axe", 60.0) {}
		virtual ~SimpleAxe() {};
		virtual double hit(double armor);
};

#endif 



