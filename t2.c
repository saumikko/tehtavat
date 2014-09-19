/*
t2.c
Kirjoita ohjelma nimeltä kopioi, joka toimii seuraavasti:
ohjelma suoritetaan komennolla kopioi ekatiedosto tokatiedosto
tällöin ekatiedosto kopioituu tokatiedostoon.
jos ekatiedostoa ei löydy, tulostuu virheilmoitus
*/
#include <stdio.h>

int main (int argc, char const *argv[])
{

FILE *eka;
FILE *toka;
char merkki;

eka = fopen( argv[1],"r" );
if (eka == NULL)
    { 
    printf("Ekan avaaminen epäonnistui");
    }
else
    {
    toka = fopen( argv[2],"w" ); 
    merkki = fgetc(eka);	
    while ( !feof( eka ) )
	    {
	    fputc(merkki, toka);
		merkki = fgetc(eka);	
	    }
	fclose(eka); 
	fclose(toka);
	}

return 0;
}