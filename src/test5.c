/*
 * test1.c
 *
 *  Created on: 2021年10月11日
 *      Author: tony
 */

#include "test5.h"

int menu(void) {
  int code, status;
  printf("\n%s\n", STARS);
  printf("Enter the number of the hotels:\n");
  printf("1) Fairfield Arms       2) Hotel Olympic\n");
  printf("3) Chertworthy Plaza    4) The Stockton\n");
  printf("5) QUIT\n");
  printf("\n%s\n", STARS);
  while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5)) {
    printf("Enter an integer from 1 to 5!\n");
  }
  return code;
}

int getnights(void) {
  int nights;
  printf("How many nights are needed? ");
  while (scanf("%d", &nights) != 1) {
    printf("Please enter an integer, such as 3.\n");
  }
  return nights;
}

void showprice(double rate, int nights) {
  int n;
  double total = 0.0;
  double factor = 1.0;
  for (n = 1; n <= nights; n++, factor *= DISCOUNT) {
    total += rate * factor;
  }
  printf("%d nights, total cost will be $%0.2f\n", nights, total);
}
