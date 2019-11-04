#include <string.h>

int trim ( char *line ) {
int linelength;
int character ;
int i ;
int total = 0;
linelength = strlen (line) ;
 for (i = 0; i<linelength; i++){
  character = line[i];
 }
 int q;
 int m  = linelength -1;
 q = m;
for (q = 0; q > m;q--){
   if (character == ' '){
 line[i] = 0;
  total++ ;
		}
	}

  return(total);
}
