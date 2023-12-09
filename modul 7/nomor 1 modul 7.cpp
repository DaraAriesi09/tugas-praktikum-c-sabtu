#include<iostream>
using namespace std;
int main()
{
	int i, nilai [10];
	for(i=1; i<=10; i++)
	{
		cout<<"Nilai Mahasiswa ke-"<<i<<" : ";
		cin>>nilai[i];
	}
	cout<<"Daftar nilai mahasiswa yang lulus \n";
	for(i=1; i<=10; i++)
	{
		if(nilai[i]>=60)
		cout<<"Mahasiswa ke-"<<i<<" dengan nilai "<<nilai[i]<<endl;
	}
}
