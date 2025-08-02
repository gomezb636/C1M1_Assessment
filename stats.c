/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Brenda Gomez>
 * @date <Aug 1, 2025>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}


/* Print statistics: Minimum, maximum, mean and median */
void print_statistics(unsigned char* data, unsigned int size) {
    // TODO
}


/* Print all elemnts of array */
void print_array(unsigned char* data, unsigned int size) {
    // TODO
}


/* Find and return median value of array */
unsigned char find_median(unsigned char* data, unsigned int size) {
    // TODO
}


/* Find and return mean value of array */
unsigned char find_mean(unsigned char* data, unsigned int size) {
    // TODO
}


/* Find and return maximum value of array */
int find_maximum(unsigned char* data, unsigned int size) {
    // TODO
}


/* Find and return minimum value of array */
int find_minimum(unsigned char* data, unsigned int size) {
    // TODO
}


/* Sort array from largest to smallest */
void sort_array(unsigned char* data, unsigned int size) {
    // TODO
}
