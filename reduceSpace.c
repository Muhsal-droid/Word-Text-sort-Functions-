#include <string.h>

int reduceSpace ( char *line ) {

 int lineLength;
 int character;
 int i;
 int total = 0;
 char r = ' ' ;
 lineLength = strlen ( line );
 for ( i=0; i<lineLength; i++ ){
    character = line[i];
	if (character == ' ' || character == '\t') {
		line[i] = r ;
		total++;
		} 
       }
     return (total);
}

