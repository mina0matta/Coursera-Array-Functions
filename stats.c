/******************************************************************************
 * Copyright (C) 2023 by Mina Ihab Matta
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Mina Ihab is not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * stats.c
 * Implementation file for the C-programming code
 *
 * A program that can analyze an array of unsigned char data items and report analytics on the maximum,minimum, mean, and median of the data set.
 * In addition reorder this data set from large to small.
 * All statistics are rounded down to the nearest integer.
 *
 * Mina Ihab Matta
 * 10-05-2023
 *
 */

#include <stdio.h>
#include <math.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main()
{
  //  int min = 0, max = 0, med = 0, mean = 0;

  unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                              114, 88, 45, 76, 123, 87, 25, 23,
                              200, 122, 150, 90, 92, 87, 177, 244,
                              201, 6, 12, 60, 8, 2, 5, 67,
                              7, 87, 250, 230, 99, 3, 100, 90};

  print_statistics(test, SIZE);
}

void print_statistics(unsigned char *arr, unsigned int length)
{
  printf("The original array is : ");
  print_array(arr, length);
  printf("\n");
  printf("The minimum value in the array is : %d", (int)round(find_minimum(arr, length)));
  printf("\n");
  printf("The maximum value in the array is : %d", (int)round(find_maximum(arr, length)));
  printf("\n");
  printf("The median value in the array is : %d", (int)round(find_median(arr, length)));
  printf("\n");
  printf("The mean value in the array is : %0.2f", (float)round(find_mean(arr, length)));
  printf("\n");
  printf("The descending sort of the array is : ");
  sort_array(arr, length);
  print_array(arr, length);
}

void print_array(unsigned char *arr, unsigned int length)
{
  for (int i = 0; i < length; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

unsigned char find_median(unsigned char *arr, unsigned int length)
{
  unsigned char median, temp;

  for (int i = 0; i < length; i++) // sorting the array in ascending order
  {
    for (int j = 0; j < (length - 1); j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  if (length % 2 == 0) // finding the median
  {
    median = (arr[(length - 1) / 2] + arr[length / 2]) / 2.0;
  }
  else // if number of elements are odd
  {
    median = arr[length / 2];
  }
  return median;
}

unsigned char find_mean(unsigned char *arr, unsigned int length)
{
  unsigned char mean = 0, sum = 0;

  for (int i = 0; i < length; i++) // sorting the array in ascending order
  {
    sum += arr[i];
  }
  mean = sum / length;

  return mean;
}

unsigned char find_maximum(unsigned char *arr, unsigned int length)
{
  unsigned char max = 0;

  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < (length - 1); j++)
    {
      if (arr[j] > max)
      {
        max = arr[j];
      }
    }
  }
  return max;
}

unsigned char find_minimum(unsigned char *arr, unsigned int length)
{
  unsigned char min = arr[0];

  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < (length - 1); j++)
    {
      if (arr[j] < min)
      {
        min = arr[j];
      }
    }
  }
  return min;
}

void sort_array(unsigned char *arr, unsigned int length)
{
  unsigned char temp = 0;

  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < (length - 1); j++)
    {
      if (arr[j] < arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
