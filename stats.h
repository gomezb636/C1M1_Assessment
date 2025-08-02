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
 * @file <stats.h> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Brenda Gomez>
 * @date <Aug 1, 2025>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of the array: minimum, maximum, mean and median
 *
 * This functions takes as input an unsigned char pointer to the data array and 
 * the size of the array as an unsigned int. The statistics printed in this 
 * function include array minimum, maximum, mean and median.
 *
 * @param data Pointer to the data array
 * @param size The number of elements in the array
 *
 * @return void
 */
void print_statistics(unsigned char* data, unsigned int size);


/**
 * @brief Prints the elements of the given array
 *
 * This functions takes as input an unsigned char pointer to the data array and 
 * the size of the array as an unsigned int. This will print the array at its 
 * current state.
 * 
 * @param data Pointer to the data array
 * @param size The number of elements in the array
 *
 * @return void
 */
void print_array(unsigned char* data, unsigned int size);

 
/**
 * @brief Finds the median value of the arrray
 * 
 * This functions takes as input an unsigned char pointer to the data array and 
 * the size of the array as an unsigned int. The median will be the middle 
 * value in a sorted set of numbers.
 *
 * @param data Pointer to the data array
 * @param size The number of elements in the array
 *
 * @return The median value as an unsigned char
 */
unsigned char find_median(unsigned char* data, unsigned int size);


/**
 * @brief Finds the mean value of the array
 *
 * This functions takes as input an unsigned char pointer to the data array and 
 * the size of the array as an unsigned int. This will find the mean by 
 * summing all the values in the array and dividing by the array size.
 *
 * @param data Pointer to the data array
 * @param size The number of elements in the array
 *
 * @return The mean as an unsigned char
 */
unsigned char find_mean(unsigned char* data, unsigned int size);


/**
 * @brief Finds the maximum value in the array
 *
 * This functions takes as input an unsigned char pointer to the data array and 
 * the size of the array as an unsigned int. This will find the maximum value.
 * 
 * @param data Pointer to the data array
 * @param size The number of elements in the array
 *
 * @return The maximum value as an unsigned char
 */
unsigned char find_maximum(unsigned char* data, unsigned int size);


/**
 * @brief Finds the minimum value in the array
 *
 * This functions takes as input an unsigned char pointer to the data array and 
 * the size of the array as an unsigned int. This will find the minimum value.
 * 
 * @param data Pointer to the data array
 * @param size The number of elements in the array
 *
 * @return The minimum value as an unsigned char
 */
unsigned char find_minimum(unsigned char* data, unsigned int size);


 /**
 * @brief Sorts the array from largest to smallest value
 *
 * This functions takes as input an unsigned char pointer to the data array and 
 * the size of the array as an unsigned int.
 * 
 * @param data Pointer to the data array
 * @param size The number of elements in the array
 *
 * @return void
 */
void sort_array(unsigned char* data, unsigned int size);


#endif /* __STATS_H__ */
