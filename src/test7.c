/*
 * test1.c
 *
 *  Created on: 2021年10月11日
 *      Author: tony
 */

#include <stdio.h>
#include <stdlib.h>
#define MONTH 12
#define YEAR 5

void copy_arr1(double tag1[], double src[], int num);
void copy_arr2(double *tag2, double *src, int num);
void copy_arr3(double tag3[], double src[], double *ptr);

int main7(void) {
  int arr[] = { [5]=121 };
  int len = sizeof(arr) / sizeof(arr[0]);
  int i;
  for (i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  const float rain[YEAR][MONTH] = { { 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2,
      0.4, 2.4, 3.5, 6.6 }, { 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9,
      1.4, 7.3 },
      { 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 }, { 7.2,
          9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 }, { 7.6, 5.6,
          3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }, };
  int year, month;
  float sub, total;
  for (year = 0, total = 0; year < YEAR; year++) {
    for (month = 0, sub = 0; month < MONTH; month++) {
      sub += rain[year][month];
    }
    printf("%5d: %15.1f\n", 2010 + year, sub);
    total += sub;
  }
  printf("yearly average %.1f.\n", total / YEAR);
  for (month = 0; month < MONTH; month++) {
    for (year = 0, sub = 0; year < YEAR; year++) {
      sub += rain[year][month];
    }
    printf("%4.1f ", sub / YEAR);
  }
  printf("\n");

  year = 0, month = 0;
  sub = 0, total = 0;
  const float (*ptr1)[MONTH];
  const float *ptr2;
  for (ptr1 = rain; ptr1 < (rain + YEAR); ptr1++) {
    for (ptr2 = ptr1[0], sub = 0; ptr2 < (ptr1[0] + MONTH); ptr2++) {
      sub += *ptr2;
    }
    printf("%5d: %15.1f\n", 2010 + year++, sub);
    total += sub;
  }
  printf("yearly average %.1f.\n", total / YEAR);
  for (; month < MONTH; month++) {
    for (year = 0, sub = 0; year < YEAR; year++) {
      ptr2 = &rain[year][month];
      sub += *ptr2;
    }
    printf("%4.1f ", sub / YEAR);
  }
  printf("\n");

  double arr1[] = { 1.3, 2.1, 5.6 };
  double arr2[3];
  double arr3[3];
  double arr4[3];
  copy_arr1(arr2, arr1, 2);
  copy_arr2(arr3, arr1, 2);
  copy_arr3(arr4, arr1, arr1 + 3);
  int ii;
  for (ii = 0; ii < 3; ii++) {
    printf("%.1f ", arr2[ii]);
  }
  printf("\n");
  for (ii = 0; ii < 3; ii++) {
    printf("%.1f ", arr3[ii]);
  }
  printf("\n");
  for (ii = 0; ii < 3; ii++) {
    printf("%.1f ", arr4[ii]);
  }
  printf("\n");

  return EXIT_SUCCESS;
}

void copy_arr1(double tag1[], double src[], int num) {
  int i;
  for (i = 0; i < num; i++) {
    tag1[i] = src[i];
  }
}

void copy_arr2(double *tag2, double *src, int num) {
  int i;
  for (i = 0; i < num; i++, tag2++, src++) {
    *tag2 = *src;
  }
}

void copy_arr3(double tag3[], double src[], double *ptr) {
  double *p1, *p2;
  for (p1 = src, p2 = tag3; p1 < ptr; p1++, p2++) {
    *p2 = *p1;
  }
}
