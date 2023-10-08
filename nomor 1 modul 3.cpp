#include <iostream>

int main()
{
	int celcius;
	float fahrenheit, reamur;
	
	printf("Masukan suhu dalan celcius : ");
	scanf("%if", &celcius);
	
	float farenheit= (celcius * 9 / 5) + 32;
	reamur = celcius * 4 / 5;
	
	printf("FARENHEIT dan REAMUR");
	printf("\nFarenheit = %i.2f", farenheit);
	printf("\nReamur = %i.2f", reamur);
	
	return 0;
}

