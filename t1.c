/*
t1.c
Kirjoita ohjelma, joka tulostaa sille komentorivilt‰ annetut argumentit k‰‰nteisess‰ j‰rjestyksess‰. 
Esim. jos ohjelman nimi on testi.exe (lˆytyy visual studio 2012/debug hakemistosta) ja se k‰ynnistet‰‰n komennolla testi eka toka kolmas, niin tulostuu: 
kolmas toka eka 
*/

#include<stdio.h>

int main ( int argc, char *argv[] )
{
for (argc; argc > 1; argc--)
	{
	printf ("%s ",argv[argc-1]);
	}
return 0;
}
