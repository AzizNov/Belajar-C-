#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	
	int Jum_Beli, Bayar,Diskon,Jumlah[100], Harga[100], Sub_tot[100];
	string Nama_Barang[100];
	float tot;
	
	    cout<<"                    ____Program Kasir Mini Market BerDiskon____     "<<endl;
		cout<<"                           +++ MINI MARKET Sederhana +++            "<<endl;
		cout<<"                          ====Tugas Dasar Pemrograman====  "<<endl;
		cout<<"                          +++ Riska Amalia (20238060) +++  "<<endl;
		cout<<"==============================================================================="<<endl;
		cout<<endl;
		cout<<"_________________________________________________"<<endl;
		cout<<"|    Daftar Barang Dagangan     |      Harga     |"<<endl;
		cout<<"|                               |                |"<<endl;
		cout<<"| 1. Kecap                      |     Rp. 3000   |"<<endl;
		cout<<"| 2. Telur                      |     Rp. 2500   |"<<endl;
		cout<<"| 3. Mentega                    |     Rp. 4000   |"<<endl;
		cout<<"| 4. Keju                       |     Rp. 7000   |"<<endl;
		cout<<"| 5. Shampoo                    |     Rp. 2000   |"<<endl;
		cout<<"| 6. Sunlight                   |     Rp. 5000   |"<<endl;
		cout<<"| 7. Aqua                       |     Rp. 6000   |"<<endl;
		cout<<"| 8. Mie                        |     Rp. 3500   |"<<endl;
		cout<<"| 9. Fanta                      |     Rp. 4500   |"<<endl;
		cout<<"| 10.Roti                       |     Rp. 2000   |"<<endl;
		cout<<"| 11.Dan Lain Lain              |         -      |"<<endl;
	    cout<<"|_______________________________|________________|"<<endl;
		cout<<"______________________________________________________________"<<endl;
		cout<<"|                    Diskon Yang Ditawarkan                   |"<<endl;
		cout<<"|                                                             |"<<endl;
		cout<<"|1.Belanja Lebih dari atau sama dengan Rp.100.000 DISKON 0.6% |"<<endl;
		cout<<"|=============================================================|"<<endl;
		cout<<"|2.Belanja Lebih dari atau sama dengan Rp.50.000 DISKON 0.4%  |"<<endl;
		cout<<"|=============================================================|"<<endl;
		cout<<"|3.Belanja Lebih Dari atau sama dengan Rp.10.000 DISKON 0.2%  |"<<endl;
		cout<<"|=============================================================|"<<endl;
		cout<<"|_____________________________________________________________|"<<endl;
		cout<<endl;
	cout<<"Masukan Jumlah Barang Yang Di Beli : ";
	cin>>Jum_Beli;
	
	for (int i=0; i<Jum_Beli;i++){
		cout<<endl;
		cout<<"Masukan Barang Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Nama Barang : ";
		cin>>Nama_Barang[i];
		
		cout<<"Jumlah : ";
		cin>>Jumlah[i];
		
		cout<<"Harga : ";
		cin>>Harga[i];
		
		Sub_tot[i]=Jumlah[i]*Harga[i];
		tot+=Sub_tot[i];
		cout<<endl;
	}
	cout<<"______________________________________________________________________"<<endl;
	cout<<"           TOTAL BELANJA DI MINI MARKET SEDERHANA               "<<endl;
	cout<<"______________________________________________________________________"<<endl;
	cout<<"NO  Barang      Jumlah     Harga    Sub Total"<<endl;
	for (int i=0;i<Jum_Beli;++i){
		cout<<i+1<<setw(8)<<Nama_Barang[i]<<setw(10)<<Jumlah[i]<<setw(12)<<Harga[i]<<setw(12)<<Sub_tot[i]<<endl;
	}
	cout<<"______________________________________________________________________"<<endl;
	
	
	if (tot>=10000){
			Diskon=0.06*tot;
	} else if (tot>=50000){
			Diskon=0.04;
	} else if (tot>=25000){
			Diskon=0.02;
	} else{
			Diskon=0;
	}
	cout<<endl;
	cout<<"____________________________________________________________"<<endl;
	cout<<" ======___Masukan Jumlah Uang DiBayar Oleh Pembeli___====== "<<endl;
	cout<<"_____________________________________________________________"<<endl;
	cout<<"Jumlah Bayar : Rp."<<tot<<endl;
	cout<<"Diskon       : Rp."<<Diskon<<endl;
	cout<<"Total Bayar  : Rp."<<tot-Diskon<<endl;
	cout<<"Bayar        : Rp.";
	cin>>Bayar;
	cout<<"Kembali      : Rp."<<(Bayar-(tot-Diskon))<<endl;
	cout<<"_____________________________________________________________"<<endl;
	cout<<"===Terimakasih Telah BerBelanja Di Mini Market Sederhana==="<<endl;
	cout<<"___________________________________________________________"<<endl;
}

