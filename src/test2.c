/*
 * test1.c
 *
 *  Created on: 2021年10月11日
 *      Author: tony
 */

#include <stdio.h>
#include <stdlib.h>

void jolly(void);
void deny(void);
void sm(void);
void one_three(void);
void two(void);

int main2() {
  char s1[] = "Gustav";
  char s2[] = "Mahler";
  printf("%s %s\n", s1, s2);
  printf("%s\n", s1);
  printf("%s\n", s2);
  printf("%s ", s1);
  printf("%s\n", s2);

  int age = 41;
  int days = age * 365;
  printf("days: %d\n", days);

  jolly();
  deny();

  sm();
  sm();
  sm();
  printf("\n");
  sm();
  sm();
  printf("\n");
  sm();
  printf("\n");

  printf("starting now:\n");
  one_three();
  printf("done!\n");

  return EXIT_SUCCESS;
}

void jolly() {
  printf("For he's a jolly good fellow!\n");
  printf("For he's a jolly good fellow!\n");
  printf("For he's a jolly good fellow!\n");
}
void deny() {
  printf("Which nobody can deny!\n");
}

void sm() {
  printf("Smile!");
}

void one_three() {
  printf("one\n");
  two();
  printf("three\n");
}

void two() {
  printf("two\n");
}
