#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSIZE  500    /* maximum size of input line */
#define MAXWORDS 1000   /* maximum number of unique words */
/* 
 * Program Name:findWords.c
 * Author: Muhammad Salmaan
 * Purpose: find the number of duplicate words in text (STDIN)
 */ 

int main ( int argc, char *argv[] ) {
    
   int occur;
   occur = 0;
   char stoWords[MAXWORDS][MAXSIZE] ;
   int m; 
    m =0;
   int countWords; 
   countWords = 0;
   int n; 
   n = 0;
   int number[MAXWORDS]; 
   char normalWords[MAXSIZE];
   int r;
   r = 0;
   int u;
   u = 0;
  
   while ( fgets ( normalWords, MAXSIZE, stdin ) != 0 ) {
   n = 0;
   while (n <  strlen(normalWords)){
                   (stoWords[m][n]) = (normalWords[n]) ;
                   (normalWords[n]) =(stoWords[m][n]);
		n++;
    
    }
   number[m] = 1;
   (m++);
   countWords++;
   }
   m = 0;
  while ((m  <  countWords)){
   occur = 0;
	n = ((m  +  1));
	while ((n  <  countWords)){

		if ((strcmp(stoWords[m],stoWords[n])   == 0)){
			(number[ m ]++);
			(occur++);
			
	 }else{ 
			(number[ m ]++);
			(occur--);
			(number[ m ]--);
			(occur++);
			}
		 n++;
	}
	printf ( "%d%d%d %s" ,u,r,(number[m]),(stoWords[m]));
	m -= occur;
	m += 2*( occur );
	m++;
}
return (0) ;
}



