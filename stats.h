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
 * stats.h
 * Header File for the C-programming code
 *
 * A file containing all the declarations of the functions used in the main Code file
 *
 * Mina Ihab Matta
 * 10-05-2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(unsigned char *arr, unsigned int length);
/**
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * unsigned char* arr   unsigned char pointer to an n-element data array
 * unsigned int length  unsigned integer as the size of the array
 *
 * returns void
 */

void print_array(unsigned char *arr, unsigned int length);
/**
 * A function that prints the array to the screen
 *
 * unsigned char* arr   unsigned char pointer to an n-element data array
 * unsigned int length  unsigned integer as the size of the array
 *
 * returns void
 * */

unsigned char find_median(unsigned char *arr, unsigned int length);
/**
 * A function that returns the median value
 *
 * unsigned char* arr   unsigned char pointer to an n-element data array
 * unsigned int length  unsigned integer as the size of the array
 *
 * returns median value as unsigned char
 */

unsigned char find_mean(unsigned char *arr, unsigned int length);
/**
 * A function that returns the mean value
 *
 * unsigned char* arr   unsigned char pointer to an n-element data array
 * unsigned int length  unsigned integer as the size of the array
 *
 * returns mean value as unsigned char
 */

unsigned char find_maximum(unsigned char *arr, unsigned int length);
/**
 * A function that returns the maximum value
 *
 * unsigned char* arr   unsigned char pointer to an n-element data array
 * unsigned int length  unsigned integer as the size of the array
 *
 * returns maximum value as unsigned char
 */

unsigned char find_minimum(unsigned char *arr, unsigned int length);
/**
 * A function that returns the minimum value
 *
 * unsigned char* arr   unsigned char pointer to an n-element data array
 * unsigned int length  unsigned integer as the size of the array
 *
 * returns minimum value as unsigned char
 */

void sort_array(unsigned char *arr, unsigned int length);
/**
 * A function that sorts the array from largest value to smallest.
 *
 * unsigned char* arr   unsigned char pointer to an n-element data array
 * unsigned int length  unsigned integer as the size of the array
 *
 * returns void
 */

#endif /* __STATS_H__ */
