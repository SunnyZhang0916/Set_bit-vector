/**
 * @defgroup set_h Constructed set as bit vector
 *
 * @brief The module is used to show how to construct set with bit vector
 *        and the algoritm for the operations of set. 
 *        The operations of set include union, intersection and difference.
 * 
 * @author Sunny Zhang (dv21szg@cs.umu.se)
 * @date 2022-12-20
 *
 * @{
 */
#ifndef SET_H
#define SET_H

#include <stdbool.h>

/**
 * @defgroup set
 * @brief set
 * 
 * 
 * @author Sunny Zhang (dv21szg@cs.umu.se)
 * @date 2022-12-17
 * 
 * @{
 */


/**
 * @brief Define the new name of data type be set
 */
typedef struct set set;

/**
 * @brief Create an empty set
 * capacity: the maximum value for checking
 * size: the number of element in the set, 0 means it 
 * is empty
 * array: an character array for navigating to the 
 * bit vector
 * 
 * @return set* An empty set with a max limited number
 */
set *set_empty();

/**
 * @brief Creates a new set with a single member
 * 
 * @param value Input the first value of set
 * @return set* A set with the first value
 */
set *set_single(const int value);

/**
 * @brief Inserts the value in the set
 * After the new value is inserted in the set, the size of 
 * set will be increased
 * 
 * @param value A new value to insert
 * @param s A pointer to the set
 */
void set_insert(const int value, set *s);

/**
 * @brief Returns a new set that is the union of the two sets
 * If the value exists in s1 or s2, insert the value in the 
 * new set
 * 
 * @param s1 A constant pointer to the first set
 * @param s2 A constant pointer to the second set
 * @return set* Returns a new set
 */
set *set_union(const set *const s1, const set *const s2);

/**
 * @brief Returns a new set that is the intersection of the two sets
 * If the value exists in both s1 and s2, insert the value in the
 * new set
 * 
 * @param s1 A constant pointer to the first set
 * @param s2 A constant pointer to the second set
 * @return set* Returns a new set
 */
set *set_intersection(const set *const s1, const set *const s2);

/**
 * @brief Returns a new set that is the difference of the two sets
 * if the value exists in s1 and not in s2 (s1 \ s2), insert the 
 * value in the new set
 * 
 * @param s1 A constant pointer to the first set
 * @param s2 A constant pointer to the second set
 * @return set* Returns a new set
 */
set *set_difference(const set *const s1, const set *const s2);

/**
 * @brief Checks if the set is empty.
 * 
 * @param s A constant pointer to the set
 * @return true If the size of set is 0
 * @return false If the size of set is not 0
 */
bool set_is_empty(const set *const s);

/**
 * @brief Checks if the value is a member of the set
 * 
 * @param value The value to be checked if in the set
 * @param s A constant pointer point to non-constant set
 * @return true when the value is in the set
 * @return false when the value is over the maximum value 
 * or not in the set
 */
bool set_member_of(const int value, const set *const s);

/**
 * @brief Returns a random member of the set (without 
 * removing it)
 * Set a random value from 0 to the (maximum value - 1)
 * If 
 * 
 * @param s A constant pointer point to non-constant set
 * @return int A positive value from the set
 */
int set_choose(const set *const s);
 
/**
 * @brief Removes the value from the set
 * If the value is not in the set, it could not remove any 
 * value
 * Change the value of the character array be not the same 
 * as the bit vector
 * 
 * @param value The value to be removed
 * @param s A constant pointer point to non-constant set
 */
void set_remove(const int value, set *const s);

/**
 * @brief Checks if the two sets are equal
 * 
 * @param s1 A constant pointer to the first set
 * @param s2 A constant pointer to the second set
 * @return true If all the variables of set are the same
 * @return false When the variables of set is not the same
 */
bool set_equal(const set *const s1, const set *const s2);

/**
 * @brief Checks if the first set is a subset of the second 
 * If set_difference is empty, s1 is the subset of s2
 * If set_difference is not empty, s1 is not the subset of s2
 * 
 * @param s1 A constant pointer to the first set
 * @param s2 A constant pointer to the second set
 * @return true s1 is the subset of s2
 * @return false s2 is not the subset of 2
 */
bool set_subset(const set *const s1, const set *const s2);

/**
 * @brief Returns an array with all the values in the set
 * 
 * @param s A constant pointer to the second set
 * @return int* An array with all the values in the set
 */
int *set_get_values(const set *const s);

/**
 * @brief Returns the number of elements in the set.
 * 
 * @param s A constant pointer to the second set
 * @return int The size of set
 */
int set_size(const set *const s);

/**
 * @brief Destroys the set
 * Deallocate the memory previous allocated by a call to
 * calloc
 * @param s A pointer to the set
 */
void set_destroy(set *s);

/**
 * @} 
 */

#endif /* SET_H */
