/*
 * test1.c
 *
 *  Created on: 2021年10月11日
 *      Author: tony
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iso646.h>

#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "****************************************"

int menu(void);
int getnights(void);
void showprice(double rate, int nights);
