#include <iostream>

void tambah(double a, double b, double *hasil){
	*hasil = a+b;
}

void kali(double a, double b, double &hasil){
	hasil = a * b;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double hasil;
	
	tambah(2.0,3.0,&hasil);
	
	std::cout<<"hasil penjumlahan:"
			 << hasil <<std::endl;
			 
	kali(2.0,3.0,hasil);
	std::cout<<"hasil perkalian:"
			 << hasil <<std::endl;
	
	return 0;
}
