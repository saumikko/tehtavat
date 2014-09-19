/*
t6.c

Kirjoita ohjelma, jossa määrittelet: 
-char tyyppisen muuttujan nimeltä merkki 
-merkkitaulukon jono, joka sisältää sanan "taateli" 
-osoittimen p johon voi tallentaa merkkimuuttujan osoitteen 
Merkki kysytään käyttäjältä ja p saa arvokseen strchr-funktion palauttaman arvon. 
Tulosta lopuksi p:n arvo. Kokeile mitä ohjelmaa tulostaa, kun annat eri merkkejä. 
*/

#include <stdio.h>
#include <string.h>

int main (int argc, char const *argv[])
{
char merkki;
char * jono = "taateli";
char * p;

/* pyydä käyttäjältä merkki */
printf( "Anna merkki: " );
scanf( "%s", &merkki );

p = strchr( jono,merkki ); 
printf( "\np:n arvo: %p\n",p );	
	
return 0;
}