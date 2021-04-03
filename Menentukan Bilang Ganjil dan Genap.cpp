#include <iostream>
using namespace std;

int main(){
	int x,y, perkalian, bagi;
	string melanjutkan;
	
	do{
		system ( "cls") ;
		//JUDUL
		cout<<"---------------------------------------"<<endl;
		cout<<" MENENTUKAN BILANGAN GANJIL DAN GENAP"<<endl;
		cout<<"---------------------------------------"<<endl;
		cout<<endl;
		
		//INPUT ANGKA DAN PERKALIAN
		cout<<"Masukan Angka 1 = ";
		cin>>x;
		
		cout<<"Masukan Angka 2 = ";
		cin>>y;
		cout<<endl;
		
		cout<<"============================================"<<endl;
		perkalian = x * y;
		cout<<"Perkalian dari "<<x<<" x "<<y<<" = "<<perkalian;
		cout<<endl;
		
		//MENENTUKAN BILANGAN GANJIL DAN GENAP 
		//DAN JIKA GENAP DI BAGI 2
		if(perkalian % 2 == 0){
			cout<<"Angka "<<perkalian<<" adalah bilangan Genap"<<endl;
			
			bagi = perkalian / 2;
			cout<<"hasil "<<perkalian<<" / 2 = "<<bagi<<endl;
		}else {
			cout<<"Angka "<<perkalian<<" adalah bilangan Ganjil "<<endl;
		}
		cout<<"============================================"<<endl;
		cout<<endl;
		
		cout<<"Mau Melanjutkan atau tidak ketik <y/n> = "; cin>>melanjutkan;
	}while (melanjutkan == "y");
	system( " cls " );
	cout<<"Program Selesai";
}
