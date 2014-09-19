/*
t5.c
Kirjoita ohjelma nimeltä laskuri, joka laskee annetusta tiedostosta joko 
rivien tai sanojen määrän käyttäjän valinnan mukaan. Ohjelmalle voidaan 
antaa argumentit:
tiedostonimi
-sanat tai -rivit
Eli esim. komento laskuri koe.txt -sanat ilmoittaa montako sanaa on tiedostossa 
koe.txt ja komento laskuri koe.txt -rivit ilmoittaa montako riviä on tiedostossa 
koe.txt.
*/

#include <stdio.h>
#include <string.h>

void laske_sanat( FILE *tiedosto );
void laske_rivit( FILE *tiedosto );

int sanat = 1;
int rivit = 1;
char merkki = 'a';

int main (int argc, char const *argv[])
{
FILE *tiedosto;

tiedosto = fopen( argv[1],"r" );
printf ("Tiedoston %s:",argv[2]);

if ( strcmp(argv[2], "sanat") == 0 )
    {
    laske_sanat( tiedosto );
    }   
else if ( strcmp(argv[2], "rivit") == 0 )
    {
				laske_rivit( tiedosto );
				}				
fclose(tiedosto);
return 0;
}

void laske_sanat( FILE *tiedosto )
    {
					while ( !feof( tiedosto ) )
						   {
							  merkki = fgetc( tiedosto );
							  if ( merkki == '\n' || merkki == ' ')
							      {
							      sanat++;
							      }
							  }
					printf(" %d kappaletta\n",sanat);	
    }
				
void laske_rivit( FILE *tiedosto )
    {
					while ( !feof( tiedosto ) )
						   {
									merkki = fgetc( tiedosto );
						   if ( merkki == '\n' )
					        {
					        rivit++;
					        }
									}
					printf(" %d kappaletta\n",rivit);					 	
    }