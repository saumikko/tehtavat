/*
t8.c
Muuta edellistä ohjelmaa niin, että myös merkkijono kysytään käyttäjältä. 
*/

#include <stdio.h>
#include <string.h>

int main (int argc, char const *argv[])
{
char merkki;
char jono[20];
char * p;

printf( "Anna merkki: " );
scanf( "%s", &merkki );

printf( "Anna merkkijono: " );
scanf( "%s", jono );

p = strchr( jono,merkki );
if ( NULL == p )
    {
	printf( "\nMerkkiä ei löytynyt!\n" ); 
    }
else
    {
    printf( "\nMerkki löytyi! p:n arvo: %p\n",p );   
    }
return 0;
}