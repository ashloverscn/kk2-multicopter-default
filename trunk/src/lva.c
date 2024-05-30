/*
 * lva.c
 *
 * Created: 04.03.2013 14:16:20
 *  Author: OliverS
 *
 * $Id: lva.c 58 2013-03-04 17:55:08Z olischulz24@googlemail.com $
 */ 

#include "global.h"
#include "sensors.h"
#include "digitals.h"
#include "controller.h"

void lvaLoop()
{
	if (BATT == 0 || Config.LVA == 0)
		return;
		
	if (BATT < Config.LVA)
		digitalsBuzzInterval(limit(500 - (Config.LVA - BATT) * 6, 20, 500));
}