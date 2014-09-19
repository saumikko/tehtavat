/*
t4.c
Kirjoita ohjelma nimeltä laskesanat, joka laskee annetusta tiedostosta 
sanojen määrän. Tiedostonimi annetaan komentoriviltä. Sanoiksi lasketaan myös 
yksittäiset merkit ja numerot. Eli aina kun löytyy välilyönti tai rivinvaihto, 
alkaa uusi sana.
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
FILE *eka;
int i = 1;
char merkki;

eka = fopen( argv[1],"r" );
while ( !feof( eka ) )
    {
	merkki = fgetc(eka);
	if ( merkki == '\n' || merkki == ' ')
	    {
	    i++;	
	    }
	}
fclose(eka);
printf("Sanoja oli %d kappaletta\n",i);
return 0;
}
