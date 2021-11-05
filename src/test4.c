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

int main4() {
  char c;
  c = getchar();
  if (isalpha(c)) {
    if (c != 'A' and c != 'a') {
      printf("get char: ");
      putchar(c);
    } else {
      printf("else!");
    }
  } else {
    printf("no letter!");
  }
  printf("\n");

  int d;
  scanf("%d", &d);
  int d1 = (d < 0) ? -d : d;
  printf("%d\n", d1);

  char c1;
  while ((c1 = getchar()) != '#') {
    if (islower(c1)) {
      switch (c1) {
      case 'a':
        printf("%c\n", c1 - 32);
        break;
      case 'b':
        printf("b\n");
        break;
      default:
        printf("done!\n");
      }
    }
  }

  return EXIT_SUCCESS;
}
