/*
t3.c
Kirjoita ohjelma nimeltä laskemerkit, joka laskee annetusta tiedostosta merkkien 
määrän. Tiedostonimi annetaan komentoriviltä. Merkeiksi lasketaan kaikki merkit 
myös välilyönnit ja rivinvaihtomerkit. 
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{

FILE *eka;
int i = 0;

eka = fopen( argv[1],"r" );
while ( !feof( eka ) )
    {
	fgetc(eka);
	i++;	
	}
fclose(eka);
printf("Merkkeja oli %d kappaletta\n",i);
return 0;
}