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

  printf("Original Array:\n");
  print_array(test, SIZE);

  // Sort test array 
  sort_array(test, SIZE);
  print_array(test, SIZE);

  print_statistics(test, SIZE);

}


/* Print statistics: Minimum, maximum, mean and median */
void print_statistics(unsigned char* data, unsigned int size) {
  unsigned char min_val = find_minimum(data, size);
  unsigned char max_val = find_maximum(data, size);
  unsigned char mean = find_mean(data, size);
  unsigned char median = find_median(data, size);

  printf("Statistics:\n");
  printf("Minimum: %u", min_val);
  printf("\nMaximum: %u", max_val);
  printf("\nMean: %u", mean);
  printf("\nMedian: %u", median);
}


/* Print all elemnts of array */
void print_array(unsigned char* data, unsigned int size) {
  printf("test array: [");
    for (unsigned int i = 0; i < size; i++) {
      if (i == size-1) {
        printf("%u", data[i]);
      }
      else {
        printf("%u,", data[i]);
      }
    }

    printf("]\n");
}


/* Find and return median value of array */
unsigned char find_median(unsigned char* data, unsigned int size) {
  unsigned char median;
  // copy array data into temp array so we don't modify orignal array
  unsigned char temp[size];
  for (unsigned int i = 0; i < size; i++) {
    temp[i] = data[i];
  }

  // sort temp array
  sort_array(temp, size);

  // if size is even, take the average of the two middle elements
  if (size %2 == 0) {
    median = (temp[(size / 2) - 1] + temp[size / 2]) / 2;
  }
  else {
    median = temp[size / 2];
  }

  return median;
}


/* Find and return mean value of array */
unsigned char find_mean(unsigned char* data, unsigned int size) {
  unsigned int sum = 0;

  for (unsigned int i = 0; i < size; i++) {
    sum+= data[i];
  }
  
  unsigned char mean = sum / size;
  
  return mean;
}


/* Find and return maximum value of array */
unsigned char find_maximum(unsigned char* data, unsigned int size) {
  // start with assigning max to first element in array
    unsigned char max = data[0];
    
    for (unsigned int i = 1; i < size; i++) {
      if (data[i] > max) {
        max = data[i];
      }
    }

    return max;
}


/* Find and return minimum value of array */
unsigned char find_minimum(unsigned char* data, unsigned int size) {
    // start with assingning min to first element in array
    unsigned char min = data[0];

    for (unsigned int i = 1; i < size; i++) {
      if (data[i] < min) {
        min = data[i];
      }
    }

    return min;
}


/* Sort array from largest to smallest */
void sort_array(unsigned char* data, unsigned int size) {
    for (unsigned int i = 0; i < size - 1; i++) {
      for (unsigned int j = 0; j < i + 1; j++) {
        if (data[i] < data[j]) {
          // store in temp variable
          unsigned char temp = data[i];
          data[i] = data[j];
          data[j] = temp;
        }
      }
    }
}
