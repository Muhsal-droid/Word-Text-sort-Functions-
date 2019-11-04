#include <string.h>

int replaceDigits ( char *line ) {
   
 int lineLength;
 int character;
 int i;
 int total = 0;
 lineLength = strlen ( line );
 for ( i=0; i<lineLength; i++ ){
    character = line[i];
    if (character > 47 && character < 58){
       line[i] = character + 32;
       total++;
    }
 }
 return ( total );
}
