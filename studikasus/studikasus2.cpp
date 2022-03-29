#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int menu, porsi, harga;
	float jarak, ongkir, ongkirs, total, totals, totalakhir, disc;
	cout<<"=====RUMAH MAKAN SEDERHANA====="<<endl;
	cout<<"Menu dan Harga Yang Tersedia : "<<endl;
	cout<<"1. Ayam Geprek  : Rp. 21.000"<<endl;
	cout<<"2. Ayam Goreng  : Rp. 17.000"<<endl;
	cout<<"3. Udang Goreng : Rp. 19.000"<<endl;
	cout<<"4. Cumi Goreng  : Rp. 20.000"<<endl;
	cout<<"5. Ayam Bakar   : Rp. 25.000"<<endl;
	
	cout<<"Masukkan Pilihan Menu : ";cin>>menu;
	if (menu==1)
	{
		cout<<"Nama Makanan : Ayam Geprek"<<endl;
		cout<<"Harga : Rp. 21.000"<<endl;
		cout<<"Jumlah Porsi : ";cin>>porsi;
		harga=21000;
	} else if (menu==2)
	{
		cout<<"Nama Makanan : Ayam Goreng"<<endl;
		cout<<"Harga : Rp. 17.000"<<endl;
		cout<<"Jumlah Porsi : ";cin>>porsi;
		harga=17000;
	} else if (menu==3)
	{
		cout<<"Nama Makanan : Udang Goreng"<<endl;
		cout<<"Harga : Rp. 19.000"<<endl;
		cout<<"Jumlah Porsi : ";cin>>porsi;
		harga=19000;
	} else if (menu==4)
	{
		cout<<"Nama Makanan : Cumi Goreng"<<endl;
		cout<<"Harga : Rp. 20.000"<<endl;
		cout<<"Jumlah Porsi : ";cin>>porsi;
		harga=20000;
	}else if (menu==5)
	{
		cout<<"Nama Makanan : Ayam Bakar"<<endl;
		cout<<"Harga : Rp. 25.000"<<endl;
		cout<<"Jumlah Porsi : ";cin>>porsi;
		harga=25000;
	} else 
	{
		cout<<"MENU TIDAK ADA";
	}
	
	ofstream strk;
	strk.open("Kertas.txt", ios::out);
	strk<<"=====RUMAH MAKAN SEDERHANA====="<<endl;
	strk<<"Menu Dan Harga Yang Tersedia : "<<endl;
	strk<<"1. Ayam Geprek  : Rp. 21.000"<<endl;
	strk<<"2. Ayam Goreng  : Rp. 17.000"<<endl;
	strk<<"3. Udang Goreng : Rp. 19.000"<<endl;
	strk<<"4. Cumi Goreng  : Rp. 20.000"<<endl;
	strk<<"5. Ayam Bakar   : Rp. 25.000"<<endl;
	strk<<"======================================"<<endl;
	strk<<"Pilihan Menu : "<<menu<<endl;
	
	cout<<"Berapa Jarak Rumah(KM) : ";cin>>jarak;
	if (jarak <= 3)
	{
		ongkir=15000;
		cout<<"Ongkir : 15.000"<<endl;
		strk<<"Ongkir : 15.000"<<endl;
	}else if (jarak > 3)
	{
		ongkir=25000;
		cout<<"Ongkir : 15.000"<<endl;
		strk<<"Ongkir : 15.000"<<endl;
	}
	
	total=harga*porsi;
	cout<<"Total Bayar : "<<total<<endl;
	strk<<"Total Bayar : "<<total<<endl;
	if ((total>=25000) && (total<50000))
	{
		ongkirs=ongkir-3000;
		totalakhir=total+ongkirs;
		cout<<"disc = ongkir-3000"<<endl;
		strk<<"disc = ongkir-3000"<<endl;
		cout<<"TOTAL : "<<totalakhir;
		strk<<"TOTAL : "<<totalakhir;
	}else if ((totals>=50000) && (totals<150000))
	{
		ongkirs=ongkir-5000;
		disc=total*15/100;
		totals=total-disc;
		totalakhir=totals+ongkirs;
		cout<<"disc = ongkir-5000+15%"<<endl;
		strk<<"disc = ongkir-5000+15%"<<endl;
		cout<<"TOTAL : "<<totalakhir;
		strk<<"TOTAL : "<<totalakhir;
	}else if (totals>=150000)
	{
		ongkirs=ongkir-8000;
		disc=total*35/100;
		totals=total-disc;
		totalakhir=totals+ongkirs;
		cout<<"disc = ongkir-8000+35%"<<endl;
		strk<<"disc = ongkir-8000+35%"<<endl;
		cout<<"TOTAL : "<<totalakhir;
		strk<<"TOTAL : "<<totalakhir;
	}
	
	strk.close();
	
return 0;
}
