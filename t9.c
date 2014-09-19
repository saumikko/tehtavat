/*
t9.c
Muuta edellistä ohjelmaa, niin että ohjelma tulostaa montako kertaa 
antamasi merkki esiintyy antamassasi jonossa.
*/
#include <stdio.h>
#include <string.h>

int main (int argc, char const *argv[])
{
int lukumaara = 0;
char merkki;
char jono[21];
char * p;

printf( "Anna merkki (max 20 merkkiä): " );
scanf( "%s", &merkki );

printf( "Anna merkkijono: " );
scanf( "%s", jono );

p = strchr( jono,merkki );
while ( NULL != p )
    {
	lukumaara++;
    p = strchr( p+1,merkki );
    }
printf( "%s merkkiä löytyi %d kappaletta\n", &merkki, lukumaara );   

return 0;
}