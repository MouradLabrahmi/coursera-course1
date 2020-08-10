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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
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

/* Add other Implementation File Code Here */
void print_statistics(){
	printf("The mean is %s\n", find_mean);
	printf("The mediane is %s\n", find_median);
	printf("The maximum is %s\n", find_maximum);
	printf("The minimum is %s\n", find_minimum);
}
void print_array(unsigned char test[SIZE]){
	printf("The array is %c\n", test[SIZE]);

}
int find_median(unsigned char test[SIZE], SIZE){
	int mediane;
	mediane = SIZE/2;
	return mediane;
}
int find_mean(unsigned char test[SIZE], SIZE){
	int mean;
	for (int i=0; i < SIZE; i++){
		mean = mean + test[i];
	}
	mean = mean/SIZE;
	return mean; 
}
int find_maximum(unsigned char test[SIZE], SIZE){
	int maximum = 0;
	for (int i = 0; i < SIZE; i++){
		if i >= maximum{
			maximum = i;
		}
	}
	return maximum;

}
int find_minimum(){
	int minimum;
	for (int i = 0; i < SIZE; i++){
		if i >= minimum{
			minimum = i;
		}
	}
	return minimum;

}
void sort_array(unsigned char test[SIZE], SIZE){
	for (i = 0; i < SIZE; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (test[i] > test[j]) 
                {
 
                    a =  test[i];
                    test[i] = test[j];
                    test[j] = a;
 
                }
 
            }
 
        }
    for (i = 0; i < n; ++i)
        printf("sort is %d\n", test[i]);
}

