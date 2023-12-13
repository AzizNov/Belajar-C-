#include <iostream>
#define harga 12000

using namespace std;

const int potongan = 10000;

int main() {
	
	float jumlah,banyak,uang,total,sisa;
	int nomor;
	string nama;
	int array[10] = {10000};
	int i=0;
	
	cout<<"====================="<<endl;
	cout<<"        APOTEK       "<<endl;
	cout<<" Program Kasir apotek"<<endl;
	cout<<"====================="<<endl;
	cout << "Potongan harga untuk pembelian obat = ";
	for(int i=0; i<4; i++);
	cout << array[i];
	cout<<endl;
	cout<<"Masukan Nomor Antrian Anda = ";
	cin>>nomor;
	cout<<"Masukan Nama Obat = ";
	cin>>nama;
	cout<<"Masukan Berapa Obat Yang Anda Beli = ";
	cin>>banyak;
	
	if(banyak >= 3)
	{
		jumlah = banyak * harga;
		total = jumlah - potongan;
		cout << "Jumlah yg harus dibayar = " << total;
		cout << endl;
	{
		cout << "Anda membayar dengan uang sebesar : ";
		cin >> uang;
		if(uang < total)
		cout << "Maaf uang anda kurang";
		cout << endl;
	}
	
		while(uang < total);
		sisa = uang - total;
		cout << "Kembalian = Rp. " << sisa << endl;
	}
	else{
		cout << "Tidak ada potongan untuk pembelian" << endl;
		cout << endl;
	}
	do {
		cout<<"terima kasih atas kunjungan anda"<<endl;
		cout<<"semoga lekas sembuh"<<endl;
		i++;
		}while(i<1);
	
	
	return 0;
}