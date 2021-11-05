/*
 * test1.c
 *
 *  Created on: 2021年10月11日
 *      Author: tony
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define NAME "hello"
#define SIZE 6

int main1() {
  system("color f2");
  printf("hi");
  printf("A\n");
  printf("I*\n");
  printf("I**\n");
  printf("I***\n");
  printf("I****\n");
  printf("I*****\n");
  printf("I******\n");
  printf("I\n");
  printf("I");

  int a, b, c;
  scanf("%d%d", &a, &b);
  c = a + b;
  Sleep(1000);
  printf("%d + %d = %d", a, b, c);
  system("pause");

  char x;
  x = getchar();
  printf("\ngetchar: %c", x);

  printf("sizeof: %zd\n", sizeof(NAME));
  int array[SIZE];
  int *p = array;
  printf("array point: %p\n", array);
  printf("array point: %p\n", &array[0]);
  printf("next point:  %p\n", p + 2);
  long ll = 1;
  printf("long point: %p\n", &ll);
  printf("next point: %p\n", &ll + 1);
  long *lp = &ll + 1;
  printf("diff point: %ld\n", lp - &ll);

  return EXIT_SUCCESS;
}
