#include "mystring.h"

/*
 * IOANNIS CHATZIANTONIOU CSD5193
 * ASSIGNMENT2
 * mystring_ptrs.c FILE
 */


/*
 * This function accepts as argument a pointer
 * in a string . We declare an other pointer that
 * will access the characters of the string and it
 * returns the difference between the end and the 
 * start pointer and it's the number of total size
 * of the string
 */

size_t ms_length(const char *pcStr){
   const char *pcStrEnd = pcStr;
   assert(pcStr != NULL);
   while (*pcStrEnd != '\0')
	  pcStrEnd++;
   return pcStrEnd - pcStr;
}


/*
 * It takes two parameters and it copies the source
 * string to the destination string . We return the
 * char* temp that is shows at the begging of the
 * destination string 
 */

char* ms_copy(char *destination,const char*source){
	char *temp=destination;
	assert(destination!=NULL && source!=NULL);

	while(*source!='\0'){
		*destination=*source;
		destination++;
		source++;
	}	
	return temp;
}


/*
 * This function it copies the characters from the string
 * source to the destination string. If  the length of the
 * string source is less that of n, the remainder of the 
 * destination string will fill with null bytes. Checks
 * runtime if the source string or destination string are null.
 * It returns the pointer that it shows at the start of 
 * the string destination
 */

char *ms_ncopy(char *destination,const char*source,size_t n){
	char *temp=destination;
	int i=0;
	assert(destination!=NULL && source!=NULL);

	while(i!=n){
		if(*source!='\0'){
			*destination=*source;
			destination++;
			source++;
		}else{
			*destination='\0';	
			destination++;
		}
		i++;
	}
	*destination='\0';
	return temp;
}


/*
 * This function copy the source string to the end of
 * the string destination . Checks runtime if source or
 * destination string are null . This function returns a
 * char pointer pointed at the begging of the string 
 * destination 
 */

char *ms_concat(char *destination, const char *source){
	char *temp=destination;
	assert(destination!=NULL && source!=NULL);

	while(*destination!='\0')
		destination++;

	while(*source!='\0'){
		*destination=*source;
		destination++;
		source++;
	}
	return temp;
}


/*
 * This function copies the characters of source string to
 * the destination string . The number n is the number of 
 * characters from source string to copy to the destination
 * If length of the source is less than n , the remainder of
 * destination will fill with null bytes . Checks runtime if
 * the source string or destination are null . This function
 * returns a pointer fo the first character of the destination
 */

char *ms_nconcat(char *destination,const char *source,size_t n){
	char *temp=destination;
	int i=0;
	assert(destination!=NULL && source!=NULL);

	while(*destination!='\0')
		destination++;
	
	while(i<n){
		if(*source!='\0'){
			*destination=*source;
			destination++;
			source++;
		}else{
			*destination='\0';
			destination++;
		}
		
		i++;
	}	
	*destination='\0';

	return temp;
}


/*
 * This function compares two strings (str1,str2)
 * if equals return 0 , if str1<str2 returns -1
 * if str1>str2 returns 1 . Checks runtime if 
 * str1 or str2 are null
 */

int ms_compare(const char *str1,const char *str2){

	assert(str1!=NULL && str2!=NULL);
	while(*str1==*str2){
		if(*str1=='\0')
			return 0;

		str1++;
		str2++;
	}
	if (*str1<*str2)
		return -1;
	else
		return 1;
}


/*
 * This function compares the 0-n characters for strings
 * str1,str2,checks runtime if str1,str2 are null 
 * returns 0 for equality 1 if str1>str2 -1 if str1<str2
 */

int ms_ncompare(const char *str1, const char *str2, size_t n){
	assert(str1!=NULL && str2!=NULL & n!=0);

	while (*str1==*str2 && n>0){
		if(*str1 == '\0' || n==1)
			return 0;
		str1++;
		str2++;
		n--;
	}
	
	if(*str1<*str2)
		return -1;
	else
		return 1;

}


/*
 * This function finds the first occurence of the
 * substring needle in the haystack string . This
 * function returns a pointer to the first occurrence
 * in the haystack fo any of the entire sequence of 
 * characters specified in needle , or a null pointer if
 * the substring we looking for does not exist in haystack
 * Checks runtime if the haystack or the needle are null
 */

char *ms_search(char *haystack,const char *needle){
	const char *position,*temp;
	
	assert(haystack!=NULL && needle!=NULL);
	while(*haystack!='\0'){
		if(*haystack==*needle){
			position=haystack;
			temp=needle;
			
			while (*temp != '\0' && *position == *temp) {
               	 		position++;
               	 		temp++;
            		}
			if (*temp == '\0') 
                		return haystack;	
			
		}
		haystack++;
	}
	return NULL;
}



int main(void){
	return 0;
}

