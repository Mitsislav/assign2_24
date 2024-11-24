#ifndef __MYSTRING_H__

#include <stddef.h>
#include <stdio.h>
#include <assert.h>


/*
 * IOANNIS CHATZIANTONIOU CSD5193
 * ASSIGNMENT2
 * mystring.h FILE
 */

/*
 * Computes the length of the string pcStr. Returns the length of the string.
 */

size_t ms_length(const char *pcStr);

/*
 * Copies the source string to the destination string. 
 * Checks if source is NULL.Finally adds '\0' to the end of destination. 
 */

char* ms_copy(char *destination, const char *source);

/*
 * Copies the first n characters of the source string to the 
 * destination string. Checks if source and destination are NULL. 
 * Appends '\0' to end of destination
 */

char* ms_ncopy(char *destination, const char *source, size_t n);

/*
 * Appends the source string to the end of the destination string. 
 * Checks if source and destination are NULL.
 */

char* ms_concat(char *destination, const char *source);

/*
 * Appends the first n characters of the source string to the end 
 * of the destination string. Checks whether source and destination 
 * are NULL.
 */

char* ms_nconcat(char *destination, const char *source, size_t n);

/*
 * Compares two strings str1 and str2. 
 * Checks whether str1 and str2 are NULL.
 */

int ms_compare(const char *str1, const char *str2);

/*
 * Compares the first n characters of two strings str1 and str2. 
 * Tests whether str1 and str2 are NULL and whether n is non-zero.
 */

int ms_ncompare(const char *str1, const char *str2, size_t n);

/*
 * Searches for the first occurrence of the substring needle in the 
 * string haystack. Checks whether haystack and needle are NULL
 */

char* ms_search(char *haystack, const char *needle);

#define __MYSTRING_H__
#endif
