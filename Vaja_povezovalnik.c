/****************************************************************
* FILENAME:     Vaja_povezovalnik.c
* DESCRIPTION:  Koda za vajo iz povezovalnika
* AUTHOR:       Mitja Nemec
* DATE:         24.10.2014
*
****************************************************************/

// Globalne spremenljivke
long vsota = 0;
long razlika;


// deklaracija funkcije
void foo(int a, int b);

/**************************************************************
* funkcija main - tukaj se prièe izvajanje programa
**************************************************************/
void main(void)
{
    // lokalne spremenljivke
	int x = 2;
	int y = 7;

    // kar tako postavimo vsoto in razliko
    vsota = 5;
    razlika = 6;

    // klièemo funkcijo, ki zares izraèuna vsoto in razliko
	foo(x, y)

    // neskonèna zanka, da se program ustavi
	while(1)
    {
        // DO NOTHING
    }

} //end of main

/**************************************************************
* definicija funkcije foo
**************************************************************/
void foo(int a, int b)
{
    vsota = a + b;
    razlika = a - b;
    

}




