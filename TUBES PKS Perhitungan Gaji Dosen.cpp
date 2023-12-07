//TUGAS BESAR PKS
//BAGAS SATRIO
//TIARA PUTRI ELISA
//STANISLAUS NICKO FASIO PRIYANJAGA

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"MASUKKAN BANYAK DATA YANG DIINGINKAN = ";
	cin>>n;
	cout<<endl;

	string nama[n],nip[n],keilmuan[n];
	int gaji[n],jumlahgaji[n];
	int tunjangananak[n],tunjanganistri[n];
	char golongan[n];
	char pilihan;

	do{
	for(int i=0;i<n;i++){
	cout<<"========================================="<<endl;
	cout<<"===   PROGRAM MENGHITUNG GAJI DOSEN   ==="<<endl;
	cout<<"========================================="<<endl;
	cout<<"Nama Lengkap		: ";
	cin.ignore();
	getline (cin,nama[i]);
	cout<<"NIP			: ";
	cin>>nip[i];
	cout<<"Bidang Keilmuan		: ";
	cin.ignore();
	getline (cin,keilmuan[i]);
	
	cout<<endl;
	
	cout<<"================================================"<<endl;
	cout<<"| Daftar Golongan                              |"<<endl;
	cout<<"| Golongan III (Lulusan S-2 hingga S-3)	       |"<<endl;
	cout<<"| 1. Golongan IIIb 	= A                    |"<<endl;
	cout<<"| 2. Golongan IIIc 	= B                    |"<<endl;
	cout<<"| 3. Golongan IIId 	= C                    |"<<endl;
	cout<<"| Golongan IV (Lulusan S-3)                    |"<<endl;
	cout<<"| 1. Golongan IVa	= D	               |"<<endl;
	cout<<"| 2. Golongan IVb	= E	               |"<<endl;
	cout<<"| 3. Golongan IVc	= F	               |"<<endl;
	cout<<"| 4. Golongan IVd	= G	               |"<<endl;
	cout<<"| 5. Golongan IVe	= H	               |"<<endl;
	cout<<"================================================"<<endl;
	cout<<"Golongan 		: ";
	cin>>golongan[i];
	
	cout<<endl;
	
	switch (golongan[i]){
	case 'A' :
		gaji [i]= 4415000;
		break; 
	case 'B' :
		gaji [i]= 4600000;
		break;
	case 'C' :
		gaji [i]= 4800000;
		break;
	case 'D':
		gaji [i]= 5000000;
		break;
	case 'E':
		gaji [i]= 5210000;
		break;
	case 'F':
		gaji [i]= 5430000;
		break;
	case 'G':
		gaji [i]= 5660000;
		break;
	case 'H':
		gaji [i]= 5900000;
		break;
	default :
		cout<<"Golongan Tidak Tersedia"<<endl;
		gaji [i]= 0;
	}
	tunjanganistri[i] = (gaji[i] * 0.2);
	tunjangananak[i] = (gaji[i] * 0.1);
	jumlahgaji[i] = (gaji[i] + tunjanganistri[i] + tunjangananak[i]);

	cout<<"======================================================================"<<endl;
	cout<<"|			GAJI DOSEN PER BULAN			     |"<<endl;
	cout<<"======================================================================"<<endl;
	cout<<"Nama				= "<<nama[i]<<endl;
	cout<<"NIP				= "<<nip[i]<<endl;
	cout<<"Bidang Keilmuan			= "<<keilmuan[i]<<endl;
	cout<<"Golongan			= "<<golongan[i]<<endl;
	cout<<"Gaji Pokok			= Rp. "<<gaji[i]<<endl;
	cout<<"Tunjangan Istri			= Rp. "<<tunjanganistri[i]<<endl;
	cout<<"Tunjangan Anak			= Rp. "<<tunjangananak[i]<<endl;
	cout<<"Gaji Yang Diterima		= Rp. "<<jumlahgaji[i]<<endl;
	cout<<"======================================================================"<<endl;
	cout<<endl;
	}
	cout<<endl;
	
	cout<<"ANDA INGIN MENGULANG PROGRAM INI, SILAHKAN PILIH OPSI (y/t) : "<<endl;
	cin>>pilihan;
	}while(pilihan=='y' || pilihan=='Y');
	cout<<endl;
	
	cout<<"========================"<<endl;
	cout<<"===   TERIMA KASIH   ==="<<endl;
	cout<<"========================"<<endl;
	
return 0;
}
