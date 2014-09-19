/*
t7.c
Muuta edellistä ohjelmaa niin, että se tulostaa löytyikö merkkiä vai ei.
*/
#include <stdio.h>
#include <string.h>

int main (int argc, char const *argv[])
{
char merkki;
char * jono = "taateli";
char * p;

printf( "Anna merkki: " );
scanf( "%s", &merkki );

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