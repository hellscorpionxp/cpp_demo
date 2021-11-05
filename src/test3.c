/*
 * test1.c
 *
 *  Created on: 2021年10月11日
 *      Author: tony
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main3() {
  printf("int has a size of %zd bytes.\n", sizeof(int));
  printf("long long has a size of %zd bytes.\n", sizeof(long long));
  printf("double has a size of %zd bytes.\n", sizeof(double));
  printf("%zd\n", strlen("abc"));
  printf("$______\b\b\b\b");

  int d;
  scanf("%d", &d);
  printf("get: %c\n", d);

  float f;
  scanf("%f", &f);
  printf("%f\n", f);
  printf("%e\n", f);
  printf("%a\n", f);

  const int num = 3.156e7;
  int a;
  scanf("%d", &a);
  printf("sec: %d", a * num);

  return EXIT_SUCCESS;
}
