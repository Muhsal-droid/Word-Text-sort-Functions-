#include <string.h>
#include <stdio.h>


int convertLowerCase ( char *line ) {
 
int lineLength;
 int character;
 int i;
 int total = 0;
 lineLength = strlen ( line );
 for ( i=0; i<lineLength; i++ ){
    character = line[i];
    if (character > 64 && character < 97){
       line[i] = character + 32;
       total++;
    }
 }
 return ( total );
}
