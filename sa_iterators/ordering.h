#ifndef ORDERING_H
#define ORDERING_H

#include <algorithm>

/**
 * Given an array in which every element except the last is in sorted
 * (ascending) order, move the last element into the appropriate position
 * so that the entire array is sorted.
 * 
 * @param array an array of data elements, such that for any i,
 *        0 <= i < N-2 => array[i] <= array[i+1]
 * @param N  the number of elements in the array
 * @return the position into which the last element has been moved.
 */
int shiftIntoPosition (int* array, int N);




#endif

