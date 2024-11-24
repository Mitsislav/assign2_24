#include "mystring.h"
#include <string.h>


/*
 *  CHATZIANTWNIOU IOANNIS CSD5193
 *  ASSIGNMENT2
 *  mystring_ars.c FILE 
 */


/* 
 * This function returns the length of
 * a string . With assert(pcStr!=NULL)
 * checks runtime if string is null
 */

size_t ms_length(const char pcStr[]){
	size_t uiLength = 0U;
	assert (pcStr !=NULL);
	while (pcStr[uiLength] != '\0')
		uiLength++;
	return uiLength;
}


/*
 * This function copies the source string
 * to the destination string. Checks runtime if
 * destination and source string are NULL
 */

char* ms_copy(char destination[],const char source[]){
	size_t i=0;
	assert(destination!=NULL && source!=NULL);
	for(i=0;source[i] != '\0' ; i++)
		destination[i]=source[i];
	destination[i]='\0';
	return destination;	
}


/*
 * This function copies up to n characters from the
 * source string to destination string . If the length
 * of the source string is less than that of n , the
 * remainder of the destination string will fill with
 * null bytes . Checks runtime if the source string is
 * null . This function returns a pointer at the begining
 * of destination string
 */

char* ms_ncopy(char destination[],const char source[],size_t n){
	size_t i=0;
	assert(destination!=NULL && source!=NULL);
	while(i!=n){
		if(source[i]!='\0')
			destination[i]=source[i];
		else	
			destination[i]='\0';

		i++;
	}
	
	destination[i]='\0';
	return destination;
}


/*
 * This function joins two strings.
 * Takes the source string and pastes it at 
 * the end of the destination string.
 * Checks runtime if source or destination string
 * are null. It returns a pointer to the final
 * string destination with the wanted string.
 */

char* ms_concat(char destination[],const char source[]){
	size_t i,j;
	i=0;j=0;
	assert(destination!=NULL && source!=NULL);
	for(i=ms_length(destination),j=0; j!=ms_length(source); i++,j++)
		destination[i]=source[j];	
	return destination;
}


/*
 * This function copies the contents of the source
 * string to the end of the destination string 
 * by limiting the characteristic sizes n . if the 
 * source string is greater than the number, the 
 * remaining positions of the destination are simply
 * filled with null bytes. Checks runtime if source or 
 * destination string are null. It returns a pointer to the
 * final string destination with the wanted string.
 */

char* ms_nconcat(char destination[],const char source[],size_t n){
	size_t i,j;
	i=0;j=0;
	assert(destination!=NULL && source!=NULL);
	for(i=ms_length(destination),j=0; j!=n; i++,j++){
		if(source[j]!='\0')
			destination[i]=source[j];
		else
			destination[i]='\0';
	}
	return destination;
}


/*
 * This function compares two strings between themselves, str1,str2.
 * It accesses each character of each string And if any of them
 * reaches null then it is equal. Different Compares their values
 * and sees which is bigger and smaller.Checks runtime if str1 or
 * str2 string are null.
 * Returns : 
 *  0 if equal
 * -1 if str1<str2 
 *  1 if str1>str2
 */

int ms_compare(const char str1[], const  char str2[]){
	size_t i;
	i=0;
	assert(str1!=NULL && str2!=NULL);
	
	while (str1[i] == str2[i]) {
        	if (str1[i] == '\0')
            		return 0;
         	i++;
    	}

	if(str1[i]<str2[i])
		return -1;
	else
		return 1;
}


/*
 * This function compares two strings between themselves, str1,str2.
 * It accesses n number of characters of each string and if i 
 * (number of characters we compared) reaches n then the two strings 
 * are equal for 0-n characters. Different Compares their values 
 * and sees which one is bigger and smaller. Checks runtime if 
 * str1 or str2 are null and n is 0 . 
 * Returns : 
 *  0 : if equal
 * -1 : if str1<str2
 *  1 : if str1>str2
 */

int ms_ncompare(const char str1[], const char str2[], size_t n){
	size_t i;
	i=0;
	assert(str1!=NULL && str2!=NULL && n!=0);
	
	while (i < n && str1[i] == str2[i]) {
        	if (str1[i] == '\0' || i == n - 1)
            		return 0;
        	i++;
    	}
	
	if(str1[i]<str2[i])
		return -1;
	else
		return 1;	
}


/*
 * This function searches the haystack string for a substring 
 * that matches the string needle. The terminating character '\0' 
 * is ignored. Then a Pointer is returned that points to the first 
 * memory location where the needle was found in the haystack. 
 * Checks runtime if the haystack or the needle are null
 */

char* ms_search(char haystack[], const char needle[]){
	size_t i,j,position,length_h,length_n;
	i=0;i=0;position=0;
	length_h=ms_length(haystack);
	length_n=ms_length(needle);

	assert(haystack!=NULL && needle!=NULL);
	
	for(i=0;i<length_h;i++){
		if(haystack[i]==needle[0]){
			position=i;
			for(j=0;j<length_n;j++,position++){
				if(haystack[position]!=needle[j])
					break;
			}
			if(j==ms_length(needle))
				return &(haystack[i]);
		}
	}
	return NULL;
}


int main(void){
	
	/* function 1
	char a[20]="program";
	printf("length of string a=%zu \n",ms_length(a));

	* function 2
	char str1[20] = "C programming";
  	char str2[20];

  	
  	ms_copy(str2, str1);

  	puts(str2);

	* function 3	
	
	char src[40];
   	char dest[12];

  	memset(dest, '\0', sizeof(dest));
   	ms_copy(src, "This is John");
   	ms_ncopy(dest, src, 10);

   	printf("Final copied string : %s\n", dest);

	* function 4*
	
	char str3[100] = "This is ", str4[] = "John";

   	ms_concat(str3, str4);

   	puts(str3);
   	
	* function 5*

	char src1[50], dest1[50];

   	ms_copy(src1,  "This is source");
   	ms_copy(dest1, "This is destination");

   	ms_nconcat(dest1, src1, 15);

   	printf("Final destination string : |%s| \n", dest1);
	
	* function 6*
	
	char name1[] = "John";
	char name2[] = "John";

	printf("%d \n",ms_compare(name1,name2));
	
	*function 7
	
	char str10[15];
   	char str11[15];
   	int ret;

   	strcpy(str10, "abcdef");
   	strcpy(str11, "ABCDEF");

   	ret = strncmp(str10, str11, 4);

   	if(ret < 0) {
      		printf("str10 is less than str11");
   	} else if(ret > 0) {
      		printf("str11 is less than str10");
   	} else {
      		printf("str10 is equal to str11");
   	}
	
	printf("\n");
	*/
	return 0;
}



