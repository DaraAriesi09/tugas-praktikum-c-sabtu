#include <iostream>

int main()
{
	int Alas, Tinggi;
	int Sm;
	
	printf("input Alas : ");
	scanf("f", Alas);
	
	printf("input Tinggi : ");
	scanf("f", Tinggi);
	
	//hitung sisi miring 
	Sm =(Alas*Alas)+(Tinggi*Tinggi);
	 
	printf("Sm");
	printf("\nAlas = %i", Alas);
	printf("\nTinggi = %i", Tinggi);
	printf("\nSm = %i", Sm);
	
	return 0;
}

