#include <string.h>

int replacePunc ( char *line ) {
 
 int lineLength;
 int character;
 int i;
 int total = 0;
 lineLength = strlen ( line );
 for ( i=0; i<lineLength; i++ ){
    character = line[i];  
    if ((character > 90 && character < 97 ) || (character > 122 && character < 256) || (character >32 && character < 48) || (character >57 && character < 65)){
       line[i] = ' ';
       total++;
    }
 }
 return ( total );
}
