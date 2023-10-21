#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Masuk, Keluar, Lama;
	
	printf("Menentukan lama bekerja\n\n");
	printf(" Jam Masuk : ");
	scanf("%d,&Masuk");
	
	printf("\nJam Keluar : ");
	scanf("%d,&Keluar");
	
	if (Keluar >= Masuk);
    	Lama = Keluar - Masuk;
	
	    Lama = (11-Masuk) + Keluar;
	     
	printf("\n\n Lama bekerja adalah : %d Jam\n", Lama);
	
	return 0;
}
